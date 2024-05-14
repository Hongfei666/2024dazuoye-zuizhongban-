#include "mypushbutton.h"
#include <QPropertyAnimation>

MyPushButton::MyPushButton(QString normalImg,QString pressImg,QString a)
{
    //按钮图画
    this->normalImgPath=normalImg;
    this->pressImgPath=pressImg;
    this->aPath=a;
    QPixmap pix;
    pix.load(normalImgPath);
    this->setFixedSize(pix.width(),pix.height());
    this->setStyleSheet("QPushButton{border:0px}");
    this->setIcon(pix);
    this->setIconSize(QSize(pix.width(),pix.height()));
}

//点击动画(按动效果)
void MyPushButton::zoom()
{
    QPropertyAnimation *animation=new QPropertyAnimation(this,"geometry");
    animation->setDuration(50);
    animation->setStartValue(QRect(this->x(),this->y()+15,this->width(),this->height()));
    animation->setEndValue(QRect(this->x(),this->y(),this->width(),this->height()));
    animation->setEasingCurve(QEasingCurve::OutBounce);
    animation->start();
}

//点击事件
void MyPushButton::mousePressEvent(QMouseEvent *e){
    if(this->pressImgPath!=""){
        QPixmap pix;
        pix.load(this->pressImgPath);
        this->setFixedSize(pix.width(),pix.height());
        this->setStyleSheet("QPushButton{border:0px}");
        this->setIcon(pix);
        this->setIconSize(QSize(pix.width(),pix.height()));
    }
    return QPushButton::mousePressEvent(e);
}

//释放事件
void MyPushButton::mouseReleaseEvent(QMouseEvent *e){
    if(this->pressImgPath!=""){
        QPixmap pix;
        pix.load(this->normalImgPath);
        this->setFixedSize(pix.width(),pix.height());
        this->setStyleSheet("QPushButton{border:0px}");
        this->setIcon(pix);
        this->setIconSize(QSize(pix.width(),pix.height()));
    }
    return QPushButton::mouseReleaseEvent(e);
}


