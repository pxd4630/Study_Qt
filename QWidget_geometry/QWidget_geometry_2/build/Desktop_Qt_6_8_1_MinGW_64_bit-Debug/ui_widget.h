/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 6.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QLabel *label;
    QPushButton *pushButton_accept;
    QPushButton *pushButton_reject;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName("Widget");
        Widget->resize(800, 600);
        label = new QLabel(Widget);
        label->setObjectName("label");
        label->setGeometry(QRect(270, 100, 191, 51));
        pushButton_accept = new QPushButton(Widget);
        pushButton_accept->setObjectName("pushButton_accept");
        pushButton_accept->setGeometry(QRect(80, 340, 75, 24));
        pushButton_reject = new QPushButton(Widget);
        pushButton_reject->setObjectName("pushButton_reject");
        pushButton_reject->setGeometry(QRect(530, 350, 75, 24));

        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Widget", nullptr));
        label->setText(QCoreApplication::translate("Widget", "\345\260\217\346\235\216,\350\277\231\345\221\250\346\234\253\346\234\211\347\251\272\345\212\240\344\270\252\347\217\255", nullptr));
        pushButton_accept->setText(QCoreApplication::translate("Widget", "\345\245\275\347\232\204", nullptr));
        pushButton_reject->setText(QCoreApplication::translate("Widget", "\346\262\241\347\251\272", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
