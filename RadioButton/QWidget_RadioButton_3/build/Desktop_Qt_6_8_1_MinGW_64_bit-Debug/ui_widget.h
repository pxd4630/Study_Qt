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
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QRadioButton *radioButton;
    QRadioButton *radioButton_2;
    QRadioButton *radioButton_3;
    QRadioButton *radioButton_4;
    QRadioButton *radioButton_5;
    QRadioButton *radioButton_6;
    QRadioButton *radioButton_7;
    QRadioButton *radioButton_8;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName("Widget");
        Widget->resize(800, 600);
        label = new QLabel(Widget);
        label->setObjectName("label");
        label->setGeometry(QRect(130, 160, 71, 16));
        label_2 = new QLabel(Widget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(280, 160, 81, 16));
        label_3 = new QLabel(Widget);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(420, 160, 81, 16));
        radioButton = new QRadioButton(Widget);
        radioButton->setObjectName("radioButton");
        radioButton->setGeometry(QRect(100, 200, 95, 20));
        radioButton_2 = new QRadioButton(Widget);
        radioButton_2->setObjectName("radioButton_2");
        radioButton_2->setGeometry(QRect(100, 230, 95, 20));
        radioButton_3 = new QRadioButton(Widget);
        radioButton_3->setObjectName("radioButton_3");
        radioButton_3->setGeometry(QRect(100, 270, 121, 20));
        radioButton_4 = new QRadioButton(Widget);
        radioButton_4->setObjectName("radioButton_4");
        radioButton_4->setGeometry(QRect(270, 190, 95, 20));
        radioButton_5 = new QRadioButton(Widget);
        radioButton_5->setObjectName("radioButton_5");
        radioButton_5->setGeometry(QRect(270, 230, 95, 20));
        radioButton_6 = new QRadioButton(Widget);
        radioButton_6->setObjectName("radioButton_6");
        radioButton_6->setGeometry(QRect(270, 280, 95, 20));
        radioButton_7 = new QRadioButton(Widget);
        radioButton_7->setObjectName("radioButton_7");
        radioButton_7->setGeometry(QRect(430, 200, 95, 20));
        radioButton_8 = new QRadioButton(Widget);
        radioButton_8->setObjectName("radioButton_8");
        radioButton_8->setGeometry(QRect(430, 240, 95, 20));

        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Widget", nullptr));
        label->setText(QCoreApplication::translate("Widget", "\350\257\267\351\200\211\346\213\251\346\261\211\345\240\241", nullptr));
        label_2->setText(QCoreApplication::translate("Widget", "\350\257\267\351\200\211\346\213\251\345\260\217\351\243\237", nullptr));
        label_3->setText(QCoreApplication::translate("Widget", "\350\257\267\351\200\211\346\213\251\351\245\256\346\226\231", nullptr));
        radioButton->setText(QCoreApplication::translate("Widget", "\345\267\250\346\227\240\351\234\270", nullptr));
        radioButton_2->setText(QCoreApplication::translate("Widget", "\351\272\246\350\276\243\351\270\241\350\205\277\345\240\241", nullptr));
        radioButton_3->setText(QCoreApplication::translate("Widget", "\345\237\271\346\240\271\350\224\254\350\220\203\345\217\214\345\261\202\347\211\233\345\240\241", nullptr));
        radioButton_4->setText(QCoreApplication::translate("Widget", "\344\270\255\350\226\257\346\235\241", nullptr));
        radioButton_5->setText(QCoreApplication::translate("Widget", "\351\272\246\350\276\243\351\270\241\347\277\205", nullptr));
        radioButton_6->setText(QCoreApplication::translate("Widget", "\351\272\246\351\246\231\351\270\241\345\235\227", nullptr));
        radioButton_7->setText(QCoreApplication::translate("Widget", "\345\217\257\344\271\220", nullptr));
        radioButton_8->setText(QCoreApplication::translate("Widget", "\351\233\252\347\242\247", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
