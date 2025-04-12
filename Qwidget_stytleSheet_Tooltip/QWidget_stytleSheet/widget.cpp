#include "widget.h"
#include "ui_widget.h"

//学习样表
//颜色的设置方式:1.rgb(0,0,0),r-->red,g-->green,b-->blue.分别代表三原色,数字代表原色的所站比重,数字的范围(0,255),0xFF
//2.#FF00DD

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

void Widget::on_pushButton_light_clicked()
{
    //设置窗口样式
    this->setStyleSheet("background-color: white");
    //设置输入框样式
    //ui->plainTextEdit->setStyleSheet("background-color: white; color: #FF4AF6");
    ui->plainTextEdit->setStyleSheet("background-color: white; color: rgb(120,10,10)");
    //设置按钮样式
    ui->pushButton_light->setStyleSheet("color: black");
    ui->pushButton_dark->setStyleSheet("color: black");
}


void Widget::on_pushButton_dark_clicked()
{
    //设置窗口样式
    this->setStyleSheet("background-color: black");
    //设置输入框样式
    ui->plainTextEdit->setStyleSheet("background-color: black; color: #AAAAFF");
    //设置按钮样式
    ui->pushButton_light->setStyleSheet("color: white");
    ui->pushButton_dark->setStyleSheet("color: white");
}

