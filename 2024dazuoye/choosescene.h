#ifndef CHOOSESCENE_H
#define CHOOSESCENE_H

#include <QMainWindow>
#include "battlescene.h"

class ChooseScene : public QMainWindow
{
    Q_OBJECT
public:
    int kind=0;
    explicit ChooseScene(QWidget *parent = nullptr);
    void paintEvent(QPaintEvent *);
    void appear(QPaintEvent *painter);
    BattleScene *battle=NULL;

signals:
};

#endif // CHOOSESCENE_H
