/********************************************************************************
** Form generated from reading UI file 'SavePath.ui'
**
** Created by: Qt User Interface Compiler version 6.1.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SAVEPATH_H
#define UI_SAVEPATH_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_SavePath
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QHBoxLayout *horizontalLayout;
    QPushButton *yes;
    QPushButton *no;

    void setupUi(QDialog *SavePath)
    {
        if (SavePath->objectName().isEmpty())
            SavePath->setObjectName(QString::fromUtf8("SavePath"));
        SavePath->resize(479, 66);
        verticalLayout = new QVBoxLayout(SavePath);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label = new QLabel(SavePath);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout->addWidget(label);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        yes = new QPushButton(SavePath);
        yes->setObjectName(QString::fromUtf8("yes"));

        horizontalLayout->addWidget(yes);

        no = new QPushButton(SavePath);
        no->setObjectName(QString::fromUtf8("no"));

        horizontalLayout->addWidget(no);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(SavePath);

        QMetaObject::connectSlotsByName(SavePath);
    } // setupUi

    void retranslateUi(QDialog *SavePath)
    {
        SavePath->setWindowTitle(QCoreApplication::translate("SavePath", "L\306\260u danh s\303\241ch truy v\341\272\245n", nullptr));
        label->setText(QCoreApplication::translate("SavePath", "B\341\272\241n c\303\263 mu\341\273\221n l\306\260u l\341\272\241i danh s\303\241ch c\303\241c v\304\203n b\341\272\243n truy v\341\272\245n hi\341\273\207n t\341\272\241i cho l\341\272\247n s\341\273\255 d\341\273\245ng ti\341\272\277p theo?", nullptr));
        yes->setText(QCoreApplication::translate("SavePath", "Yes", nullptr));
        no->setText(QCoreApplication::translate("SavePath", "No", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SavePath: public Ui_SavePath {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SAVEPATH_H
