#include "widget.h"
#include "ui_widget.h"
#include "QPushButton"
Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    QIcon icon(":/dog.png");
    ui->pushButton->setIcon(icon);
    ui->pushButton->setIconSize(QSize(50,50));
}

Widget::~Widget()
{
    delete ui;
}
