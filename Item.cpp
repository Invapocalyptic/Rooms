#include "Item.h"

Item::Item(bool canPickUp, int weight, string name, bool canEquip){
	this.canPickUp = canPickUp;
	this.weight = weight;
	this.name = name;
	this.canEquip = canEquip;
}
int Item::getWeight(){
	return weight;
}