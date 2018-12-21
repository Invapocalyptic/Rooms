#pragma once
#include <stdio.h>
#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Item{
	
private:
	bool canPickUp;
	int weight;
	string name;
	bool canEquip;
	
public:
	Item(bool canPickUp, int weight, string name, bool canEquip);
	int getWeight();
	
};
