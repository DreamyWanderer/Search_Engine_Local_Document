/********************************************************************************
** Form generated from reading UI file 'WarningDialog.ui'
**
** Created by: Qt User Interface Compiler version 6.1.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WARNINGDIALOG_H
#define UI_WARNINGDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_WarningDialog
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QPushButton *pushButton;

    void setupUi(QDialog *WarningDialog)
    {
        if (WarningDialog->objectName().isEmpty())
            WarningDialog->setObjectName(QString::fromUtf8("WarningDialog"));
        WarningDialog->resize(384, 96);
        WarningDialog->setContextMenuPolicy(Qt::NoContextMenu);
        QIcon icon(QIcon::fromTheme(QString::fromUtf8("warning")));
        WarningDialog->setWindowIcon(icon);
        verticalLayout = new QVBoxLayout(WarningDialog);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label = new QLabel(WarningDialog);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout->addWidget(label);

        pushButton = new QPushButton(WarningDialog);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        verticalLayout->addWidget(pushButton);


        retranslateUi(WarningDialog);
        QObject::connect(pushButton, &QPushButton::clicked, WarningDialog, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(WarningDialog);
    } // setupUi

    void retranslateUi(QDialog *WarningDialog)
    {
        WarningDialog->setWindowTitle(QCoreApplication::translate("WarningDialog", "V\306\260\341\273\243t gi\341\273\233i h\341\272\241n th\303\252m truy v\341\272\245n", nullptr));
        label->setText(QCoreApplication::translate("WarningDialog", "S\341\273\221 l\306\260\341\273\243ng v\304\203n b\341\272\243n \304\221\306\260\341\273\243c th\303\252m truy v\341\272\245n trong m\341\273\231t l\341\272\247n \304\221\303\243 v\306\260\341\273\243t qu\303\241 100\n"
"Ch\306\260\306\241ng tr\303\254nh s\341\272\275 d\341\273\253ng th\303\252m v\304\203n b\341\272\243n truy v\341\272\245n\n"
"B\341\272\241n v\341\272\253n c\303\263 th\341\273\203 ti\341\272\277p t\341\273\245c th\303\252m v\304\203n b\341\272\243n truy v\341\272\245n n\341\272\277u c\341\272\247n", nullptr));
        pushButton->setText(QCoreApplication::translate("WarningDialog", "\304\220\303\243 hi\341\273\203u", nullptr));
    } // retranslateUi

};

namespace Ui {
    class WarningDialog: public Ui_WarningDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WARNINGDIALOG_H
