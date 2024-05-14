#include "mainscene.h"
#include "ui_mainscene.h"
#include <QPainter>
#include <mypushbutton.h>
#include <QTimer>

MainScene::MainScene(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainScene)
{
    ui->setupUi(this);

    //窗口设置
    this->setFixedSize(1440,900);
    this->setWindowIcon(QPixmap(":/Image/Icon.png"));
    this->setWindowTitle("炉石传说");

    //开始按钮
    MyPushButton *startbtn=new MyPushButton(":/Image/start.png");
    startbtn->setParent(this);
    startbtn->move(this->width()*0.5-startbtn->width()*0.5,this->height()*0.75);

    //实例化选择场景
    choose=new ChooseScene;

    //点击
    connect(startbtn,&MyPushButton::clicked,this,[=](){
        //点击动画
        startbtn->zoom();
        //场景切换
        QTimer::singleShot(200,this,[=](){
            this->hide();
            choose->show();
        });
    });
}

//开始界面
void MainScene::paintEvent(QPaintEvent *){
    QPainter painter(this);
    QPixmap pix;
    pix.load(":/Image/Home.png");
    painter.drawPixmap(0,0,this->width(),this->height(),pix);
}


MainScene::~MainScene()
{
    delete ui;
}
