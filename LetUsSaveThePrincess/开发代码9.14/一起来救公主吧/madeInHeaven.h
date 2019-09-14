#pragma once
#include <bits/stdc++.h>
#include "Monster.h"
#include "Monster_4.h"
//freshVillage fresh_village;
using namespace std;
HANDLE  hConsole_madeTnHeaven;
class madeInHeaven : public Place{
public:
    madeInHeaven(){
        getMessage();
    }
    void conversation_with_npc(){
        hConsole_madeTnHeaven = GetStdHandle(STD_OUTPUT_HANDLE);//字体颜色
        SetConsoleTextAttribute(hConsole_madeTnHeaven,2);
        cout<< "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~【天\t上\t人\t间】~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" <<endl;
        char tempChar;
        int tempX, tempY;
        getxy(tempX, tempY);
        SetConsoleTextAttribute(hConsole_madeTnHeaven,11);
        //Sleep(1000);
        cout << "\t狗蛋儿(Lv." << protagonist.showLevel() << "):" << endl;
        cout << "\t\t多么美的景色呀，这里难道是仙境么?（边说边走，突然前方出现一座楼阁）" << endl;
        getchar();
        tempChar = getchar();
        cout << "\t" << npc1Name << "(Lv." << npc1Lv << "):" << endl;
        cout << "\t\t这位公子要进来玩一下嘛!" << endl;
        tempChar = getchar();
        clear_the_conversation(tempX, tempY);
        cout << "\t狗蛋儿(Lv." << protagonist.showLevel() << "):" << endl;
        cout << "\t\t（一脸尴尬）这...这个我囊中羞涩" << endl;
        tempChar = getchar();
        cout << "\t" << npc1Name << "(Lv." << npc1Lv << "):" << endl;
        cout << "\t\t（掩面而笑）这里能赚钱的地方有很多，我介绍一个给你吧 "<< endl;
        tempChar = getchar();
        clear_the_conversation(tempX, tempY);
        cout << "\t狗蛋儿(Lv." << protagonist.showLevel() << "): " << endl;
        cout << "\t\t那就劳烦你了（喜悦溢于言表）" ;
        tempChar = getchar();
        cout << "\t" << npc1Name << "(Lv." << npc1Lv << "):" << endl;
        cout << "\t\t在前面的不远处，有能赚得大量金币的地方，这位客人赶快去吧，不要忘记回来呦"<< endl;
        cout << "[系统消息]任务奖励：金币：300" << endl;
        tempChar = getchar();
        cout << "\t狗蛋儿(Lv." << protagonist.showLevel() << "): " << endl;
        cout << "\t\t（听完，迫不及待的带着自己的宠物飞奔过去）" << endl;
        tempChar = getchar();
        clear_the_conversation(tempX, tempY);
        cout << "【突然阴风挂起，一只巨大无比的怪物出现....(最好再改一下,加上背景渲染)】" << endl;
        int judge_live = 1;
        Monster_4 monster_4;
        monster_4.getMessage();
        Fight <Monster_4> fight;
        fight.fighting(monster_4, judge_live);
        if (judge_live == 0){
            fresh_village.conversation_with_npc1_npc2();
        }
        else {
            cout << "\t" << npc1Name << "(Lv." << npc1Lv << "):" << endl;
            cout <<"恭喜你，狗蛋，完成任务【活着回来】"<<endl;
            cout <<"[1.进入仙境]\t2.[离开仙境]\n";
            cout <<"请选择_____";
            int tempChoose;
            cin >> tempChoose;
            if (tempChoose == 1){
                cout <<"[系统消息]好色的狗蛋被扣除200金币"<<endl;
                packsack.possession_decline(200);
            }

            if (tempChoose == 2){
                cout <<"[系统消息]正直的狗蛋获得任务奖励：300金币"<<endl;
                packsack.possession_plus(300);
            }

            getchar();getchar();
        }

    }
    void getMessage(){
        //freshVillage_state = 1;
        ifstream file;
        file.open("madeInHeaven_npc1.txt", ios_base :: in);
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
