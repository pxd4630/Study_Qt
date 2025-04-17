#include "widget.h"
#include "ui_widget.h"
#include "QButtonGroup"
Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    //使 QButtonGroup对单选按钮进行分组
    QButtonGroup* group1=new QButtonGroup(this);
    QButtonGroup* group2=new QButtonGroup(this);
    QButtonGroup* group3=new QButtonGroup(this);
    //将不同的按钮放在不同的组
    group1->addButton(ui->radioButton);
    group1->addButton(ui->radioButton_2);
    group1->addButton(ui->radioButton_3);

    group2->addButton(ui->radioButton_4);
    group2->addButton(ui->radioButton_5);
    group2->addButton(ui->radioButton_6);

    group3->addButton(ui->radioButton_7);
    group3->addButton(ui->radioButton_8);

}

Widget::~Widget()
{
    delete ui;
}
