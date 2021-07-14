/********************************************************************************
** Form generated from reading UI file 'Search_Engine_GUI.ui'
**
** Created by: Qt User Interface Compiler version 6.1.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SEARCH_ENGINE_GUI_H
#define UI_SEARCH_ENGINE_GUI_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QTreeView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Search_Engine_GUIClass
{
public:
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout_4;
    QSplitter *splitter;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_7;
    QVBoxLayout *verticalLayout_3;
    QLabel *label;
    QTreeView *treeView;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *LoadDir;
    QVBoxLayout *verticalLayout_2;
    QTabWidget *tabWidget;
    QWidget *tab;
    QHBoxLayout *horizontalLayout_2;
    QListView *listView;
    QWidget *tab_2;
    QHBoxLayout *horizontalLayout_3;
    QListView *listView_2;
    QHBoxLayout *horizontalLayout;
    QPushButton *LoadFile;
    QPushButton *AddFile;
    QPushButton *DelFile;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_5;
    QLineEdit *searchBox;
    QPushButton *searchButton;
    QToolButton *setting;
    QTabWidget *tabWidget_2;
    QWidget *tab_3;
    QVBoxLayout *verticalLayout_5;
    QTextBrowser *textBrowser;
    QWidget *tab_4;
    QVBoxLayout *verticalLayout_6;
    QTableWidget *tableWidget;
    QLabel *resultInfo;
    QHBoxLayout *horizontalLayout_6;
    QMenuBar *menuBar;
    QMenu *menuHelp;
    QMenu *menuAbout;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *Search_Engine_GUIClass)
    {
        if (Search_Engine_GUIClass->objectName().isEmpty())
            Search_Engine_GUIClass->setObjectName(QString::fromUtf8("Search_Engine_GUIClass"));
        Search_Engine_GUIClass->resize(966, 602);
        centralWidget = new QWidget(Search_Engine_GUIClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        verticalLayout_4 = new QVBoxLayout(centralWidget);
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setContentsMargins(11, 11, 11, 11);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        splitter = new QSplitter(centralWidget);
        splitter->setObjectName(QString::fromUtf8("splitter"));
        splitter->setOrientation(Qt::Horizontal);
        layoutWidget = new QWidget(splitter);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        horizontalLayout_7 = new QHBoxLayout(layoutWidget);
        horizontalLayout_7->setSpacing(6);
        horizontalLayout_7->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        horizontalLayout_7->setContentsMargins(0, 0, 0, 0);
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        label = new QLabel(layoutWidget);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout_3->addWidget(label);

        treeView = new QTreeView(layoutWidget);
        treeView->setObjectName(QString::fromUtf8("treeView"));

        verticalLayout_3->addWidget(treeView);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        LoadDir = new QPushButton(layoutWidget);
        LoadDir->setObjectName(QString::fromUtf8("LoadDir"));
        LoadDir->setAutoFillBackground(false);
        QIcon icon;
        icon.addFile(QString::fromUtf8("."), QSize(), QIcon::Normal, QIcon::Off);
        LoadDir->setIcon(icon);

        horizontalLayout_4->addWidget(LoadDir);


        verticalLayout_3->addLayout(horizontalLayout_4);


        horizontalLayout_7->addLayout(verticalLayout_3);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        tabWidget = new QTabWidget(layoutWidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        horizontalLayout_2 = new QHBoxLayout(tab);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        listView = new QListView(tab);
        listView->setObjectName(QString::fromUtf8("listView"));

        horizontalLayout_2->addWidget(listView);

        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        horizontalLayout_3 = new QHBoxLayout(tab_2);
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        listView_2 = new QListView(tab_2);
        listView_2->setObjectName(QString::fromUtf8("listView_2"));

        horizontalLayout_3->addWidget(listView_2);

        tabWidget->addTab(tab_2, QString());

        verticalLayout_2->addWidget(tabWidget);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        LoadFile = new QPushButton(layoutWidget);
        LoadFile->setObjectName(QString::fromUtf8("LoadFile"));

        horizontalLayout->addWidget(LoadFile);

        AddFile = new QPushButton(layoutWidget);
        AddFile->setObjectName(QString::fromUtf8("AddFile"));

        horizontalLayout->addWidget(AddFile);

        DelFile = new QPushButton(layoutWidget);
        DelFile->setObjectName(QString::fromUtf8("DelFile"));

        horizontalLayout->addWidget(DelFile);


        verticalLayout_2->addLayout(horizontalLayout);


        horizontalLayout_7->addLayout(verticalLayout_2);

        splitter->addWidget(layoutWidget);
        verticalLayoutWidget = new QWidget(splitter);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        searchBox = new QLineEdit(verticalLayoutWidget);
        searchBox->setObjectName(QString::fromUtf8("searchBox"));

        horizontalLayout_5->addWidget(searchBox);

        searchButton = new QPushButton(verticalLayoutWidget);
        searchButton->setObjectName(QString::fromUtf8("searchButton"));

        horizontalLayout_5->addWidget(searchButton);

        setting = new QToolButton(verticalLayoutWidget);
        setting->setObjectName(QString::fromUtf8("setting"));

        horizontalLayout_5->addWidget(setting);


        verticalLayout->addLayout(horizontalLayout_5);

        tabWidget_2 = new QTabWidget(verticalLayoutWidget);
        tabWidget_2->setObjectName(QString::fromUtf8("tabWidget_2"));
        tab_3 = new QWidget();
        tab_3->setObjectName(QString::fromUtf8("tab_3"));
        verticalLayout_5 = new QVBoxLayout(tab_3);
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setContentsMargins(11, 11, 11, 11);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        textBrowser = new QTextBrowser(tab_3);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));

        verticalLayout_5->addWidget(textBrowser);

        tabWidget_2->addTab(tab_3, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName(QString::fromUtf8("tab_4"));
        verticalLayout_6 = new QVBoxLayout(tab_4);
        verticalLayout_6->setSpacing(6);
        verticalLayout_6->setContentsMargins(11, 11, 11, 11);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        tableWidget = new QTableWidget(tab_4);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));

        verticalLayout_6->addWidget(tableWidget);

        tabWidget_2->addTab(tab_4, QString());

        verticalLayout->addWidget(tabWidget_2);

        resultInfo = new QLabel(verticalLayoutWidget);
        resultInfo->setObjectName(QString::fromUtf8("resultInfo"));

        verticalLayout->addWidget(resultInfo);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));

        verticalLayout->addLayout(horizontalLayout_6);

        splitter->addWidget(verticalLayoutWidget);

        verticalLayout_4->addWidget(splitter);

        Search_Engine_GUIClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(Search_Engine_GUIClass);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 966, 22));
        menuHelp = new QMenu(menuBar);
        menuHelp->setObjectName(QString::fromUtf8("menuHelp"));
        menuAbout = new QMenu(menuBar);
        menuAbout->setObjectName(QString::fromUtf8("menuAbout"));
        Search_Engine_GUIClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(Search_Engine_GUIClass);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        Search_Engine_GUIClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(Search_Engine_GUIClass);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        Search_Engine_GUIClass->setStatusBar(statusBar);

        menuBar->addAction(menuHelp->menuAction());
        menuBar->addAction(menuAbout->menuAction());

        retranslateUi(Search_Engine_GUIClass);

        tabWidget->setCurrentIndex(1);
        tabWidget_2->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(Search_Engine_GUIClass);
    } // setupUi

    void retranslateUi(QMainWindow *Search_Engine_GUIClass)
    {
        Search_Engine_GUIClass->setWindowTitle(QCoreApplication::translate("Search_Engine_GUIClass", "Search_Engine_GUI", nullptr));
        label->setText(QCoreApplication::translate("Search_Engine_GUIClass", "<html><head/><body><p align=\"center\">C\303\242y th\306\260 m\341\273\245c</p></body></html>", nullptr));
#if QT_CONFIG(tooltip)
        LoadDir->setToolTip(QCoreApplication::translate("Search_Engine_GUIClass", "<html><head/><body><p>Hi\341\273\203n th\341\273\213 danh s\303\241ch c\303\241c v\304\203n b\341\272\243n b\303\252n trong th\306\260 m\341\273\245c c\341\272\247n truy xu\341\272\245t</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        LoadDir->setText(QString());
#if QT_CONFIG(shortcut)
        LoadDir->setShortcut(QString());
#endif // QT_CONFIG(shortcut)
        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("Search_Engine_GUIClass", "Danh s\303\241ch v\304\203n b\341\272\243n", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("Search_Engine_GUIClass", "Danh s\303\241ch v\304\203n b\341\272\243n truy v\341\272\245n", nullptr));
#if QT_CONFIG(tooltip)
        LoadFile->setToolTip(QCoreApplication::translate("Search_Engine_GUIClass", "<html><head/><body><p>Hi\341\273\203n th\341\273\213 n\341\273\231i dung v\304\203n b\341\272\243n</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        LoadFile->setText(QString());
#if QT_CONFIG(tooltip)
        AddFile->setToolTip(QCoreApplication::translate("Search_Engine_GUIClass", "<html><head/><body><p>Th\303\252m v\304\203n b\341\272\243n v\303\240o danh s\303\241ch c\341\272\247n truy v\341\272\245n [Imcomplete]</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        AddFile->setText(QString());
#if QT_CONFIG(tooltip)
        DelFile->setToolTip(QCoreApplication::translate("Search_Engine_GUIClass", "<html><head/><body><p>Xo\303\241 t\341\273\207p v\304\203n b\341\272\243n \304\221\303\243 ch\341\273\215n [Imcomplete]</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        DelFile->setText(QString());
        searchBox->setText(QString());
        searchButton->setText(QString());
        setting->setText(QString());
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_3), QCoreApplication::translate("Search_Engine_GUIClass", "N\341\273\231i dung v\304\203n b\341\272\243n", nullptr));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_4), QCoreApplication::translate("Search_Engine_GUIClass", "K\341\272\277t qu\341\272\243", nullptr));
        resultInfo->setText(QCoreApplication::translate("Search_Engine_GUIClass", "TextLabel", nullptr));
        menuHelp->setTitle(QCoreApplication::translate("Search_Engine_GUIClass", "Help", nullptr));
        menuAbout->setTitle(QCoreApplication::translate("Search_Engine_GUIClass", "About", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Search_Engine_GUIClass: public Ui_Search_Engine_GUIClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SEARCH_ENGINE_GUI_H
