#pragma once
#include <bits/stdc++.h>
#include <windows.h>
#include "Object.h"
#include "Curative.h"
#include "Blade.h"
#include "Sword.h"
#include "Shoe.h"
#include "Crown.h"
#include "Clothes.h"
#include "Protagonist.h"
Protagonist protagonist;
using namespace std;
class Packsack {
public:
	Packsack() {
	    getMessage();
		//meat.setNumber(10);
	}
	void archive(){
        ofstream file;
        file.open("Packsack.txt", ios_base :: out);
        if (file){
            file << possession << endl;

            file << bottle.getNumber() << "\t" << equipAmount[1] << endl;
            file << blade.getNumber() << "\t" << equipAmount[2] << endl;
            file << sword.getNumber() << "\t" << equipAmount[3] << endl;
            file << shoe.getNumber() << "\t" << equipAmount[4] << endl;
            file << crown.getNumber() << "\t" << equipAmount[5] << endl;
            file << clothes.getNumber() << "\t" << equipAmount[6] << endl;
        }
        file.close();
	}
	void invoking_use(int tempChoose, int tempChoose_amount){
        if (tempChoose == 1){
            set_Use_bottle(tempChoose_amount);
        }
        if (tempChoose == 2){
            set_Use_blade(tempChoose_amount);
        }
         if (tempChoose == 3){
            set_Use_sword(tempChoose_amount);
        }
         if (tempChoose == 4){
            set_Use_shoe(tempChoose_amount);
        }
         if (tempChoose == 5){
            set_Use_crown(tempChoose_amount);
        }
         if (tempChoose == 6){
            set_Use_clothes(tempChoose_amount);
        }
	}
	void invoking_unuse(int tempChoose, int tempChoose_amount){
        if (tempChoose == 2){
            set_Unuse_blade(tempChoose, tempChoose_amount);
        }
        if (tempChoose == 3){
            set_Unuse_sword(tempChoose, tempChoose_amount);
        }
        if (tempChoose == 4){
            set_Unuse_shoe(tempChoose, tempChoose_amount);
        }
        if (tempChoose == 5){
            set_Unuse_crown(tempChoose, tempChoose_amount);
        }
        if (tempChoose == 6){
            set_Unuse_clothes(tempChoose, tempChoose_amount);
        }
	}
	void set_Use_bottle(int amount){
        if (amount > bottle.getNumber()){
            cout << "数量不足，使用失败！" << endl;
            getchar();getchar();
        }
        else{
            protagonist.current_hitPoints_plus(amount * bottle.getAddHitPoint());
            bottle.number_decline(amount);
            cout << "[系统消息]使用成功！您已使用" << bottle.getName() << amount << "瓶" << endl;
            getchar();
            getchar();
        }
	}
	void set_Use_blade(int amount){
        if (amount > blade.getNumber()){
            cout << "数量不足，使用失败！" << endl;
            getchar();getchar();
        }
        else{
            equip(2, amount);
            protagonist.strength_plus(amount * blade.getaddAttack());
            blade.number_decline(amount);
            cout << "[系统消息]使用成功！您已使用" << blade.getName() << amount << "把" << endl;
            getchar();
            getchar();
        }
	}
	void set_Use_sword(int amount){
        if (amount > sword.getNumber()){
            cout << "数量不足，使用失败！" << endl;
            getchar();getchar();
        }
        else{
            equip(3, amount);
            protagonist.strength_plus(amount * sword.getaddAttack());
            sword.number_decline(amount);
            cout << "[系统消息]使用成功！您已使用" << sword.getName() << amount << "把" << endl;
            getchar();
            getchar();
        }
	}
	void set_Use_shoe(int amount){
        if (amount > shoe.getNumber()){
            cout << "数量不足，使用失败！" << endl;
            getchar();getchar();
        }
        else{
            equip(4, amount);
            protagonist.armor_plus(amount * shoe.getaddDefense());
            shoe.number_decline(amount);
            cout << "[系统消息]使用成功！您已使用" << shoe.getName() << amount << "双" << endl;
            getchar();
            getchar();
        }
	}
	void set_Use_crown(int amount){
        if (amount > crown.getNumber()){
            cout << "数量不足，使用失败！" << endl;
            getchar();getchar();
        }
        else{
            equip(5, amount);
            protagonist.armor_plus(amount * crown.getaddDefense());
            crown.number_decline(amount);
            cout << "[系统消息]使用成功！您已使用" << crown.getName() << amount << "顶" << endl;
            getchar();
            getchar();
        }
	}
	void set_Use_clothes(int amount){
        if (amount > clothes.getNumber()){
            cout << "数量不足，使用失败！" << endl;
            getchar();getchar();
        }
        else{
            equip(6, amount);
            protagonist.armor_plus(amount * clothes.getaddDefense());
            clothes.number_decline(amount);
            cout << "[系统消息]使用成功！您已使用" << clothes.getName() << amount << "件" << endl;
            getchar();
            getchar();
        }
	}
	void set_Unuse_bottle(){

	}
	void set_Unuse_blade(int choose, int amount){
        if (amount > equipAmount[choose]){
            cout << "拆卸失败，数量不足！" << endl;
            getchar();
        }
        else{
            protagonist.strength_decline(amount * blade.getaddAttack());
            equipAmount[choose] -= amount;
            blade.number_plus(amount);
            cout << "[系统消息]拆卸成功！您已拆卸" << blade.getName() << amount << "把" << endl;
            getchar();
            getchar();
        }
	}
	void set_Unuse_sword(int choose, int amount){
        if (amount > equipAmount[choose]){
            cout << "拆卸失败，数量不足！" << endl;
            getchar();
        }
        else{
            protagonist.strength_decline(amount * sword.getaddAttack());
            equipAmount[choose] -= amount;
            sword.number_plus(amount);
            cout << "[系统消息]拆卸成功！您已拆卸" << sword.getName() << amount << "把" << endl;
            getchar();
            getchar();
        }
	}
	void set_Unuse_shoe(int choose, int amount){
        if (amount > equipAmount[choose]){
            cout << "拆卸失败，数量不足！" << endl;
            getchar();
        }
        else{
            protagonist.armor_decline(amount * shoe.getaddDefense());
            equipAmount[choose] -= amount;
            shoe.number_plus(amount);
            cout << "[系统消息]拆卸成功！您已拆卸" << shoe.getName() << amount << "双" << endl;
            getchar();
            getchar();
        }
	}
	void set_Unuse_crown(int choose, int amount){
        if (amount > equipAmount[choose]){
            cout << "拆卸失败，数量不足！" << endl;
            getchar();
        }
        else{
            protagonist.armor_decline(amount * crown.getaddDefense());
            equipAmount[choose] -= amount;
            crown.number_plus(amount);
            cout << "[系统消息]拆卸成功！您已拆卸" << crown.getName() << amount << "顶" << endl;
            getchar();
            getchar();
        }
	}
	void set_Unuse_clothes(int choose, int amount){
        if (amount > equipAmount[choose]){
            cout << "拆卸失败，数量不足！" << endl;
            getchar();
        }
        else{
            protagonist.armor_decline(amount * clothes.getaddDefense());
            equipAmount[choose] -= amount;
            clothes.number_plus(amount);
            cout << "[系统消息]拆卸成功！您已拆卸" << clothes.getName() << amount << "件" << endl;
            getchar();
            getchar();
        }
	}

	void display() {
		cout << "背包内有如下物品：" << endl;
		cout << "金币" << possession << endl;

        cout << "1." << bottle.getName() << setw(14) << bottle.getNumber()<< "瓶" << endl;
        cout << "2." << blade.getName() << setw(10) << blade.getNumber() << "把" << endl;
        cout << "3." << sword.getName() << setw(10) << sword.getNumber() << "把" << endl;
        cout << "4." << shoe.getName() << setw(6) << shoe.getNumber() << "双" << endl;
        cout << "5." << crown.getName() << setw(10) << crown.getNumber() << "顶" << endl;
        cout << "6." << clothes.getName() << setw(8) << clothes.getNumber() << "件" << endl;
	}
	void possession_plus(int amount){
        possession += amount;
	}
	void possession_decline(int amount){
        if (possession < amount)
            possession = 0;
        else
            possession -= amount;
	}
	int getPossession() { return possession; }
	void buyPossession(int money) { possession -= money; }
	void sellPossession(int money) { possession += money / 2; }

    void equip(int choose, int amount){
        equipAmount[choose] += amount;
    }
    void equip_display(bool &flag){
        for (int i = 1; i < 7; i ++){
            if (equipAmount[i] != 0){
                flag = true;
                if (i == 2){
                    cout << "\t\t" << "2." << blade.getName() << "\t"  << equipAmount[2]<< endl;
                }
                if (i == 3)
                    cout << "\t\t" << "3." << sword.getName() << "\t"  << equipAmount[3] << endl;
                if (i == 4)
                    cout << "\t\t" << "4." << shoe.getName() << "\t"  << equipAmount[4] << endl;
                if (i == 5)
                    cout << "\t\t" << "5." << crown.getName() << "\t"  << equipAmount[5]<< endl;
                if (i == 6)
                    cout << "\t\t" << "6." << clothes.getName() << "\t" <<  equipAmount[6] << endl;
            }
        }
    }
    void getMessage(){
        ifstream file;
        file.open("packsack.txt", ios_base :: in);
        if (file){
            int amount;
            file >> possession;

            file >> amount;
            file >> equipAmount[1];
            bottle.set_number(amount);
            file >> amount;
            file >> equipAmount[2];
            blade.set_number(amount);
            file >> amount;
            file >> equipAmount[3];
            sword.set_number(amount);
            file >> amount;
            file >> equipAmount[4];
            shoe.set_number(amount);
            file >> amount;
            file >> equipAmount[5];
            crown.set_number(amount);
            file >> amount;
            file >> equipAmount[6];
            clothes.set_number(amount);
        }
        file.close();
    }
    Curative & getBottle(){
        return bottle;
    }
    Blade & getBlade(){
        return blade;
    }
    Sword & getSword(){
        return sword;
    }
    Shoe & getShoe(){
        return shoe;
    }
    Crown & getCrown(){
        return crown;
    }
    Clothes & getClothes(){
        return clothes;
    }

private:
	int possession;
	Curative bottle;
	Blade blade;
	Sword sword;
	Shoe shoe;
	Crown crown;
	Clothes clothes;
	int equipAmount[7];
};

