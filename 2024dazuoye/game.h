#ifndef GAME_H
#define GAME_H

#include <QObject>
#include "minion.h"
#include "spell.h"
#include "weapon.h"
#include <QPixmap>

class Game : public QObject
{
    Q_OBJECT
public:
    explicit Game(QObject *parent = nullptr);

signals:
};
class xingyunbi:public Spell
{
public:
    xingyunbi()
    {
        Spell();
        this->card_pic=":/Image/xingyunbi.png";
        this->mana=0;
        this->originmana=0;
        draw();
    }
};

class weibi:public Spell
{
public:
    weibi()
    {
        Spell();
        this->card_pic=":/Image/weibi.png";
        this->mana=0;
        this->originmana=0;
        draw();
    }
};

class sijidaifa:public Spell
{
public:
    sijidaifa()
    {
        Spell();
        this->card_pic=":/Image/sijidaifa.png";
        this->mana=0;
        this->originmana=0;
        draw();
    }
};

class anyingbu:public Spell
{
public:
    anyingbu()
    {
        Spell();
        this->card_pic=":/Image/anyingbu.png";
        this->mana=0;
        this->originmana=0;
        draw();
        isneedtarget=1;
    }
};

class yaoxie:public Spell
{
public:
    yaoxie()
    {
        Spell();
        this->card_pic=":/Image/yaoxie.png";
        this->mana=1;
        this->originmana=1;
        draw();
        isneedtarget=1;
<<<<<<< HEAD
=======
        isjiaoyi=1;
>>>>>>> b209066 (“提交代码”)
    }
};
class chuidiao:public Spell
{
public:
    chuidiao()
    {
        Spell();
        this->card_pic=":/Image/chuidiao.png";
        this->islianji=1;
        this->mana=1;
        this->originmana=1;
        draw();
    }
};

class anyingzhimen:public Spell
{
public:
    anyingzhimen()
    {
        Spell();
        this->card_pic=":/Image/anyingzhimen.png";
        this->mana=1;
        this->originmana=1;
        draw();
    }
};
class tongdao:public Spell
{
public:
    tongdao()
    {
        Spell();
        this->card_pic=":/Image/tongdao.png";
        this->mana=1;
        this->originmana=1;
        draw();
    }
};

class wandao:public Weapon
{
public:
    wandao()
    {
        Weapon();
        this->card_pic=":/Image/wandao.png";
        this->mana=1;
        this->originmana=1;
        this->ATK=2;
        this->naijiudu=2;
<<<<<<< HEAD
=======
        isjiaoyi=1;
>>>>>>> b209066 (“提交代码”)
        draw();
    }
};

class tengwu:public Minion
{
public:
    tengwu()
    {
        Minion();
        this->card_pic=":/Image/tengwu.png";
        this->minion_pic=":/Image/tengwu_minion.png";
        this->mana=2;
        this->originmana=2;
        this->ATK=3;
        this->HP=2;
        this->MaxHP=2;
        draw();
        isneedtarget=1;
    }
};

class laoqian:public Minion
{
public:
    laoqian()
    {
        Minion();
        this->card_pic=":/Image/laoqian.png";
        this->minion_pic=":/Image/laoqian_minion.png";
        this->islianji=1;
        this->mana=2;
        this->originmana=2;
        this->ATK=3;
        this->HP=2;
        this->MaxHP=2;
        draw();
    }
};

class xingpian:public Spell
{
public:
    xingpian()
    {
        Spell();
        this->card_pic=":/Image/xingpian.png";
        this->mana=2;
        this->originmana=2;
        this->islianji=1;
        draw();
    }
};

class shanbi:public Spell
{
public:
    shanbi()
    {
        Spell();
        this->card_pic=":/Image/shanbi.png";
        this->mana=2;
        this->originmana=2;
        draw();
    }
};


class weimu:public Spell
{
public:
    weimu()
    {
        Spell();
        this->card_pic=":/Image/weimu.png";
        this->mana=3;
        this->originmana=3;
        draw();
    }
};

class yaoshui:public Spell
{
public:
    yaoshui()
    {
        Spell();
        this->card_pic=":/Image/yaoshui.png";
        this->mana=4;
        this->originmana=4;
        draw();
    }
};

class daoyou:public Minion
{
public:
    daoyou()
    {
        Minion();
        this->card_pic=":/Image/daoyou.png";
        this->minion_pic=":/Image/daoyou_minion.png";
        this->mana=4;
        this->originmana=4;
        this->islianji=1;
        this->ATK=3;
        this->HP=3;
        this->MaxHP=3;
        draw();
    }
};

class shayu:public Minion
{
public:
    shayu()
    {
        Minion();
        this->card_pic=":/Image/shayu.png";
        this->minion_pic=":/Image/shayu_minion.png";
        this->mana=4;
        this->originmana=4;
        this->ATK=0;
        this->HP=3;
        this->MaxHP=3;
        draw();
    }
};

class doupeng:public Spell
{
public:
    doupeng()
    {
        Spell();
        this->card_pic=":/Image/doupeng.png";
        this->mana=3;
        this->originmana=3;
        draw();
    }
};

class guiling:public Minion
{
public:
    guiling()
    {
        Minion();
        this->card_pic=":/Image/guiling.png";
        this->minion_pic=":/Image/guiling_minion.png";
        this->mana=6;
        this->originmana=6;
        this->islianji=1;
        this->ATK=5;
        this->HP=5;
        this->MaxHP=5;
        draw();
        isneedtarget=1;
    }
};

class jipao:public Spell
{
public:
    jipao()
    {
        Spell();
        this->card_pic=":/Image/jipao.png";
        this->mana=6;
        this->originmana=6;
        draw();
    }
};

#endif // GAME_H
