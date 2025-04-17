#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    //添加一个默认的选项
    ui->radioButton_male->setCheckable(true);
    ui->label->setText("您选择的性别是: 男");
    //setCheckable 只能让我们的按钮无法选中
    //ui->radioButton_other->setCheckable(false);
    //ui->radioButton_other->setEnabled(false);
    ui->radioButton_other->setDisabled(true);
}

Widget::~Widget()
{
    delete ui;
}

void Widget::on_radioButton_male_clicked()
{
    ui->label->setText("您选择的性别是: 男");
}

void Widget::on_radioButton_female_clicked()
{
    ui->label->setText("您选择的性别是: 女");
}



void Widget::on_radioButton_other_clicked()
{
    ui->label->setText("您选择的性别是: 其他");
}

