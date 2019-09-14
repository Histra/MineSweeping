#pragma once
#include <bits/stdc++.h>
using namespace std;
class Sword:public Object {
public:
	Sword() {
		ifstream file("Sword.txt", ios_base::in);
		if (file) {
			file >> name;
			file >> price;
			file >> addAttack;
		}
		file.close();
	}
	string getName() { return name; }
	int getPrice() { return price; }
	int getaddAttack() { return addAttack; }
	int getNumber() { return number; }
	int get_equip_number(){
        return equip_number;
	}
	void set_equip_number(int amount){
        equip_number = amount;
	}
	void buyNumber() { number++; }
	void sellNumber() { number--; }
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
	int addAttack;
	static int equip_number;
	int number;
};

int Sword :: equip_number = 0;
