/********************************************************************************
** Form generated from reading UI file 'WaitingDialog.ui'
**
** Created by: Qt User Interface Compiler version 6.1.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WAITINGDIALOG_H
#define UI_WAITINGDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_WaitingDialog
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label;

    void setupUi(QDialog *WaitingDialog)
    {
        if (WaitingDialog->objectName().isEmpty())
            WaitingDialog->setObjectName(QString::fromUtf8("WaitingDialog"));
        WaitingDialog->resize(301, 50);
        verticalLayout = new QVBoxLayout(WaitingDialog);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label = new QLabel(WaitingDialog);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout->addWidget(label);


        retranslateUi(WaitingDialog);

        QMetaObject::connectSlotsByName(WaitingDialog);
    } // setupUi

    void retranslateUi(QDialog *WaitingDialog)
    {
        WaitingDialog->setWindowTitle(QCoreApplication::translate("WaitingDialog", "Ti\341\273\201n x\341\273\255 l\303\275", nullptr));
        label->setText(QCoreApplication::translate("WaitingDialog", "Ch\306\260\306\241ng tr\303\254nh \304\221ang t\341\272\243i d\341\273\257 li\341\273\207u \304\221\303\243 \304\221\306\260\341\273\243c chu\341\272\251n b\341\273\213 tr\306\260\341\273\233c\n"
"Vui l\303\262ng kh\303\264ng tho\303\241t ch\306\260\306\241ng tr\303\254nh", nullptr));
    } // retranslateUi

};

namespace Ui {
    class WaitingDialog: public Ui_WaitingDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WAITINGDIALOG_H
