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
#include "Packsack.h"
using namespace std;
//Packsack packsack;
class Store {
public:
	Store(){}
	void display(){
	    while (true){
            cout << "欢迎光临，疯狂的商店。请问有什么需要？" << endl;
            cout << "[1.购买]\t[2.出售]\t[3.取消]" << endl;
            cout << "请选择_____" ;
            int tempChoose;
            cin >> tempChoose;
            if (tempChoose == 1){
                system("CLS");
                cout << "[系统消息]您拥有金钱：" << packsack.getPossession() << "金" << endl;
                cout << "\n请选择要购买的东西：" << endl;
                cout << "1." << BOTTLE.getName() << "(恢复" <<BOTTLE.getAddHitPoint() << "点生命值)";
                cout << setw(21) << BOTTLE.getPrice() << "金" << endl;
                cout << "2." << BLADE.getName() << "(增加" << BLADE.getaddAttack() << "点攻击)";
                cout << setw(20) << BLADE.getPrice() << "金" << endl;
                cout << "3." << SWORD.getName() << "(增加" << SWORD.getaddAttack() << "点攻击)";
                cout << setw(20) << SWORD.getPrice() << "金" << endl;
                cout << "4." << SHOE.getName() << "(增加" << SHOE.getaddDefense() << "点护甲)";
                cout << setw(16) << SHOE.getPrice() << "金" << endl;
                cout << "5." << CROWN.getName() << "(增加" << CROWN.getaddDefense() << "点护甲)";
                cout << setw(18) << CROWN.getPrice() << "金" << endl;
                cout << "6." << CLOTHES.getName() << "(增加" << CLOTHES.getaddDefense() << "点护甲)";
                cout << setw(16) << CLOTHES.getPrice() << "金" << endl;
                cout << "7.结束购买" << endl;
                cout << endl;
                buy(packsack);
            }
            if (tempChoose == 2){
                system("CLS");
                cout << "[系统消息]您拥有金钱：" << packsack.getPossession() << "金" << endl;
                packsack.display();
                sell(packsack);

            }
            if (tempChoose == 3){
                break;
            }
	    }
    }
	void buy(Packsack &packsack) {
        int buyChoose = 0;
        while (true) {
            cout << "请选择___";
            cin >> buyChoose;
            int buyAmount;
            if (buyChoose != 7){
                cout << "请选择数量___";
                cin >> buyAmount;
            }
            switch (buyChoose) {
            case 1:
                if (packsack.getPossession() >= packsack.getBottle().getPrice() * buyAmount) {
                    packsack.getBottle().number_plus(buyAmount);
                    packsack.buyPossession(packsack.getBottle().getPrice()* buyAmount);
                    cout << "[系统消息]购买成功！您获得   " << packsack.getBottle().getName() << buyAmount <<"  瓶!";
                    cout << "\t\t<剩余金币数：  " << packsack.getPossession() << ">" << endl;
                }
                else
                    cout << "[系统消息]钱不够呀！" << endl;
                break;
            case 2:
                if (packsack.getPossession() >= packsack.getBlade().getPrice() * buyAmount) {
                    packsack.getBlade().number_plus(buyAmount);
                    packsack.buyPossession(packsack.getBlade().getPrice()* buyAmount);
                    cout << "[系统消息]购买成功！您获得   " << packsack.getBlade().getName() << buyAmount <<"  把!";
                    cout << "\t\t<剩余金币数：  " << packsack.getPossession() << ">" << endl;
                }
                else
                    cout << "[系统消息]钱不够呀！" << endl;
                break;
            case 3:
                if (packsack.getPossession() >= packsack.getSword().getPrice() * buyAmount) {
                    packsack.getSword().number_plus(buyAmount);
                    packsack.buyPossession(packsack.getSword().getPrice()* buyAmount);
                    cout << "[系统消息]购买成功！您获得   " << packsack.getSword().getName() << buyAmount <<"  把!";
                    cout << "\t\t<剩余金币数：  " << packsack.getPossession() << ">" << endl;
                }
                else
                    cout << "[系统消息]钱不够呀！" << endl;
                break;
            case 4:
                if (packsack.getPossession() >= packsack.getShoe().getPrice() * buyAmount) {
                    packsack.getShoe().number_plus(buyAmount);
                    packsack.buyPossession(packsack.getShoe().getPrice()* buyAmount);
                    cout << "[系统消息]购买成功！您获得  " << packsack.getShoe().getName() << buyAmount <<"  双!";
                    cout << "\t\t<剩余金币数：  " << packsack.getPossession() << ">" << endl;
                }
                else
                    cout << "[系统消息]钱不够呀！" << endl;
                break;
            case 5:
                if (packsack.getPossession() >= packsack.getCrown().getPrice() * buyAmount) {
                    packsack.getCrown().number_plus(buyAmount);
                    packsack.buyPossession(packsack.getCrown().getPrice()* buyAmount);
                    cout << "[系统消息]购买成功！您获得  " << packsack.getCrown().getName() << buyAmount <<"  顶!";
                    cout << "\t\t<剩余金币数：  " << packsack.getPossession() << ">" << endl;
                }
                else
                    cout << "[系统消息]钱不够呀！" << endl;
                break;
            case 6:
                if (packsack.getPossession() >= packsack.getClothes().getPrice() * buyAmount) {
                    packsack.getClothes().number_plus(buyAmount);
                    packsack.buyPossession(packsack.getClothes().getPrice()* buyAmount);
                    cout << "[系统消息]购买成功！您获得  " << packsack.getClothes().getName() << buyAmount <<"  件!";
                    cout << "\t\t<剩余金币数：  " << packsack.getPossession() << ">" << endl;
                }
                else
                    cout << "[系统消息]钱不够呀！" << endl;
                break;
            case 7:
                cout << "[系统消息]购买结束！" << endl;
                cout << "##############################################################" << endl;
                packsack.display();
                getchar();
                char tempChar;
                tempChar = getchar();
                system("CLS");
                //display();
            }
            if (buyChoose == 7)
                break;
        }
    }
	void sell(Packsack &packsack){
        int sellChoose = 0;
        while (true) {
            cout << "\n请选择要出售的东西<0.取消>_____";
            cin >> sellChoose;
            int sellAmount;
            if(sellChoose != 0){
                cout << "请选择数量___" ;
                cin >> sellAmount;
            }
            switch (sellChoose) {
            case 1:
                if (packsack.getBottle().getNumber() >= sellAmount) {
                    packsack.getBottle().number_decline(sellAmount);
                    packsack.sellPossession(packsack.getBottle().getPrice()* sellAmount);
                    cout << "[系统消息]出售成功！出售  " << packsack.getBottle().getName() << sellAmount << " 瓶";
                    cout << "\t<获得金币：" << packsack.getBottle().getPrice() / 2 * sellAmount << "金>" << endl;
                    cout << "******************************************************************" << endl;
                }
                else {
                    cout << "[系统消息]数量不足！" << endl;
                }

                break;
            case 2:
                if (packsack.getBlade().getNumber() >= sellAmount) {
                    packsack.getBlade().number_decline(sellAmount);
                    packsack.sellPossession(packsack.getBlade().getPrice() * sellAmount);
                    cout << "[系统消息]出售成功！出售  " << packsack.getBlade().getName() << sellAmount << " 把";
                    cout << "\t<获得金币：" << packsack.getBlade().getPrice() / 2 * sellAmount << "金>" << endl;
                    cout << "******************************************************************" << endl;
                }
                else {
                    cout << "[系统消息]数量不足！" << endl;
                }

                break;
            case 3:
                if (packsack.getSword().getNumber() >= sellAmount) {
                    packsack.getSword().number_decline(sellAmount);
                    packsack.sellPossession(packsack.getSword().getPrice() * sellAmount);
                    cout << "[系统消息]出售成功！出售  " << packsack.getSword().getName() << sellAmount << " 把";
                    cout << "\t<获得金币：" << packsack.getSword().getPrice() / 2 * sellAmount << "金>" << endl;
                    cout << "******************************************************************" << endl;
                }
                else {
                    cout << "[系统消息]数量不足！" << endl;
                }

                break;
            case 4:
                if (packsack.getShoe().getNumber() >= sellAmount) {
                    packsack.getShoe().number_decline(sellAmount);
                    packsack.sellPossession(packsack.getShoe().getPrice() * sellAmount);
                    cout << "[系统消息]出售成功！出售  " << packsack.getShoe().getName() << sellAmount << " 双";
                    cout << "\t<获得金币：" << packsack.getShoe().getPrice() / 2 * sellAmount << "金>" << endl;
                    cout << "******************************************************************" << endl;
                }
                else {
                    cout << "[系统消息]数量不足！" << endl;
                }

                break;
            case 5:
                if (packsack.getCrown().getNumber() >= sellAmount) {
                    packsack.getCrown().number_decline(sellAmount);
                    packsack.sellPossession(packsack.getCrown().getPrice() * sellAmount);
                    cout << "[系统消息]出售成功！出售  " << packsack.getCrown().getName() << sellAmount << " 顶";
                    cout << "\t<获得金币：" << packsack.getCrown().getPrice() / 2 * sellAmount << "金>" << endl;
                    cout << "******************************************************************" << endl;
                }
                else {
                    cout << "[系统消息]数量不足！" << endl;
                }

                break;
            case 6:
                if (packsack.getClothes().getNumber() >= sellAmount) {
                    packsack.getClothes().number_decline(sellAmount);
                    packsack.sellPossession(packsack.getClothes().getPrice() * sellAmount);
                    cout << "[系统消息]出售成功！出售  " << packsack.getClothes().getName() << sellAmount << " 件";
                    cout << "\t<获得金币：" << packsack.getClothes().getPrice() / 2 * sellAmount << "金>" << endl;
                    cout << "******************************************************************" << endl;
                }
                else {
                    cout << "[系统消息]数量不足！" << endl;
                }

                break;
            case 0 :
                cout << "[系统消息]出售结束！" << endl;
                char tempChar;
                getchar();
                tempChar = getchar();
                system("CLS");
                //display();
            }
            if (sellChoose != 0)
                packsack.display();
            else
                break;
        }
    }
private:
	Curative BOTTLE;
	Blade BLADE;
	Sword SWORD;
	Shoe SHOE;
	Crown CROWN;
	Clothes CLOTHES;
};

