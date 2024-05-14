#include "minion.h"

Minion::Minion()
{
    isminion=1;
}

void Minion::drawminion(){
    ischangdi=1;
    this->pix.load(minion_pic);
    this->setFixedSize(pix.width(),pix.height());
    this->setStyleSheet("QPushButton{border:0px}");
    this->setIcon(pix);
    this->setIconSize(QSize(pix.width(),pix.height()));
}
