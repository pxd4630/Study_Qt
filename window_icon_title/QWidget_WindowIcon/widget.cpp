#include "widget.h"
#include "ui_widget.h"
#include "QIcon"
Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    QIcon icon(":/ps.jpg");
    this->setWindowIcon(icon);
}

Widget::~Widget()
{
    delete ui;
}
