#ifndef HERO_H
#define HERO_H

#include <QWidget>
#include "weapon.h"

class Hero : public QWidget
{
    Q_OBJECT
public:
    explicit Hero(QWidget *parent = nullptr);

    //基础属性
    int maxHP = 30;
    int HP = 30;
    int ATK = 0;
    int hujia = 0;
    Weapon  *weapon;

    //判断
    bool canUseHeroPower=1;
    bool canAttack=1;

    void UseHeroPower();

    template <typename T>
    void Attack(T* target);

signals:

};
#endif // HERO_H
