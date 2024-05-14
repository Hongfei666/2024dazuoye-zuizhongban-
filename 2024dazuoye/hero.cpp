#include "hero.h"

Hero::Hero(QWidget *parent)
    : QWidget{parent}
{}

void Hero::UseHeroPower(){
    this->weapon=new Weapon();
}

template <typename T>
void Hero::Attack(T* target){
    this->HP-=target->ATK;
    target->HP-=this->ATK;
}

