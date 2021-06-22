#include "Search_Engine_GUI.h"
#include "ui_Search_Engine_GUI.h"
#include <iostream>

Search_Engine_GUI::Search_Engine_GUI(QWidget *parent)
    : QMainWindow(parent)
{
    ui.setupUi(this);

    //For Drive Access
    QString mPath = "C:/";
    dirModel = new QFileSystemModel(this);

    dirModel->setFilter(QDir::NoDotAndDotDot | QDir::AllDirs);
    dirModel->setRootPath(mPath);

    ui.treeView->setModel(dirModel);
    ui.treeView->header()->setSectionResizeMode(0, QHeaderView::ResizeToContents);
    //ui.treeView->header()->setSectionResizeMode(3, QHeaderView::ResizeToContents);

    //For File Access
    fileModel = new QFileSystemModel(this);

    fileModel->setFilter(QDir::NoDotAndDotDot | QDir::Files);
    fileModel->setRootPath(mPath);

    ui.listView->setModel(fileModel);
}

void Search_Engine_GUI::on_treeView_doubleClicked(const QModelIndex& index)
{
    QString mPath = dirModel->fileInfo(index).absoluteFilePath();
    ui.listView->setRootIndex(fileModel->setRootPath(mPath));
}

void Search_Engine_GUI::on_LoadDir_clicked()
{
    QModelIndex index = ui.treeView->currentIndex();
    QString mPath = dirModel->fileInfo(index).absoluteFilePath();
    ui.listView->setRootIndex(fileModel->setRootPath(mPath));
}

void Search_Engine_GUI::on_listView_doubleClicked(const QModelIndex& index)
{
    QString mPath = fileModel->fileInfo(index).absoluteFilePath();
    QFile file(mPath);
    file.open(QIODevice::ReadOnly);

    QTextStream in(&file);
    QString displayLine;

    while (!in.atEnd())
    {
        displayLine = in.readLine();
        if (displayLine != nullptr) 
            ui.textBrowser->append(displayLine);
    }
}

void Search_Engine_GUI::on_LoadFile_clicked()
{
    QModelIndex index = ui.listView->currentIndex();
    QString mPath = dirModel->fileInfo(index).absoluteFilePath();
    QFile file(mPath);

    file.open(QIODevice::ReadOnly);

    QTextStream in(&file);
    QString displayLine;

    while (!in.atEnd())
    {
        displayLine = in.readLine();
        if (displayLine != nullptr)
            ui.textBrowser->append(displayLine);
    }
}