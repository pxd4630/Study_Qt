#include "widget.h"
#include "ui_widget.h"
//学习光标的设计,不需要挂再对象树上
Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    //访问到图片文件
    QPixmap pixmap(":/pxd.jpg");
    //该函数可对图像进行缩放操纵,不是对原图片进行缩放,而是返回新的图片的副本
    pixmap=pixmap.scaled(100,100);
    //构造光标对象,该热点对应的图片左上角,后面设置参数代表以该光标的左上角为原点建立坐标系
    //热点---->理解为点击的有效位置
    //https://www.iconfont.cn/  该网站是阿里维护的一个开源网站,可用于设置光标
    QCursor cursor(pixmap,10,10);
    ui->pushButton->setCursor(cursor);
    this->setCursor(Qt::CrossCursor);
}

Widget::~Widget()
{
    delete ui;
}
