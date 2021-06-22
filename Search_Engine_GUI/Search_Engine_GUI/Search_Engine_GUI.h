#pragma once

#include <QtWidgets/QMainWindow>
#include <QFileSystemModel>
#include <QTextStream>
#include <QFile>
#include <QTreeView>
#include <QListView>
#include "ui_Search_Engine_GUI.h"

class Search_Engine_GUI : public QMainWindow
{
    Q_OBJECT

public:
    Search_Engine_GUI(QWidget *parent = Q_NULLPTR);

private slots:
    void on_treeView_doubleClicked(const QModelIndex& index);
    void on_LoadDir_clicked();
    void on_listView_doubleClicked(const QModelIndex& index);
    void on_LoadFile_clicked();

private:
    Ui::Search_Engine_GUIClass ui;

    QFileSystemModel *dirModel;
    QFileSystemModel *fileModel;
};
