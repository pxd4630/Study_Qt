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
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QRadioButton *radioButton;
    QRadioButton *radioButton_2;
    QRadioButton *radioButton_3;
    QRadioButton *radioButton_4;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName("Widget");
        Widget->resize(893, 600);
        radioButton = new QRadioButton(Widget);
        radioButton->setObjectName("radioButton");
        radioButton->setGeometry(QRect(310, 180, 95, 20));
        radioButton_2 = new QRadioButton(Widget);
        radioButton_2->setObjectName("radioButton_2");
        radioButton_2->setGeometry(QRect(310, 240, 95, 20));
        radioButton_3 = new QRadioButton(Widget);
        radioButton_3->setObjectName("radioButton_3");
        radioButton_3->setGeometry(QRect(310, 300, 95, 20));
        radioButton_4 = new QRadioButton(Widget);
        radioButton_4->setObjectName("radioButton_4");
        radioButton_4->setGeometry(QRect(310, 370, 95, 20));

        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Widget", nullptr));
        radioButton->setText(QCoreApplication::translate("Widget", "1", nullptr));
        radioButton_2->setText(QCoreApplication::translate("Widget", "2", nullptr));
        radioButton_3->setText(QCoreApplication::translate("Widget", "3", nullptr));
        radioButton_4->setText(QCoreApplication::translate("Widget", "4", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
