#include "Search_Engine_GUI.h"
#include "ui_Search_Engine_GUI.h"
#include <string>

Search_Engine_GUI::Search_Engine_GUI(QWidget *parent)
    : QMainWindow(parent)
{
    ui.setupUi(this);

    //Load button
    ui.LoadDir->setIcon(QIcon("add"));
    ui.AddFile->setIcon(QIcon("add"));

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
    ui.treeWidget->setColumnCount(3);
    ui.treeWidget->setHeaderLabels(QStringList() << "Rank" << "Document" << "Score");
    ui.treeWidget->sortItems(3, Qt::DescendingOrder);
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

    //Xuất đường dẫn của tất cả các file .txt thuộc đối tượng được chọn vào file index.txt
    QFile file("index.txt");
    file.open(QIODevice::Append);
    QDirIterator it(mPath, {"*.txt"}, QDir::Files, QDirIterator::Subdirectories);
    QTextStream out(&file);

    while (it.hasNext())
    {
        out << it.next() << '\n';
        listFileQuery.append(it.filePath());
    }

    listFileQueryModel->setStringList(listFileQuery);

    ui.listView_2->setModel(listFileQueryModel);

    file.close();
}

/*
* Nhấn vào thêm truy vấn (cột danh sách các file .txt)
*/
void Search_Engine_GUI::on_AddFile_clicked()
{
    QModelIndexList listSelected = ui.listView->selectionModel()->selectedIndexes();
    QFile file("index.txt");
    QString path;
    QDir dir(QDir::current());
    QString prefix = dir.relativeFilePath(pathCur);

    file.open(QIODevice::Append);

    QTextStream in(&file);

    foreach(const QModelIndex & index, listSelected)
    {
        path = prefix + '/' + index.data().toString();
        in << path << '\n';
        listFileQuery.append(path);
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
* Nhấn vào nút Đọc nội dung file .txt
*/
void Search_Engine_GUI::on_LoadFile_clicked()
{
    QModelIndex index = ui.listView->currentIndex();
    QString mPath = dirModel->fileInfo(index).absoluteFilePath();
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

void Search_Engine_GUI :: on_listView_2_doubleClicked(const QModelIndex& index)
{
    QString path = listFileQueryModel->data(index).toString();
    QFile file("removeItem.txt");
    file.open(QIODevice::Append);
    QTextStream out(&file);
    out << path << '\n';

    file.close();
}

/*
* Nhấn vào nút Xoá file truy vấn
*/
void Search_Engine_GUI::on_DelFile_clicked()
{
    QModelIndexList listSelected = ui.listView_2->selectionModel()->selectedIndexes();
    QFile file("removeItem.txt");
    file.open(QIODevice::Append);
    QTextStream out(&file);

    foreach(const QModelIndex & index, listSelected)
    {
        index.data().toString();
        out << index.data().toString() << '\n';
    }

    file.close();
}

void Search_Engine_GUI::addResult(QString rank, QString name, QString score)
{
    QTreeWidgetItem* treeItem = new QTreeWidgetItem(ui.treeWidget);

    treeItem->setText(0, rank);
    treeItem->setText(1, name);
    treeItem->setText(2, score);
}

void Search_Engine_GUI::on_ShowResult_clicked()
{
    addResult("1", "H.txt", "10.2");
    addResult("2", "T.txt", "10.02");
}