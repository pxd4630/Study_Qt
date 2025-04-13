#include "widget.h"
#include "ui_widget.h"
#include "QPushButton"

//通过对快捷建对目标按钮的位置进行修改

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    ui->pushButton->setIcon(QIcon(":/image/dog.png"));
    ui->pushButton->setIconSize(QSize(80,80));

    ui->pushButton_up->setIcon(QIcon(":/image/up.png"));
    ui->pushButton_up->setIconSize(QSize(80,80));

    ui->pushButton_down->setIcon(QIcon(":/image/down.png"));
    ui->pushButton_down->setIconSize(QSize(80,80));

    ui->pushButton_left->setIcon(QIcon(":/image/left.png"));
    ui->pushButton_left->setIconSize(QSize(80,80));

    ui->pushButton_right->setIcon(QIcon(":/image/right.png"));
    ui->pushButton_right->setIconSize(QSize(80,80));

    //设置快捷键  QKeySequence-->Key(按键)+Sequence(顺序表)

    // //通过按键的名字进行设置
    // ui->pushButton_up->setShortcut(QKeySequence("w"));
    // ui->pushButton_down->setShortcut(QKeySequence("s"));
    // ui->pushButton_left->setShortcut(QKeySequence("a"));
    // ui->pushButton_right->setShortcut(QKeySequence("d"));

    //通过按键的枚举进行设置
    ui->pushButton_up->setShortcut(QKeySequence(Qt::CTRL + Qt::Key_W));
    //ui->pushButton_up->setShortcut(QKeySequence(Qt::Key_W));
    ui->pushButton_down->setShortcut(QKeySequence(Qt::Key_S));
    ui->pushButton_left->setShortcut(QKeySequence(Qt::Key_A));
    ui->pushButton_right->setShortcut(QKeySequence(Qt::Key_D));

    //开启鼠标连续点击的连发功能
    ui->pushButton_up->setAutoRepeat(true);
    ui->pushButton_down->setAutoRepeat(true);
    ui->pushButton_left->setAutoRepeat(true);
    ui->pushButton_right->setAutoRepeat(true);


}

Widget::~Widget()
{
    delete ui;
}

void Widget::on_pushButton_up_clicked()
{
    //获取按钮位置
    QRect rect=ui->pushButton->geometry();
    //基于上次按钮的位置,对其位置进行修改
    ui->pushButton->setGeometry(rect.x(),rect.y()-5,rect.width(),rect.height());
}

void Widget::on_pushButton_down_clicked()
{
    //获取按钮位置
    QRect rect=ui->pushButton->geometry();
    //基于上次按钮的位置,对其位置进行修改
    ui->pushButton->setGeometry(rect.x(),rect.y()+5,rect.width(),rect.height());
}

void Widget::on_pushButton_left_clicked()
{
    //获取按钮位置
    QRect rect=ui->pushButton->geometry();
    //基于上次按钮的位置,对其位置进行修改
    ui->pushButton->setGeometry(rect.x()-5,rect.y(),rect.width(),rect.height());
}

void Widget::on_pushButton_right_clicked()
{
    //获取按钮位置
    QRect rect=ui->pushButton->geometry();
    //基于上次按钮的位置,对其位置进行修改
    ui->pushButton->setGeometry(rect.x()+5,rect.y(),rect.width(),rect.height());
}




