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
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QPushButton *pushButton;
    QPushButton *pushButton_left;
    QPushButton *pushButton_up;
    QPushButton *pushButton_right;
    QPushButton *pushButton_down;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName("Widget");
        Widget->resize(800, 600);
        pushButton = new QPushButton(Widget);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(270, 130, 161, 61));
        pushButton_left = new QPushButton(Widget);
        pushButton_left->setObjectName("pushButton_left");
        pushButton_left->setGeometry(QRect(250, 370, 71, 51));
        pushButton_up = new QPushButton(Widget);
        pushButton_up->setObjectName("pushButton_up");
        pushButton_up->setGeometry(QRect(320, 310, 71, 61));
        pushButton_right = new QPushButton(Widget);
        pushButton_right->setObjectName("pushButton_right");
        pushButton_right->setGeometry(QRect(390, 370, 81, 51));
        pushButton_down = new QPushButton(Widget);
        pushButton_down->setObjectName("pushButton_down");
        pushButton_down->setGeometry(QRect(320, 420, 71, 61));

        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Widget", nullptr));
        pushButton->setText(QString());
        pushButton_left->setText(QString());
        pushButton_up->setText(QString());
        pushButton_right->setText(QString());
        pushButton_down->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
