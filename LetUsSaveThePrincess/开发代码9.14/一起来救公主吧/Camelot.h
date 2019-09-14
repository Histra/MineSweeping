#pragma once
#include <bits/stdc++.h>
#include "Monster.h"
#include "Monster_3.h"
using namespace std;
HANDLE  hConsole_Camelot;
class Camelot : public Place{
public:
    Camelot(){
        getMessage();
    }
    void conversation_with_npc(){
        hConsole_Camelot = GetStdHandle(STD_OUTPUT_HANDLE);//字体颜色
        SetConsoleTextAttribute(hConsole_Camelot,2);
        cout<< "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~【亚\t瑟\t王\t宫\t殿】~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" <<endl;
        int tempX, tempY;
        getxy(tempX, tempY);
        char tempChar;
        SetConsoleTextAttribute(hConsole_Camelot,11);
        //Sleep(1000);
        cout << "\t" << npc1Name << "(Lv." << npc1Lv << "):" << endl;
        cout << "\t\t你是。。。。。。原谅村派来的战士吗？" << endl;
        getchar();
        tempChar = getchar();
        cout << "\t狗蛋儿(Lv." << protagonist.showLevel() << "):" << endl;
        cout << "\t\t是，请问你这里到底发生了什么事?" << endl;
        tempChar = getchar();
        clear_the_conversation(tempX, tempY);
        cout << "\t" << npc1Name << "(Lv." << npc1Lv << "):" << endl;
        cout << "\t\t我本是守护宫殿长达二十年的侍卫，谁知半年前忽然来了一个邪恶的巫师," << endl;
        cout << "\t\t她到处散播亡灵瘟疫，正如你看到的，英雄的宫殿已经变成了一片死寂，" << endl;
        cout << "\t\t我已经衰老并且感染上了瘟疫，你可否帮老夫一个忙?"<<endl;
        tempChar = getchar();
        cout << "\t狗蛋儿(Lv." << protagonist.showLevel() << "):" << endl;
        cout << "\t\t老人家，这个我是很想帮你啦，可是...可是我只是一个小人物，" << endl;
        cout << "\t\t怎么能斗得过那个邪恶的巫师呢（没有好处，干嘛帮你）" << endl;
        tempChar = getchar();
        clear_the_conversation(tempX, tempY);
        cout << "\t" << npc1Name << "(Lv." << npc1Lv << "):" << endl;
        cout << "\t\t年轻人，我看你骨骼清秀，定是一代豪杰，" << endl;
        cout << "\t\t必然能够帮助我恢复这宫殿的宁定安详，" << endl;
        cout << "\t\t完成后必将奉上丰厚的报酬，而且这巫师掳掠了一国的公主，" << endl;
        cout << "\t\t以你的相貌才华，必然能够抱得美人归呀，你看如何"<<endl;
        cout << "[系统消息]任务奖励："<<endl;
        ///*******************************
        cout <<"\t\t金币：300"<<endl;
        cout <<"\t\t经验：100"<<endl;
        ///**********************************
        tempChar = getchar();
        cout << "\t狗蛋儿(Lv." << protagonist.showLevel() << "): " << endl;
        cout << "\t\t那......好吧，降伏邪恶伸张正义，本就是我应该做，我答应您的请求" << endl;
        tempChar = getchar();
        cout << "\t狗蛋儿(Lv." << protagonist.showLevel() << "): " << endl;
        cout << "\t\t（说完，狗蛋儿进入了这座幽森的宫殿）" << endl ;
        tempChar = getchar();
        clear_the_conversation(tempX, tempY);
        SetConsoleTextAttribute(hConsole_Camelot,10);
        cout << "[1.攻击]\t[2.逃跑]\t[3.投降]\n";
        cout << "请选择______";
        int tempChoose;
        cin >> tempChoose;
        if (tempChoose == 1){
            int judge_live = 1;
            Monster_3 monster_3;
            monster_3.getMessage();
            Fight <Monster_3> fight;
            fight.fighting(monster_3,judge_live);
            if (judge_live == 0){
                fresh_village.conversation_with_npc1_npc2();
            }
        }
        if (tempChoose == 2){
            cout << "[系统消息]恭喜你狗蛋，成功逃跑！您真是跑得比兔子还快啊！" << endl;
            getchar();
            char tempChar;
            tempChar= getchar();
            system("CLS");
            //print_menu();
        }
        if (tempChoose == 3){
            cout << "[系统消息]恭喜您！获得成就：怂的一B" << endl;
            protagonist.add_achievement("怂的一B");
            getchar();
            char tempChar;
            tempChar= getchar();
        }
    //战斗结束
        cout << "\t" << npc1Name << "(Lv." << npc1Lv << "):" << endl;
        cout << "\t\t少侠果然冠绝天下，成功恢复了宫殿的平静安详，这些是你应得的奖励。"<<endl;
        cout << "[系统消息]恭喜您获得：金币+300，经验+100"<<endl;
        packsack.possession_plus(300);
        protagonist.experienceAmount_plus(100);

    }
    void getMessage(){
        //freshVillage_state = 1;
        ifstream file;
        file.open("Camelot_npc2.txt", ios_base :: in);
        if (file){
            file >> npc1Name;
            file >> npc1Lv;
        }
        file.close();

    }
private:
    string npc1Name;
    int npc1Lv;
};
