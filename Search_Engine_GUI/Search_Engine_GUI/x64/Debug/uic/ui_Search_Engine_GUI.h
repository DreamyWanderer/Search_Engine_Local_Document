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
    QHBoxLayout *horizontalLayout_8;
    QSplitter *splitter;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_7;
    QVBoxLayout *verticalLayout_3;
    QLabel *label;
    QTreeView *treeView;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *LoadDir;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_2;
    QListView *listView;
    QHBoxLayout *horizontalLayout;
    QPushButton *LoadFile;
    QPushButton *AddFile;
    QPushButton *DelFile;
    QToolButton *MetaData;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_5;
    QLineEdit *lineEdit;
    QToolButton *toolButton_2;
    QLabel *label_3;
    QTextBrowser *textBrowser;
    QHBoxLayout *horizontalLayout_6;
    QPushButton *ShowResult;
    QPushButton *Setting;
    QMenuBar *menuBar;
    QMenu *menuFile;
    QMenu *menuSetting;
    QMenu *menuHelp;
    QMenu *menuAbout;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *Search_Engine_GUIClass)
    {
        if (Search_Engine_GUIClass->objectName().isEmpty())
            Search_Engine_GUIClass->setObjectName(QString::fromUtf8("Search_Engine_GUIClass"));
        Search_Engine_GUIClass->resize(920, 588);
        centralWidget = new QWidget(Search_Engine_GUIClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        horizontalLayout_8 = new QHBoxLayout(centralWidget);
        horizontalLayout_8->setSpacing(6);
        horizontalLayout_8->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
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

        horizontalLayout_4->addWidget(LoadDir);


        verticalLayout_3->addLayout(horizontalLayout_4);


        horizontalLayout_7->addLayout(verticalLayout_3);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        verticalLayout_2->addWidget(label_2);

        listView = new QListView(layoutWidget);
        listView->setObjectName(QString::fromUtf8("listView"));

        verticalLayout_2->addWidget(listView);

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

        MetaData = new QToolButton(layoutWidget);
        MetaData->setObjectName(QString::fromUtf8("MetaData"));

        horizontalLayout->addWidget(MetaData);


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
        lineEdit = new QLineEdit(verticalLayoutWidget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        horizontalLayout_5->addWidget(lineEdit);

        toolButton_2 = new QToolButton(verticalLayoutWidget);
        toolButton_2->setObjectName(QString::fromUtf8("toolButton_2"));

        horizontalLayout_5->addWidget(toolButton_2);


        verticalLayout->addLayout(horizontalLayout_5);

        label_3 = new QLabel(verticalLayoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        verticalLayout->addWidget(label_3);

        textBrowser = new QTextBrowser(verticalLayoutWidget);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));

        verticalLayout->addWidget(textBrowser);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        ShowResult = new QPushButton(verticalLayoutWidget);
        ShowResult->setObjectName(QString::fromUtf8("ShowResult"));

        horizontalLayout_6->addWidget(ShowResult);

        Setting = new QPushButton(verticalLayoutWidget);
        Setting->setObjectName(QString::fromUtf8("Setting"));

        horizontalLayout_6->addWidget(Setting);


        verticalLayout->addLayout(horizontalLayout_6);

        splitter->addWidget(verticalLayoutWidget);

        horizontalLayout_8->addWidget(splitter);

        Search_Engine_GUIClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(Search_Engine_GUIClass);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 920, 22));
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName(QString::fromUtf8("menuFile"));
        menuSetting = new QMenu(menuBar);
        menuSetting->setObjectName(QString::fromUtf8("menuSetting"));
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

        menuBar->addAction(menuFile->menuAction());
        menuBar->addAction(menuSetting->menuAction());
        menuBar->addAction(menuHelp->menuAction());
        menuBar->addAction(menuAbout->menuAction());

        retranslateUi(Search_Engine_GUIClass);

        QMetaObject::connectSlotsByName(Search_Engine_GUIClass);
    } // setupUi

    void retranslateUi(QMainWindow *Search_Engine_GUIClass)
    {
        Search_Engine_GUIClass->setWindowTitle(QCoreApplication::translate("Search_Engine_GUIClass", "Search_Engine_GUI", nullptr));
        label->setText(QCoreApplication::translate("Search_Engine_GUIClass", "<html><head/><body><p align=\"center\"><span style=\" font-weight:700;\">C\303\242y th\306\260 m\341\273\245c</span></p></body></html>", nullptr));
#if QT_CONFIG(tooltip)
        LoadDir->setToolTip(QCoreApplication::translate("Search_Engine_GUIClass", "<html><head/><body><p>Hi\341\273\203n th\341\273\213 danh s\303\241ch c\303\241c v\304\203n b\341\272\243n b\303\252n trong th\306\260 m\341\273\245c c\341\272\247n truy xu\341\272\245t</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        LoadDir->setText(QCoreApplication::translate("Search_Engine_GUIClass", "T\341\272\243i th\306\260 m\341\273\245c", nullptr));
        label_2->setText(QCoreApplication::translate("Search_Engine_GUIClass", "<html><head/><body><p align=\"center\"><span style=\" font-weight:700;\">Danh s\303\241ch v\304\203n b\341\272\243n</span></p></body></html>", nullptr));
#if QT_CONFIG(tooltip)
        LoadFile->setToolTip(QCoreApplication::translate("Search_Engine_GUIClass", "<html><head/><body><p>Hi\341\273\203n th\341\273\213 n\341\273\231i dung v\304\203n b\341\272\243n</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        LoadFile->setText(QCoreApplication::translate("Search_Engine_GUIClass", "\304\220\341\273\215c file", nullptr));
#if QT_CONFIG(tooltip)
        AddFile->setToolTip(QCoreApplication::translate("Search_Engine_GUIClass", "<html><head/><body><p>Th\303\252m v\304\203n b\341\272\243n v\303\240o danh s\303\241ch c\341\272\247n truy v\341\272\245n [Imcomplete]</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        AddFile->setText(QCoreApplication::translate("Search_Engine_GUIClass", "Th\303\252m file", nullptr));
#if QT_CONFIG(tooltip)
        DelFile->setToolTip(QCoreApplication::translate("Search_Engine_GUIClass", "<html><head/><body><p>Xo\303\241 t\341\273\207p v\304\203n b\341\272\243n \304\221\303\243 ch\341\273\215n [Imcomplete]</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        DelFile->setText(QCoreApplication::translate("Search_Engine_GUIClass", "Xo\303\241 file", nullptr));
#if QT_CONFIG(tooltip)
        MetaData->setToolTip(QCoreApplication::translate("Search_Engine_GUIClass", "<html><head/><body><p>Tr\303\255ch xu\341\272\245t t\341\273\207p si\303\252u d\341\273\257 li\341\273\207u</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        MetaData->setText(QString());
        lineEdit->setText(QCoreApplication::translate("Search_Engine_GUIClass", "Nh\341\272\255p t\341\273\253 kho\303\241", nullptr));
#if QT_CONFIG(tooltip)
        toolButton_2->setToolTip(QCoreApplication::translate("Search_Engine_GUIClass", "<html><head/><body><p>T\303\254m ki\341\272\277m [Imcomplete]</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        toolButton_2->setText(QString());
        label_3->setText(QCoreApplication::translate("Search_Engine_GUIClass", "<html><head/><body><p align=\"center\"><span style=\" font-weight:700;\">K\341\272\277t qu\341\272\243 / N\341\273\231i dung v\304\203n b\341\272\243n</span></p></body></html>", nullptr));
#if QT_CONFIG(tooltip)
        ShowResult->setToolTip(QCoreApplication::translate("Search_Engine_GUIClass", "<html><head/><body><p>Chuy\341\273\203n qua l\341\272\241i gi\341\273\257a hi\341\273\203n th\341\273\213 n\341\273\231i dung v\304\203n b\341\272\243n v\303\240 k\341\272\277t qu\341\272\243 t\303\254m ki\341\272\277m [Imcomplete]</p><p><br/></p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        ShowResult->setText(QCoreApplication::translate("Search_Engine_GUIClass", "Hi\341\273\207n k\341\272\277t qu\341\272\243 truy v\341\272\245n", nullptr));
#if QT_CONFIG(tooltip)
        Setting->setToolTip(QCoreApplication::translate("Search_Engine_GUIClass", "<html><head/><body><p>Tu\341\273\263 ch\341\273\211nh y\303\252u c\341\272\247u t\303\254m ki\341\272\277m [Imcomplete]</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        Setting->setText(QCoreApplication::translate("Search_Engine_GUIClass", "Thi\341\272\277t l\341\272\255p c\303\240i \304\221\341\272\267t", nullptr));
        menuFile->setTitle(QCoreApplication::translate("Search_Engine_GUIClass", "File", nullptr));
        menuSetting->setTitle(QCoreApplication::translate("Search_Engine_GUIClass", "Setting", nullptr));
        menuHelp->setTitle(QCoreApplication::translate("Search_Engine_GUIClass", "Help", nullptr));
        menuAbout->setTitle(QCoreApplication::translate("Search_Engine_GUIClass", "About", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Search_Engine_GUIClass: public Ui_Search_Engine_GUIClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SEARCH_ENGINE_GUI_H
