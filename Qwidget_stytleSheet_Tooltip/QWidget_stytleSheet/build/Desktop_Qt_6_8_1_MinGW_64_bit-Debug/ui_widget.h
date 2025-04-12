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
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QPlainTextEdit *plainTextEdit;
    QPushButton *pushButton_light;
    QPushButton *pushButton_dark;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName("Widget");
        Widget->resize(800, 600);
        plainTextEdit = new QPlainTextEdit(Widget);
        plainTextEdit->setObjectName("plainTextEdit");
        plainTextEdit->setGeometry(QRect(0, 10, 771, 351));
        pushButton_light = new QPushButton(Widget);
        pushButton_light->setObjectName("pushButton_light");
        pushButton_light->setGeometry(QRect(30, 380, 91, 21));
        pushButton_dark = new QPushButton(Widget);
        pushButton_dark->setObjectName("pushButton_dark");
        pushButton_dark->setGeometry(QRect(610, 380, 91, 21));

        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Widget", nullptr));
        plainTextEdit->setPlainText(QCoreApplication::translate("Widget", "\350\277\231\346\230\257\344\270\200\346\256\265\346\226\207\345\255\227\346\217\217\350\277\260\n"
"", nullptr));
        pushButton_light->setText(QCoreApplication::translate("Widget", "light", nullptr));
        pushButton_dark->setText(QCoreApplication::translate("Widget", "dark", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
