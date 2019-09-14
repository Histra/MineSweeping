#pragma once
#include <bits/stdc++.h>
using namespace std;
class Clothes:public Object {
public:
	Clothes() {
		ifstream file("Clothes.txt", ios_base::in);
		if (file) {
			file >> name;
			file >> price;
			file >> addDefense;
		}
		file.close();
	}
	string getName() { return name; }
	int getPrice() { return price; }
	int getaddDefense() { return addDefense; }
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
	int addDefense;
	static int equip_number;
	int number;
};
int Clothes :: equip_number = 0;
