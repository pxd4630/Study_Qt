#include "widget.h"
#include "ui_widget.h"
//学习提示符,当光标停放在控件上会显示一段提示信息
Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    ui->pushButton_yes->setToolTip("这是一个yes按钮");
    ui->pushButton_no->setToolTip("这是一个no按钮");
    ui->pushButton_yes->setToolTipDuration(3000);
    ui->pushButton_no->setToolTipDuration(3000);
}

Widget::~Widget()
{
    delete ui;
}
