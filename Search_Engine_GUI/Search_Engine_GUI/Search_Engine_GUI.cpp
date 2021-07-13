#include "Search_Engine_GUI.h"
#include "ui_Search_Engine_GUI.h"

extern SLL curList;

Search_Engine_GUI::Search_Engine_GUI(QWidget *parent)
    : QMainWindow(parent)
{
    ui.setupUi(this);

    //Load button
    ui.LoadDir->setIcon(QIcon("add"));
    ui.AddFile->setIcon(QIcon("add"));
    ui.searchButton->setIcon(QIcon("icon"));

    //For Drive Access
    QString mPath = "C:/";
    dirModel = new QFileSystemModel(this);

    dirModel->setFilter(QDir::NoDotAndDotDot | QDir::AllDirs);
    dirModel->setRootPath(mPath);

    ui.treeView->setModel(dirModel);
    ui.treeView->setSelectionMode(QAbstractItemView::ExtendedSelection);
    ui.treeView->header()->setSectionResizeMode(0, QHeaderView::ResizeToContents);

    //For File Access

    listFileModel = new QStringListModel(this);

    ui.listView->setSelectionMode(QAbstractItemView::ExtendedSelection);
    ui.listView->setEditTriggers(QAbstractItemView::NoEditTriggers);

    ui.listView_2->setSelectionMode(QAbstractItemView::ExtendedSelection);
    ui.listView_2->setEditTriggers(QAbstractItemView::NoEditTriggers);

    //For list file Query
    listFileQueryModel = new QStringListModel(this);

    //For list result
    ui.tableWidget->setColumnCount(2);
    ui.tableWidget->setHorizontalHeaderLabels(QStringList() << "Document" << "Score");
    ui.tableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui.tableWidget->sortByColumn(1, Qt::DescendingOrder);

    ui.resultInfo->setText("");

    ShowWaiting();
}

/*
* Hiển thị các file .txt trong một thư mục được chọn, hiển thị ở Danh sách văn bản
*/
void Search_Engine_GUI::displayFiles(const QString& mPath)
{
    QStringList listFile;
    QDirIterator it(mPath, { "*.txt" }, QDir::Files, QDirIterator::NoIteratorFlags);

    while (it.hasNext())
    {
        it.next();
        listFile.append(it.fileName());
        //QString name = it.fileName();
    }

    if (!listFile.isEmpty())
    {
        listFileModel->setStringList(listFile);
        ui.listView->setModel(listFileModel);
    }
    else ui.listView->setModel(NULL);
}

/*
* Nhấn double-click vào một thư mục trong danh sách thư mục
*/
void Search_Engine_GUI::on_treeView_doubleClicked(const QModelIndex& index)
{
    pathCur = dirModel->fileInfo(index).absoluteFilePath();
    displayFiles(pathCur);
}

/*
* Nhấn vào Thêm truy vấn (cột thư mục)
* + Đưa các tập tin được chọn hoặc con của thư mục được chọn vào danh sách văn bản truy vấn
*/
void Search_Engine_GUI::on_LoadDir_clicked()
{
    //Lấy đường dẫn của đối tượng được chọn
    QModelIndex index = ui.treeView->currentIndex();
    QString mPath = dirModel->fileInfo(index).absoluteFilePath();
    QDir dir(QDir::current());
    mPath = dir.relativeFilePath(mPath);
    int cnt = 0;

    QDirIterator it(mPath, {"*.txt"}, QDir::Files, QDirIterator::Subdirectories);

    while (it.hasNext())
    {
        cnt++;
        QString test = it.next();
        if (cnt > 100)
        {
            ShowWarning();
            break;
        }
        addFIle(it.filePath().toStdWString());
        //out << it.next() << '\n';
        listFileQuery.append(it.filePath());
        numFileQuery++;
    }

    listFileQueryModel->setStringList(listFileQuery);
    ui.listView_2->setModel(listFileQueryModel);
}

/*
* Nhấn vào thêm truy vấn (cột danh sách các file .txt)
*/
void Search_Engine_GUI::on_AddFile_clicked()
{
    QModelIndexList listSelected = ui.listView->selectionModel()->selectedIndexes();
    QString path;
    QDir dir(QDir::current());
    QString prefix = dir.relativeFilePath(pathCur);
    int cnt = 0;

    foreach(const QModelIndex & index, listSelected)
    {
        cnt++;
        if (cnt > 100)
        {
            ShowWarning();
            break;
        }
        path = prefix + '/' + index.data().toString();
        wstring newPath = path.toStdWString();
        addFIle(newPath);
        //addFIle(std::path.toLocal8Bit().constData());
        //in << path << '\n';
        listFileQuery.append(path);
        numFileQuery++;
    }

    listFileQueryModel->setStringList(listFileQuery);
    ui.listView_2->setModel(listFileQueryModel);
}

/*
* Nhấn double-click vào một tệp .txt bên danh sách văn bản
*/
void Search_Engine_GUI::on_listView_doubleClicked(const QModelIndex& index)
{
    QString mPath = pathCur + '/' + index.data().toString();

    QFile file(mPath);

    file.open(QIODevice::ReadOnly);

    QTextStream in(&file);
    QString displayLine;

    ui.textBrowser->clear();

    while (!in.atEnd())
    {
        displayLine = in.readLine();
        if (displayLine != nullptr) 
            ui.textBrowser->append(displayLine);
    }
}

/*
* Nhấn double-click vào một tệp .txt bên danh sách truy vấn
*/
void Search_Engine_GUI::on_listView_2_doubleClicked(const QModelIndex& index)
{
    QString mPath = index.data().toString();

    QFile file(mPath);

    file.open(QIODevice::ReadOnly);

    QTextStream in(&file);
    QString displayLine;

    ui.textBrowser->clear();

    while (!in.atEnd())
    {
        displayLine = in.readLine();
        if (displayLine != nullptr)
            ui.textBrowser->append(displayLine);
    }
}

void Search_Engine_GUI::on_tableWidget_cellDoubleClicked(int r, int c)
{
    QTableWidgetItem *item = ui.tableWidget->item(r, 0);
    QString mPath = item->data(0).toString();

    QFile file(mPath);

    file.open(QIODevice::ReadOnly);

    QTextStream in(&file);
    QString displayLine;

    ui.textBrowser->clear();

    while (!in.atEnd())
    {
        displayLine = in.readLine();
        if (displayLine != nullptr)
            ui.textBrowser->append(displayLine);
    }

    file.close();
}

/*
* Nhấn vào nút Đọc nội dung file .txt
*/
void Search_Engine_GUI::on_LoadFile_clicked()
{
    QModelIndex index;
    QString mPath;
    if (tabChose == 0)
    {
        index = ui.listView->currentIndex();
        mPath = pathCur + '/' + index.data().toString();
    }
    else
    {
        index = ui.listView_2->currentIndex();
        mPath = index.data().toString();
    }
    QFile file(mPath);

    file.open(QIODevice::ReadOnly);

    QTextStream in(&file);
    QString displayLine;

    ui.textBrowser->clear();

    while (!in.atEnd())
    {
        displayLine = in.readLine();
        if (displayLine != nullptr)
            ui.textBrowser->append(displayLine);
    }

    file.close();
}

void Search_Engine_GUI::on_tabWidget_tabBarClicked(int index)
{
    tabChose = index;
    if (index == 0) ui.DelFile->hide(); else ui.DelFile->show();
}

/*
* Nhấn vào nút Xoá file truy vấn
*/
void Search_Engine_GUI::on_DelFile_clicked()
{
    QModelIndexList listSelected = ui.listView_2->selectionModel()->selectedIndexes();

    foreach(const QModelIndex & index, listSelected)
    {
        index.data().toString();
        removeFile(index.data().toString().toStdWString());
        numFileQuery--;
    }

    QStringList tmpListFileQuery;
    QFile file("Crawl/index.txt");
    file.open(QIODevice::ReadOnly);
    int cnt = 0;
    while (cnt < numFileQuery)
    {
        cnt++;
        tmpListFileQuery.append(file.readLine().simplified());
    }
    listFileQuery = tmpListFileQuery;
    listFileQueryModel->setStringList(listFileQuery);
    ui.listView_2->setModel(listFileQueryModel);
    file.close();
}

void Search_Engine_GUI::addResult(QString name, QString score, int cnt)
{
    ui.tableWidget->insertRow(cnt);
    ui.tableWidget->setItem(cnt, 1, new CustomTableWidgetItem(score));
    ui.tableWidget->setItem(cnt, 0, new CustomTableWidgetItem(name));
}

void Search_Engine_GUI::on_searchBox_returnPressed()
{
    QString searchText = ui.searchBox->text();
    Searching(searchText);
}

void Search_Engine_GUI::on_searchButton_clicked()
{
    QString searchText = ui.searchBox->text();
    Searching(searchText);
}

void Search_Engine_GUI::Searching(QString searchText)
{
    QElapsedTimer timer;
    timer.start();
    searchData(curList, searchText.toStdWString());
    double timeUsed = timer.elapsed();

    ui.tableWidget->clearContents();
    ui.tableWidget->setRowCount(0);
    ui.tableWidget->setSortingEnabled(false);
    QFile file("out.txt");
    file.open(QIODevice::ReadOnly);
    QTextStream in(&file);
    int cnt(0);
    while (!in.atEnd())
    {
        QStringList list = in.readLine().split(QLatin1Char('*'), Qt::SkipEmptyParts);
        if (!list.isEmpty()) addResult(list.at(0), list.at(1), cnt++);
    }

    ui.tableWidget->setSortingEnabled(true);

    ui.resultInfo->setText(QString::fromWCharArray(L"Tìm thấy %1 kết quả trong %2 giây").arg(cnt).arg(timeUsed / 1000, 0, 'g', 4));

    file.close();
}

void Search_Engine_GUI::ShowWarning()
{
    WarningDialog warning;
    warning.setModal(true);
    warning.exec();
}

void Search_Engine_GUI::ShowWaiting()
{
    waiting = new WaitingDialog(this);
    waiting->show();
}

void Search_Engine_GUI::DestroyWaiting()
{
    waiting->reject();
}