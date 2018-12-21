#include "Weapons.h"

Weapons::Weapons( int weight, string name, int damage, int durability, int range){
    this.canPickUp = true;
    this.weight = weight;
    this.name = name;
    this.damage = damage;
    this.maxDur = durability;
    this.range = range;
    this.durability = durability;
}
int Weapons::getDamage(){
    return damage;
}

int Weapons::getDurability(){
    return durability;
}

void Weapons::setDur(){
    if(durability > 0){
        durability--;
    } else {
        cout << "You can't use this weapon" << endl;
    }

}

void Weapons::repair(int repPoints){
    if(repPoints > 0){

        durability = maxDur;
    } else if ((durability+repPoints) < maxDur && repPoins > 0){
        durability += repPoints;
    }

}  