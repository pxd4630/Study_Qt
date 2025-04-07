#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    srand(time(0));
}

Widget::~Widget()
{
    delete ui;
}

void Widget::on_pushButton_accept_clicked()
{
    ui->label->setText("麻烦了,小吴");
}

//点击----->一下一上
void Widget::on_pushButton_reject_clicked()
{
    // int width=this->geometry().width();
    // int height=this->geometry().height();
    // int x=rand()%width;
    // int y=rand()%height;
    // ui->pushButton_reject->move(x,y);
}

//压,-->一下
void Widget::on_pushButton_reject_pressed()
{
    int width=this->geometry().width();
    int height=this->geometry().height();
    int x=rand()%width;
    int y=rand()%height;
    ui->pushButton_reject->move(x,y);
}

