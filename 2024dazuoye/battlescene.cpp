#include "battlescene.h"
#include "ui_battlescene.h"
#include "mypushbutton.h"
#include <QDebug>
#include <QPainter>
<<<<<<< HEAD
=======
#include <QPropertyAnimation>
>>>>>>> b209066 (“提交代码”)

BattleScene::BattleScene(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::BattleScene)
{
    ui->setupUi(this);
    //初始化窗口
    this->setFixedSize(1440,900);
    this->setWindowIcon(QPixmap(":/Image/Icon.png"));
    this->setWindowTitle("炉石传说");

    //绘制回合结束按钮
    MyPushButton *endbtn=new MyPushButton(":/Image/endbtn2.png",":/Image/endbtn1.png");
    endbtn->setParent(this);
    endbtn->move(1150,370);

    //绘制设置按钮
    MyPushButton *settingbtn=new MyPushButton(":/Image/settingbtn.png");
    settingbtn->setParent(this);
    settingbtn->move(1378,863);

    //创建Game实例
    Game *mygame = new Game;

    //绘制英雄
    QPixmap pix;
    pix.load(":/Image/myHero");

    //创建卡牌实例
    xingyunbi *xyb=new xingyunbi();
    weibi *wb1=new weibi();
    weibi *wb2=new weibi();
    sijidaifa *sjdf1=new sijidaifa();
    sijidaifa *sjdf2=new sijidaifa();
    anyingbu *ayb1=new anyingbu();
    anyingbu *ayb2=new anyingbu();
    shayu *sy=new shayu();
    yaoxie *yx1=new yaoxie();
    yaoxie *yx2=new yaoxie();
    chuidiao *cd1=new chuidiao();
    chuidiao *cd2=new chuidiao();
    anyingzhimen *ayzm1=new anyingzhimen();
    anyingzhimen *ayzm2=new anyingzhimen();
    tongdao *td1=new tongdao();
    tongdao *td2=new tongdao();
    wandao *wd1=new wandao();
    wandao *wd2=new wandao();
    laoqian *lq=new laoqian();
    tengwu *tw=new tengwu();
    xingpian *xp1=new xingpian();
    xingpian *xp2=new xingpian();
    shanbi *sb=new shanbi();
    weimu *wm1=new weimu();
    weimu *wm2=new weimu();
    yaoshui *ys=new yaoshui();
    daoyou *dy=new daoyou();
    doupeng *dp=new doupeng();
    jipao *jp=new jipao();
    guiling *gl1=new guiling();
    guiling *gl2=new guiling();

    //构建牌库
    Library={wb1,wb2,sjdf1,sjdf2,ayb1,ayb2,sy,yx1,yx2,cd1,cd2,ayzm1,ayzm2,td1,td2,wd1,wd2,lq,tw,xp1,xp2,sb,wm1,wm2,ys,dy,dp,jp,gl1,gl2};

    //游戏开始
    xyb->setParent(this);
    Hand.append(xyb);
    draw();
    draw();
    draw();
    draw();

<<<<<<< HEAD
=======
    QLabel *damage=new QLabel;
    damage->setParent(this);
    a=30;
    damage->setNum(a);
    damage->move(760,205);
    damage->setFont(QFont("宋体",20));
    damage->setStyleSheet("color:white;");
>>>>>>> b209066 (“提交代码”)

    //实现结束回合按钮功能
    connect(endbtn,&QPushButton::clicked,mygame,[=](){
        //回合结束
        turn_end();
        //回合开始
        turn_begin();
    });

    //实现设置按钮功能
    connect(settingbtn,&QPushButton::clicked,this,[=](){
        qDebug()<<"点击了设置按钮";
    });
    //实现英雄打击


    //实现各个卡牌的效果
    //幸运币
    connect(xyb,&Card::play,this,[=](){
        myfalizhi++;
        update();
        play(xyb);
        usedcard++;
        if(next){
            next--;
        }
        if(spellnext){
            spellnext--;
        }
    });

    //伪币
    connect(wb1,&Card::play,this,[=](){
        myfalizhi++;
        update();
        play(wb1);
        usedcard++;
        if(next){
            next--;
        }
        if(spellnext){
            spellnext--;
        }
    });
    connect(wb2,&Card::play,this,[=](){
        myfalizhi++;
        update();
        play(wb2);
        usedcard++;
        if(next){
            next--;
        }
        if(spellnext){
            spellnext--;
        }
    });

    //伺机待发
    connect(sjdf1,&Card::play,this,[=](){
        play(sjdf1);
        spellnext=1;
<<<<<<< HEAD
        for(int i=0;i<Hand.size();i++){
            if(Hand.at(i)->isspell){
                Hand.at(i)->mana-=2;
                if(Hand.at(i)->mana<0){
                    Hand.at(i)->mana=0;
                }
            }
        }
=======
        HandShow();
>>>>>>> b209066 (“提交代码”)
    });
    connect(sjdf2,&Card::play,this,[=](){
        play(sjdf2);
        spellnext=1;
<<<<<<< HEAD
        for(int i=0;i<Hand.size();i++){
            if(Hand.at(i)->isspell==1){
                Hand.at(i)->mana-=2;
                if(Hand.at(i)->mana<0){
                    Hand.at(i)->mana=0;
                }
            }
        }
=======
        HandShow();
>>>>>>> b209066 (“提交代码”)
    });

    //暗影步
    connect(ayb1,&Card::play,this,[=](){
        play(ayb1);
<<<<<<< HEAD
        int j;
=======
        int j=0;
>>>>>>> b209066 (“提交代码”)
        if(isplay){
            for(int i=0;i<changdi.size();i++){
                if(changdi.at(i)->ischoosed){
                    j=i;
<<<<<<< HEAD
=======
                    break;
>>>>>>> b209066 (“提交代码”)
                }
            }
            changdi.at(j)->mana-=2;
            changdi.at(j)->originmana-=2;
            changdi.at(j)->ischangdi=0;
            Hand.append(changdi.at(j));
            changdi.at(j)->raise();
            changdi.at(j)->ischoosed=0;
            changdi.removeAt(j);
            changdiShow();
            HandShow();
        }
    });
    connect(ayb2,&Card::play,this,[=](){
        play(ayb2);
        int j=0;
        if(isplay){
            for(int i=0;i<changdi.size();i++){
                if(changdi.at(i)->ischoosed){
                    j=i;
<<<<<<< HEAD
=======
                    break;
>>>>>>> b209066 (“提交代码”)
                }
            }
            changdi.at(j)->mana-=2;
            changdi.at(j)->originmana-=2;
            changdi.at(j)->ischangdi=0;
            Hand.append(changdi.at(j));
            changdi.at(j)->raise();
            changdi.at(j)->ischoosed=0;
            changdi.removeAt(j);
            changdiShow();
            HandShow();
        }
    });

    //鲨鱼之灵
<<<<<<< HEAD
    connect(sy,&Card::play,this,[=](){
        play(sy);
        if(isplay){
            changdi.append(sy);
=======
    connect(sy,&shayu::play,this,[=](){
        play(sy);
        if(isplay){
            changdi.append(sy);
            sy->originmana=4;
            sy->mana=4;
>>>>>>> b209066 (“提交代码”)
            changdiShow();
        }
    });

    //要挟
    connect(yx1,&Card::play,this,[=](){
        play(yx1);
    });
    connect(yx2,&Card::play,this,[=](){
        play(yx2);
    });

<<<<<<< HEAD
=======
    connect(yx1,&Card::jiaoyi,this,[=](){
        jiaoyi(yx1);
    });
    connect(yx2,&Card::jiaoyi,this,[=](){
        jiaoyi(yx2);
    });

>>>>>>> b209066 (“提交代码”)
    //垂钓时光
    connect(cd1,&Card::play,this,[=](){
        play(cd1);
        if(isplay){
            draw();
        }
    });
    connect(cd2,&Card::play,this,[=](){
        play(cd2);
        if(isplay){
            draw();
        }
    });

    //暗影之门
    connect(ayzm1,&Card::play,this,[=](){
        play(ayzm1);
        if(isplay){
            draw();
        }
    });
    connect(ayzm2,&Card::play,this,[=](){
        play(ayzm2);
        if(isplay){
            draw();
        }
    });

    //通道
    connect(td1,&Card::play,this,[=](){
        play(td1);
    });
    connect(td2,&Card::play,this,[=](){
        play(td2);
    });

    //弯刀
<<<<<<< HEAD
    connect(wd1,&Card::play,this,[=](){
        play(wd1);
    });
    connect(wd2,&Card::play,this,[=](){
        play(wd2);
    });

    //老千
    connect(lq,&Card::play,this,[=](){
        play(lq);
        if(isplay){
            changdi.append(lq);
            changdiShow();
            if(usedcard){
                if(sy->ischangdi==1){
                    for(int i=0;i<Hand.size();i++){
                        if(Hand.at(i)->islianji==1){
                            Hand.at(i)->mana-=4;
                            if(Hand.at(i)->mana<0){
                                Hand.at(i)->mana=0;
                            }
                        }
                    }
                }
                else{
                    for(int i=0;i<Hand.size();i++){
                        if(Hand.at(i)->islianji==1){
                            Hand.at(i)->mana-=2;
                            if(Hand.at(i)->mana<0){
                                Hand.at(i)->mana=0;
                            }
                        }
                    }
                }
            }
            lianjinext=1;
        }
    });

    //腾武
    connect(tw,&Card::play,this,[=](){
        play(tw);
        int j;
        if(isplay){
            changdi.append(tw);
=======
    connect(wd1,&wandao::play,this,[=](){
        play(wd1);
    });
    connect(wd2,&wandao::play,this,[=](){
        play(wd2);
    });
    connect(wd1,&wandao::jiaoyi,this,[=](){
        jiaoyi(wd1);
    });
    connect(wd2,&wandao::jiaoyi,this,[=](){
        jiaoyi(wd2);
    });

    //老千
    connect(lq,&laoqian::play,this,[=](){
        play(lq);
        if(isplay){
            changdi.append(lq);
            lq->originmana=2;
            lq->mana=2;
            changdiShow();
            if(usedcard){
                if(sy->ischangdi==1){
                    lianjinext2=1;
                }
                else{
                    lianjinext=1;
                }
            }
        }
        HandShow();
    });

    //腾武
    connect(tw,&tengwu::play,this,[=](){
        play(tw);
        int j=0;
        if(isplay){
            changdi.append(tw);
            tw->originmana=2;
            tw->mana=2;
>>>>>>> b209066 (“提交代码”)
            changdiShow();
            if(changdi.size()>1){
                for(int i=0;i<changdi.size();i++){
                    if(changdi.at(i)->ischoosed){
                        j=i;
                    }
                }
<<<<<<< HEAD
                changdi.at(j)->mana-=2;
                changdi.at(j)->originmana-=2;
=======
                changdi.at(j)->mana=1;
                changdi.at(j)->originmana=1;
>>>>>>> b209066 (“提交代码”)
                changdi.at(j)->ischangdi=0;
                Hand.append(changdi.at(j));
                changdi.at(j)->raise();
                changdi.at(j)->ischoosed=0;
                changdi.removeAt(j);
                changdiShow();
                HandShow();
            }
        }
    });

    //行骗
    connect(xp1,&Card::play,this,[=](){
        play(xp1);
        if(isplay){
            drawspell();
            if(usedcard){
                drawminion();
            }
        }
    });
    connect(xp2,&Card::play,this,[=](){
        play(xp2);
        if(isplay){
            drawspell();
            if(usedcard){
                drawminion();
            }
        }
    });

    //闪避
    connect(sb,&Card::play,this,[=](){
        play(sb);
    });

    //帷幕
    connect(wm1,&Card::play,this,[=](){
        play(wm1);
        if(isplay){
            drawminion();
            drawminion();
        }
    });
    connect(wm2,&Card::play,this,[=](){
        play(wm2);
        if(isplay){
            drawminion();
            drawminion();
        }
    });

    //药水
    connect(ys,&Card::play,this,[=](){
        play(ys);
        if(isplay){
            for(int i=0;i<changdi.size();i++){
                if(changdi.at(i)==lq){
                    laoqian* lq1=new laoqian();
                    lq1->setParent(this);
                    lq1->ATK=1;
                    lq1->HP=1;
                    lq1->mana=1;
                    Hand.append(lq1);
                    HandShow();
                    connect(lq1,&Card::play,this,[=](){
                        play(lq1);
                        if(isplay){
                            changdi.append(lq1);
<<<<<<< HEAD
                            changdiShow();
                            if(usedcard){
                                if(sy->ischangdi==1){
                                    for(int i=0;i<Hand.size();i++){
                                        if(Hand.at(i)->islianji==1){
                                            Hand.at(i)->mana-=4;
                                            if(Hand.at(i)->mana<0){
                                                Hand.at(i)->mana=0;
                                            }
                                        }
                                    }
                                }
                                else{
                                    for(int i=0;i<Hand.size();i++){
                                        if(Hand.at(i)->islianji==1){
                                            Hand.at(i)->mana-=2;
                                            if(Hand.at(i)->mana<0){
                                                Hand.at(i)->mana=0;
                                            }
                                        }
                                    }
                                }
                            }
                            lianjinext=1;
=======
                            lq1->originmana=2;
                            lq1->mana=2;
                            changdiShow();
                            if(usedcard){
                                if(sy->ischangdi==1){
                                    lianjinext2=1;
                                }
                                else{
                                    lianjinext=1;
                                }
                            }
>>>>>>> b209066 (“提交代码”)
                        }
                    });
                }
                if(changdi.at(i)==sy){
                    shayu* sy1=new shayu();
                    sy1->setParent(this);
                    sy1->ATK=1;
                    sy1->HP=1;
                    sy1->mana=1;
                    Hand.append(sy1);
                    HandShow();
                    connect(sy1,&Card::play,this,[=](){
                        play(sy1);
<<<<<<< HEAD
=======
                        sy1->mana=4;
                        sy1->originmana=4;
>>>>>>> b209066 (“提交代码”)
                        if(isplay){
                            changdi.append(sy1);
                            changdiShow();
                        }
                    });
                }
                if(changdi.at(i)==dy){
                    daoyou* dy1=new daoyou();
                    dy1->setParent(this);
                    dy1->ATK=1;
                    dy1->HP=1;
                    dy1->mana=1;
                    Hand.append(dy1);
                    HandShow();
                    connect(dy1,&Card::play,this,[=](){
                        play(dy1);
                        if(isplay){
                            changdi.append(dy1);
<<<<<<< HEAD
                            changdiShow();
                            if(usedcard){
                                if(sy->ischangdi=1){
                                    for(int i=0;i<Hand.size();i++){
                                        Hand.at(i)->mana-=6;
                                        if(Hand.at(i)->mana<0){
                                            Hand.at(i)->mana=0;
                                        }
                                    }
                                }
                                else{
                                    for(int i=0;i<Hand.size();i++){
                                        Hand.at(i)->mana-=3;
                                        if(Hand.at(i)->mana<0){
                                            Hand.at(i)->mana=0;
                                        }
                                    }
                                }
                            }
                            next=2;
=======
                            dy1->originmana=4;
                            dy1->mana=4;
                            changdiShow();
                            if(usedcard){
                                if(sy->ischangdi==1){
                                    next2=2;
                                }
                                else{
                                    next=2;
                                }
                            }
                            HandShow();
>>>>>>> b209066 (“提交代码”)
                        }
                    });
                }
                if(changdi.at(i)==tw){
                    tengwu* tw1=new tengwu();
                    tw1->setParent(this);
                    tw1->ATK=1;
                    tw1->HP=1;
                    tw1->mana=1;
                    Hand.append(tw1);
                    HandShow();
                    connect(tw1,&Card::play,this,[=](){
                        play(tw1);
                        if(isplay){
<<<<<<< HEAD
                            changdi.append(tw1);
                            changdiShow();
=======
                            int j;
                            changdi.append(tw);
                            tw->originmana=2;
                            tw->mana=2;
                            changdiShow();
                            if(changdi.size()>1){
                                for(int i=0;i<changdi.size();i++){
                                    if(changdi.at(i)->ischoosed){
                                        j=i;
                                    }
                                }
                                changdi.at(j)->mana=1;
                                changdi.at(j)->originmana=1;
                                changdi.at(j)->ischangdi=0;
                                Hand.append(changdi.at(j));
                                changdi.at(j)->raise();
                                changdi.at(j)->ischoosed=0;
                                changdi.removeAt(j);
                                changdiShow();
                                HandShow();
                            }
>>>>>>> b209066 (“提交代码”)
                        }
                    });
                }
                if(changdi.at(i)==gl1){
                    guiling* gl3=new guiling();
                    gl3->setParent(this);
                    gl3->ATK=1;
                    gl3->HP=1;
                    gl3->mana=1;
                    Hand.append(gl3);
                    HandShow();
                    connect(gl3,&Card::play,this,[=](){
                        play(gl3);
                        if(isplay){
<<<<<<< HEAD
                            changdi.append(gl3);
                            changdiShow();
                            qDebug()<<usedcard;
=======
                            a-=usedcard*2;
                            damage->setNum(a);
                            changdi.append(gl3);
                            gl3->originmana=6;
                            gl3->mana=6;
                            changdiShow();
                            onShakeWindow();
>>>>>>> b209066 (“提交代码”)
                        }
                    });
                }
                if(changdi.at(i)==gl2){
                    guiling* gl4=new guiling();
                    gl4->setParent(this);
                    gl4->ATK=1;
                    gl4->HP=1;
                    gl4->mana=1;
                    Hand.append(gl4);
                    HandShow();
                    connect(gl4,&Card::play,this,[=](){
                        play(gl4);
                        if(isplay){
<<<<<<< HEAD
                            changdi.append(gl4);
                            changdiShow();
                            qDebug()<<usedcard;
=======
                            a-=usedcard*2;
                            damage->setNum(a);
                            changdi.append(gl4);
                            gl4->originmana=6;
                            gl4->mana=6;
                            changdiShow();
                            onShakeWindow();
>>>>>>> b209066 (“提交代码”)
                        }
                    });
                }
            }
        }
    });

    //刀油
<<<<<<< HEAD
    connect(dy,&Card::play,this,[=](){
=======
    connect(dy,&daoyou::play,this,[=](){
>>>>>>> b209066 (“提交代码”)
        play(dy);
        if(isplay){
            changdi.append(dy);
            changdiShow();
            if(usedcard){
<<<<<<< HEAD
                if(sy->ischangdi=1){
                    for(int i=0;i<Hand.size();i++){
                        Hand.at(i)->mana-=6;
                        if(Hand.at(i)->mana<0){
                            Hand.at(i)->mana=0;
                        }
                    }
                }
                else{
                    for(int i=0;i<Hand.size();i++){
                        Hand.at(i)->mana-=3;
                        if(Hand.at(i)->mana<0){
                            Hand.at(i)->mana=0;
                        }
                    }
                }
            }
            next=2;
        }
=======
                if(sy->ischangdi==1){
                    next2=2;
                }
                else{
                    next=2;
                }
            }
        }
        HandShow();
>>>>>>> b209066 (“提交代码”)
    });

    //斗篷
    connect(dp,&Card::play,this,[=](){
        play(dp);
    });

    //疾跑
    connect(jp,&Card::play,this,[=](){
        play(jp);
        if(isplay){
            draw();
            draw();
            draw();
            draw();
        }
    });

    //鬼灵
<<<<<<< HEAD
    connect(gl1,&Card::play,this,[=](){
        play(gl1);
        if(isplay){
            changdi.append(gl1);
            changdiShow();
            qDebug()<<usedcard;
        }
    });
    connect(gl2,&Card::play,this,[=](){
        play(gl2);
        if(isplay){
            changdi.append(gl2);
            changdiShow();
            qDebug()<<usedcard;
        }
    });

=======
    connect(gl1,&guiling::play,this,[=](){
        play(gl1);
        if(isplay){
            a-=usedcard*2;
            damage->setNum(a);
            changdi.append(gl1);
            changdiShow();
            onShakeWindow();
        }
    });
    connect(gl2,&guiling::play,this,[=](){
        play(gl2);
        if(isplay){
            a-=usedcard*2;
            damage->setNum(a);
            changdi.append(gl2);
            changdiShow();
            onShakeWindow();
        }
    });
>>>>>>> b209066 (“提交代码”)
}

//绘制场景，法力水晶
void BattleScene::paintEvent(QPaintEvent *){
    QPainter painter(this);
    painter.drawPixmap(0,0,QPixmap(":/Image/Battle.png"));
    for(int i=0;i<myfalizhi;i++){
        painter.drawPixmap(1014+28*i,820,QPixmap(":/Image/fullshuijing.png"));
    }
    for(int j=myfalizhi;j<maxfalizhi;j++){
        painter.drawPixmap(1014+28*j,820,QPixmap(":/Image/emptyshuijing.png"));
    }
}

//更新手牌
void BattleScene::HandShow(){
    if(Hand.size()==1){
        QPoint p0(645,750);
        Hand.at(0)->pos=p0;
    }
    if(Hand.size()==2){
        QPoint p0(580,750),p1(710,750);
        Hand.at(0)->pos=p0;
        Hand.at(1)->pos=p1;
    }
    if(Hand.size()==3){
        QPoint p0(515,750),p1(645,750),p2(775,750);
        Hand.at(0)->pos=p0;
        Hand.at(1)->pos=p1;
        Hand.at(2)->pos=p2;
    }
    if(Hand.size()==4){
        QPoint p0(510,750),p1(600,750),p2(690,750),p3(780,750);
        Hand.at(0)->pos=p0;
        Hand.at(1)->pos=p1;
        Hand.at(2)->pos=p2;
        Hand.at(3)->pos=p3;
    }
    if(Hand.size()==5){
        QPoint p0(465,750),p1(555,750),p2(645,750),p3(735,750),p4(825,750);
        Hand.at(0)->pos=p0;
        Hand.at(1)->pos=p1;
        Hand.at(2)->pos=p2;
        Hand.at(3)->pos=p3;
        Hand.at(4)->pos=p4;
    }
    if(Hand.size()==6){
        QPoint p0(470,750),p1(540,750),p2(610,750),p3(680,750),p4(750,750),p5(820,750);
        Hand.at(0)->pos=p0;
        Hand.at(1)->pos=p1;
        Hand.at(2)->pos=p2;
        Hand.at(3)->pos=p3;
        Hand.at(4)->pos=p4;
        Hand.at(5)->pos=p5;
    }
    if(Hand.size()==7){
        QPoint p0(400,750),p1(470,750),p2(540,750),p3(610,750),p4(680,750),p5(750,750),p6(820,750);
        Hand.at(0)->pos=p0;
        Hand.at(1)->pos=p1;
        Hand.at(2)->pos=p2;
        Hand.at(3)->pos=p3;
        Hand.at(4)->pos=p4;
        Hand.at(5)->pos=p5;
        Hand.at(6)->pos=p6;
    }
    if(Hand.size()==8){
        QPoint p0(330,750),p1(400,750),p2(470,750),p3(540,750),p4(610,750),p5(680,750),p6(750,750),p7(820,750);
        Hand.at(0)->pos=p0;
        Hand.at(1)->pos=p1;
        Hand.at(2)->pos=p2;
        Hand.at(3)->pos=p3;
        Hand.at(4)->pos=p4;
        Hand.at(5)->pos=p5;
        Hand.at(6)->pos=p6;
        Hand.at(7)->pos=p7;
    }
    if(Hand.size()==9){
        QPoint p0(260,750),p1(330,750),p2(400,750),p3(470,750),p4(540,750),p5(610,750),p6(680,750),p7(750,750),p8(820,750);
        Hand.at(0)->pos=p0;
        Hand.at(1)->pos=p1;
        Hand.at(2)->pos=p2;
        Hand.at(3)->pos=p3;
        Hand.at(4)->pos=p4;
        Hand.at(5)->pos=p5;
        Hand.at(6)->pos=p6;
        Hand.at(7)->pos=p7;
        Hand.at(8)->pos=p8;
    }
    if(Hand.size()==10){
        QPoint p0(190,750),p1(260,750),p2(330,750),p3(400,750),p4(470,750),p5(540,750),p6(610,750),p7(680,750),p8(750,750),p9(820,750);
        Hand.at(0)->pos=p0;
        Hand.at(1)->pos=p1;
        Hand.at(2)->pos=p2;
        Hand.at(3)->pos=p3;
        Hand.at(4)->pos=p4;
        Hand.at(5)->pos=p5;
        Hand.at(6)->pos=p6;
        Hand.at(7)->pos=p7;
        Hand.at(8)->pos=p8;
        Hand.at(9)->pos=p9;
    }
<<<<<<< HEAD
=======
    if(spellnext){
        for(int i=0;i<Hand.size();i++){
            if(Hand.at(i)->isspell){
                Hand.at(i)->mana-=2;
                if(Hand.at(i)->mana<0){
                    Hand.at(i)->mana=0;
                }
            }
        }
    }
    if(lianjinext){
        for(int i=0;i<Hand.size();i++){
            if(Hand.at(i)->islianji){
                Hand.at(i)->mana-=2;
                if(Hand.at(i)->mana<0){
                    Hand.at(i)->mana=0;
                }
            }
        }
    }
    if(lianjinext2){
        for(int i=0;i<Hand.size();i++){
            if(Hand.at(i)->islianji){
                Hand.at(i)->mana-=4;
                if(Hand.at(i)->mana<0){
                    Hand.at(i)->mana=0;
                }
            }
        }
    }
    if(next2){
        for(int i=0;i<Hand.size();i++){
            Hand.at(i)->mana=Hand.at(i)->originmana-6;
            if(Hand.at(i)->mana<0){
                Hand.at(i)->mana=0;
            }
        }
    }
    if(next){
        for(int i=0;i<Hand.size();i++){
            Hand.at(i)->mana=Hand.at(i)->originmana-3;
            if(Hand.at(i)->mana<0){
                Hand.at(i)->mana=0;
            }
        }
    }
>>>>>>> b209066 (“提交代码”)
    for(int i=0;i<Hand.size();i++){
        Hand.at(i)->draw();
        Hand.at(i)->move(Hand.at(i)->pos);
        Hand.at(i)->show();
<<<<<<< HEAD
=======
        Hand.at(i)->lab->setText(Hand.at(i)->curmana[Hand.at(i)->mana]);
>>>>>>> b209066 (“提交代码”)
    }
}

//更新场地
void BattleScene::changdiShow(){
    if(changdi.size()==1){
        QPoint p0(670,450);
        changdi.at(0)->drawminion();
        changdi.at(0)->pos=p0;
    }
    if(changdi.size()==2){
        QPoint p0(610,450),p1(730,450);
        changdi.at(0)->drawminion();
        changdi.at(0)->pos=p0;
        changdi.at(1)->drawminion();
        changdi.at(1)->pos=p1;
    }
    if(changdi.size()==3){
        QPoint p0(550,450),p1(670,450),p2(790,450);
        changdi.at(0)->drawminion();
        changdi.at(0)->pos=p0;
        changdi.at(1)->drawminion();
        changdi.at(1)->pos=p1;
        changdi.at(2)->drawminion();
        changdi.at(2)->pos=p2;
    }
    if(changdi.size()==4){
        QPoint p0(490,450),p1(610,450),p2(730,450),p3(850,450);
        changdi.at(0)->drawminion();
        changdi.at(0)->pos=p0;
        changdi.at(1)->drawminion();
        changdi.at(1)->pos=p1;
        changdi.at(2)->drawminion();
        changdi.at(2)->pos=p2;
        changdi.at(3)->drawminion();
        changdi.at(3)->pos=p3;
    }
    if(changdi.size()==5){
        QPoint p0(430,450),p1(550,450),p2(670,450),p3(790,450),p4(910,450);
        changdi.at(0)->drawminion();
        changdi.at(0)->pos=p0;
        changdi.at(1)->drawminion();
        changdi.at(1)->pos=p1;
        changdi.at(2)->drawminion();
        changdi.at(2)->pos=p2;
        changdi.at(3)->drawminion();
        changdi.at(3)->pos=p3;
        changdi.at(4)->drawminion();
        changdi.at(4)->pos=p4;
    }
    if(changdi.size()==6){
        QPoint p0(370,450),p1(490,450),p2(610,450),p3(730,450),p4(850,450),p5(970,450);
        changdi.at(0)->drawminion();
        changdi.at(0)->pos=p0;
        changdi.at(1)->drawminion();
        changdi.at(1)->pos=p1;
        changdi.at(2)->drawminion();
        changdi.at(2)->pos=p2;
        changdi.at(3)->drawminion();
        changdi.at(3)->pos=p3;
        changdi.at(4)->drawminion();
        changdi.at(4)->pos=p4;
        changdi.at(5)->drawminion();
        changdi.at(5)->pos=p5;
    }
    if(changdi.size()==7){
        QPoint p0(310,450),p1(430,450),p2(550,450),p3(670,450),p4(790,450),p5(910,450),p6(1030,450);
        changdi.at(0)->drawminion();
        changdi.at(0)->pos=p0;
        changdi.at(1)->drawminion();
        changdi.at(1)->pos=p1;
        changdi.at(2)->drawminion();
        changdi.at(2)->pos=p2;
        changdi.at(3)->drawminion();
        changdi.at(3)->pos=p3;
        changdi.at(4)->drawminion();
        changdi.at(4)->pos=p4;
        changdi.at(5)->drawminion();
        changdi.at(5)->pos=p5;
        changdi.at(6)->drawminion();
        changdi.at(6)->pos=p6;
    }
    for(int i=0;i<changdi.size();i++){
        changdi.at(i)->move(changdi.at(i)->pos);
        changdi.at(i)->show();
    }
}

//回合开始
void BattleScene::turn_begin(){
<<<<<<< HEAD

=======
>>>>>>> b209066 (“提交代码”)
    //抽牌
    draw();

    //恢复法力水晶
    if(maxfalizhi!=10){
        maxfalizhi++;
    }
    myfalizhi=maxfalizhi;

    //重新记录使用的牌数
    usedcard=-1;

    //更新法力水晶
    update();
}

//回合结束
void BattleScene::turn_end(){
    next=0;
<<<<<<< HEAD
    spellnext=0;
    lianjinext=0;
=======
    next2=0;
    spellnext=0;
    lianjinext=0;
    lianjinext2=0;
    HandShow();
>>>>>>> b209066 (“提交代码”)
}

//抽牌
void BattleScene::draw(){
    if(Library.size()>=2){
        int i=QRandomGenerator64::global()->bounded(Library.size()-1);
        Library.at(i)->setParent(this);
<<<<<<< HEAD
=======
        Library.at(i)->raise();
>>>>>>> b209066 (“提交代码”)
        if(Hand.size()<10){
            Hand.append(Library.at(i));
            HandShow();
        }
        Library.removeAt(i);
    }
    else if(Library.size()==1){
        Library.at(0)->setParent(this);
        if(Hand.size()<10){
            Hand.append(Library.at(0));
            HandShow();
        }
        Library.removeAt(0);
    }
    else{
        pilao++;
        myhero->HP-=pilao;
    }
}

//抽法术
void BattleScene::drawspell(){
    int Spell[30],t=0;
    for(int i=0;i<Library.size();i++){
        if(Library.at(i)->isspell){
            t++;
            Spell[t]=i;
        }
    }
    if(t>=2){
        int i=QRandomGenerator64::global()->bounded(1,t);
        Library.at(Spell[i])->setParent(this);
        if(Hand.size()<10){
            Hand.append(Library.at(Spell[i]));
            HandShow();
        }
        Library.removeAt(Spell[i]);
    }
<<<<<<< HEAD
    else if(Library.size()==1){
=======
    else if(t==1){
>>>>>>> b209066 (“提交代码”)
        Library.at(Spell[1])->setParent(this);
        if(Hand.size()<10){
            Hand.append(Library.at(Spell[1]));
            HandShow();
        }
        Library.removeAt(Spell[1]);
    }
}

//抽随从
void BattleScene::drawminion(){
    int Minion[30],t=0;
    for(int i=0;i<Library.size();i++){
        if(Library.at(i)->isminion){
            t++;
            Minion[t]=i;
        }
    }
    if(t>=2){
        int i=QRandomGenerator64::global()->bounded(1,t);
        Library.at(Minion[i])->setParent(this);
        if(Hand.size()<10){
            Hand.append(Library.at(Minion[i]));
            HandShow();
        }
        Library.removeAt(Minion[i]);
    }
<<<<<<< HEAD
    else if(Library.size()==1){
=======
    else if(t==1){
>>>>>>> b209066 (“提交代码”)
        Library.at(Minion[1])->setParent(this);
        if(Hand.size()<10){
            Hand.append(Library.at(Minion[1]));
            HandShow();
        }
        Library.removeAt(Minion[1]);
    }
}

<<<<<<< HEAD
//打牌UI
=======
//打牌
>>>>>>> b209066 (“提交代码”)
void BattleScene::play(Card* thiscard){
    if((myfalizhi<thiscard->mana)||(thiscard->isneedtarget&&changdi.isEmpty()&&thiscard->isspell||(thiscard->isminion&&changdi.size()==7))){
        isplay=0;
        thiscard->move(thiscard->pos);
    }
    else{
        isplay=1;
        for(int i=0;i<Hand.size();i++){
            if(Hand.at(i)==thiscard){
                Hand.remove(i);
                HandShow();
                break;
            }
        }
        usedcard++;
        if(spellnext&&thiscard->isspell){
            for(int i=0;i<Hand.size();i++){
                if(Hand.at(i)->isspell){
                    Hand.at(i)->mana=Hand.at(i)->originmana;
                }
            }
            spellnext--;
        }
        if(lianjinext&&thiscard->islianji){
            for(int i=0;i<Hand.size();i++){
                if(Hand.at(i)->islianji){
                    Hand.at(i)->mana=Hand.at(i)->originmana;
                }
            }
            lianjinext--;
        }
<<<<<<< HEAD
=======
        if(lianjinext2&&thiscard->islianji){
            for(int i=0;i<Hand.size();i++){
                if(Hand.at(i)->islianji){
                    Hand.at(i)->mana=Hand.at(i)->originmana;
                }
            }
            lianjinext2--;
        }
>>>>>>> b209066 (“提交代码”)
        if(next==2){
            next--;
        }
        else if(next==1){
            for(int i=0;i<Hand.size();i++){
                Hand.at(i)->mana=Hand.at(i)->originmana;
            }
            next--;
        }
<<<<<<< HEAD
=======
        if(next2==2){
            next2--;
        }
        else if(next2==1){
            for(int i=0;i<Hand.size();i++){
                Hand.at(i)->mana=Hand.at(i)->originmana;
            }
            next2--;
        }
>>>>>>> b209066 (“提交代码”)
        myfalizhi-=thiscard->mana;
        thiscard->hide();
        update();
    }
}

<<<<<<< HEAD
=======
//交易
void BattleScene::jiaoyi(Card* thiscard){
    for(int i=0;i<Hand.size();i++){
        if(Hand.at(i)==thiscard){
            Hand.remove(i);
            HandShow();
            break;
        }
    }
    myfalizhi--;
    draw();
    Library.append(thiscard);
    thiscard->hide();
    update();
}

//窗口抖动
void BattleScene::onShakeWindow()
{
    QPropertyAnimation *pAnimation = new QPropertyAnimation(this, "pos");
    pAnimation->setDuration(250);
    pAnimation->setLoopCount(2);
    pAnimation->setKeyValueAt(0, QPoint(geometry().x() - 2, geometry().y() - 2));
    pAnimation->setKeyValueAt(0.1, QPoint(geometry().x() + 4, geometry().y() + 4));
    pAnimation->setKeyValueAt(0.2, QPoint(geometry().x() - 4, geometry().y() + 4));
    pAnimation->setKeyValueAt(0.3, QPoint(geometry().x() + 4, geometry().y() - 4));
    pAnimation->setKeyValueAt(0.4, QPoint(geometry().x() - 4, geometry().y() - 4));
    pAnimation->setKeyValueAt(0.5, QPoint(geometry().x() + 2, geometry().y() + 2));
    pAnimation->setKeyValueAt(0.6, QPoint(geometry().x() - 4, geometry().y() + 4));
    pAnimation->setKeyValueAt(0.7, QPoint(geometry().x() + 4, geometry().y() - 4));
    pAnimation->setKeyValueAt(0.8, QPoint(geometry().x() - 4, geometry().y() - 4));
    pAnimation->setKeyValueAt(0.9, QPoint(geometry().x() + 4, geometry().y() + 4));
    pAnimation->start(QAbstractAnimation::DeleteWhenStopped);
}

>>>>>>> b209066 (“提交代码”)
BattleScene::~BattleScene()
{
    delete ui;
}
