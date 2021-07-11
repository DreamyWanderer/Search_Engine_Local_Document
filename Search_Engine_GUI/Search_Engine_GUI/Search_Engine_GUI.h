#pragma once

#include <QtWidgets/QMainWindow>
#include <QFileSystemModel>
#include <QTextStream>
#include <QFile>
#include <QTreeView>
#include <QListView>
#include <QStringList>
#include <QStringListModel>
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
    void on_listView_2_doubleClicked(const QModelIndex& index);
    void on_DelFile_clicked();
    void on_AddFile_clicked();
    void displayFiles(const QString& mPath);
    void addResult(QString rank, QString name, QString score);
    void on_ShowResult_clicked();

private:
    Ui::Search_Engine_GUIClass ui;

    QFileSystemModel* dirModel;
    QStringListModel* listFileQueryModel, * listFileModel;
    QStringList listFileQuery;
    QString pathCur;
};
