#ifndef MINION_H
#define MINION_H

#include <QWidget>
#include "card.h"
#include "hero.h"

class Minion : public Card
{
    Q_OBJECT
public:
    Minion();

    //基础面板
    int HP;
    int MaxHP;
    int ATK;

    bool CanAttack = 1;
    bool isqianxing = 0;

    QString minion_pic;

    template <typename T>
    void Attack(T* target);

    void die();
    void drawminion();

signals:
};

#endif // MINION_H
