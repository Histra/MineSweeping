#pragma once
#include <bits/stdc++.h>
using namespace std;
class Curative:public Object{
public:
	Curative(){
		ifstream file("Curative.txt", ios_base::in);
		if (file) {
			file >> name;
			file >> price;
			file >> addhitPoint;
		}
		file.close();
	}
	string getName() { return name; }
	int getPrice() { return price; }
	int getAddHitPoint() { return addhitPoint; }
	int getNumber() { return number; }
	int get_equip_number(){
        return equip_number;
	}
	void set_equip_number(int amount){
        equip_number = amount;
	}
	void number_decline(int amount){
        number -= amount;
	}
	void number_plus(int amount){
        number += amount;
	}
	void set_number(int amount){
        number = amount;
	}
private:
	string name;
	int price;
	int addhitPoint;
	static int equip_number;
    int number;
};
int Curative :: equip_number = 0;
