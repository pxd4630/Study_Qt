#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
}

Widget::~Widget()
{
    delete ui;
}

void Widget::on_radioButton_clicked(bool check)
{
    qDebug()<<"clicked:"<<check;
}



void Widget::on_radioButton_2_pressed()
{
    qDebug()<<"pressed";
}


void Widget::on_radioButton_3_released()
{
    qDebug()<<"released";
}




void Widget::on_radioButton_4_toggled(bool checked)
{
    //cheacked状态发生改变,就会触发这个信号
    qDebug()<<"toggled: "<<checked;
}

