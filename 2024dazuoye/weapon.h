#ifndef WEAPON_H
#define WEAPON_H

#include <QWidget>
#include "card.h"

class Weapon : public Card
{
    Q_OBJECT
public:
    Weapon();

    //基础属性
    int naijiudu;
    int ATK;

    //函数
    void equiped();
    void breakdown();

signals:
};

#endif // WEAPON_H
