#pragma once
#include <bits/stdc++.h>
using namespace std;

class Object {
public:
	Object() { number = 0; }
	virtual string getName() { return name; }
	virtual int getPrice() { return price; }
	virtual int getNumber() { return number; }
	virtual void buyNumber() { number++; }
	virtual void sellNumber() { number--; }
	virtual void number_decline(int amount){
        number -= amount;
	}
	virtual void number_plus(int amount){
        number += amount;
	}
private:
	string name;
	int price;
	int number;
};
