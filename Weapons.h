#pragma once 
#include "Item.h"

class Weapons : Item{

private:
	int damage;
	int durability;
    int range;
    const int maxDur;

public:
	Weapon( int weight, string name, int damage, int durability, int range);
    int getDamage();
    int getDurability();
    void setDur();
    void repair(int repPoints);
};