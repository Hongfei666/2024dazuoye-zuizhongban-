#include "choosescene.h"
#include <QPixmap>
#include <QPainter>
#include "mypushbutton.h"
#include <QTimer>
#include <QFrame>
ChooseScene::ChooseScene(QWidget *parent)
    : QMainWindow{parent}
{
    this->setFixedSize(1440,900);
    this->setWindowIcon(QPixmap(":/Image/Icon.png"));
    this->setWindowTitle("炉石传说");
    MyPushButton *Characterbtn=new MyPushButton(":/Image/Characterbtn.png");
    Characterbtn->setParent(this);
    Characterbtn->move(228,200);
    battle=new BattleScene;
    MyPushButton *beginbtn=new MyPushButton(":/Image/begin2.png",":/Image/begin1.png");
    beginbtn->hide();
    beginbtn->setParent(this);
    beginbtn->move(996,650);
    connect(Characterbtn,&MyPushButton::clicked,this,[=](){
        beginbtn->show();
        kind=1;
        update();
    });
    connect(beginbtn,&MyPushButton::clicked,this,[=](){
        QTimer::singleShot(200,this,[=](){
            this->hide();
            battle->show();
        });
    });
}

void ChooseScene::paintEvent(QPaintEvent *){
    QPainter painter(this);
    QPixmap pix,pix1,pix2;
    pix.load(":/Image/Choose.png");
    pix2.load(":/Image/Character.png");
    painter.drawPixmap(0,0,pix);
    painter.drawPixmap(0,0,pix2);
    if(kind==1){
        pix1.load(":/Image/Character2.png");
        painter.drawPixmap(0,0,pix1);
    }
}

