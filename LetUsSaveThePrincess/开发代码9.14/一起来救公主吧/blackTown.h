#pragma once
#include <bits/stdc++.h>
#include "Protagonist.h"
#include "Monster.h"
#include "Monster_8.h"
#include "Fight.h"

HANDLE  hConsole_blackTown;
//Protagonist protagonist_blackTown;

class blackTown : public Place{
public:
    blackTown(){
        getMessage();
    }
    void conversation_with_npc(){

        hConsole_blackTown = GetStdHandle(STD_OUTPUT_HANDLE);//字体颜色
        SetConsoleTextAttribute(hConsole_blackTown,4);
        cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~【黑色城镇】~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
        int tempX, tempY;
        char tempChar;
        cout << "你刚走进黑色城镇，只见一片漆黑的房屋和街道，却闪烁着滑油油的绿色！" << endl;
        tempChar = getchar();
        tempChar = getchar();

        SetConsoleTextAttribute(hConsole_blackTown,5);
        getxy(tempX, tempY);
        cout << "\t" << blackTown_npc_name << "(Lv." << blackTown_npc_lv << "):" << endl;
        cout << "\t\t只要998，小帽带回家! 前面的骚年，看你五行缺绿，来顶小帽吧!" << endl;
        tempChar = getchar();
        cout << "\t狗蛋儿(Lv." << protagonist.showLevel() << ")：" << endl;
        cout << "\t\t不要，我是要做拯救公主的男人！" << endl;
        tempChar = getchar();
        clear_the_conversation(tempX, tempY);

        SetConsoleTextAttribute(hConsole_blackTown,9);
        cout << "\t" << blackTown_npc_name << "(Lv." << blackTown_npc_lv << "):" << endl;
        cout << "\t\t帮我一个忙，我就告诉你公主的下落！                           " << endl;
        tempChar = getchar();
        cout << "\t狗蛋儿(Lv." << protagonist.showLevel() << ")：" << endl;
        cout << "\t\t真的吗？别欺负我书读得少。" << endl;
        tempChar = getchar();
        cout << "\t" << blackTown_npc_name << "(Lv." << blackTown_npc_lv << "):" << endl;
        cout << "\t\t我老王一言，那可是驷马难追！" << endl;
        tempChar = getchar();
        cout << "\t狗蛋儿(Lv." << protagonist.showLevel() << ")：" << endl;
        cout << "\t\t成交。" << endl;
        tempChar = getchar();
        clear_the_conversation(tempX, tempY);

        SetConsoleTextAttribute(hConsole_blackTown,6);
        cout << "\t" << blackTown_npc_name << "(Lv." << blackTown_npc_lv << "):" << endl;
        cout << "\t\t在这黑色城镇里长着一种制作绿帽的草，用其绿色汁液浸泡过的帽子永不褪色！你帮我采几株。" << endl;
        tempChar = getchar();
        cout << "\t狗蛋儿(Lv." << protagonist.showLevel() << ")：" << endl;
        cout << "\t\t稍等片刻，我开下疾跑。" << endl;
        tempChar = getchar();
        clear_the_conversation(tempX, tempY);

        SetConsoleTextAttribute(hConsole_blackTown,7);
        cout << "\t" << blackTown_npc_name << "(Lv." << blackTown_npc_lv << "):" << endl;
        cout << "\t\t唉，骚年，那里有魔物看守的！唉，又是一条鲜活的生命哟!                               " << endl;
        tempChar = getchar();
        clear_the_conversation(tempX, tempY);

        SetConsoleTextAttribute(hConsole_blackTown,14);
        cout << endl;
        cout << "【一团绿色的雾气缓缓飘来，弥漫着原谅的气息】                                            "<< endl;
        tempChar = getchar();
        cout << "\t" << blackTown_monster_name << "(LV." << blackTown_monster_lv << "):" << endl;
        cout << "\t\t你也是来抢我的原谅草的吗？呵，男人！" << endl;
        tempChar = getchar();
        cout << "\t狗蛋儿(Lv." << protagonist.showLevel() << ")：" << endl;
        cout << "\t\t咦，怎么又是魔物？倒了八辈子血霉了！" << endl;
        tempChar = getchar();
        clear_the_conversation(tempX, tempY);

        SetConsoleTextAttribute(hConsole_blackTown,10);
        cout << "[1.攻击]\t[2.逃跑]\n";
        cout << "请选择______";
        getxy(tempX, tempY);
        int choose;
        cin >> choose;
        if (choose == 1){
            int judge_live = 1;
            Monster_8 monster_8;
            monster_8.getMessage();
            Fight <Monster_8> fight;
            fight.fighting(monster_8, judge_live);
            if (judge_live == 0){
                fresh_village.conversation_with_npc1_npc2();
            }
            else{
                SetConsoleTextAttribute(hConsole_blackTown,7);
                cout << "\t" << blackTown_npc_name << "(Lv." << blackTown_npc_lv << "):" << endl;
                cout << "\t\t" << "妈耶，你竟然活着回来了！也罢，公主被抓到东边的埋骨之林了！那里可真是地狱一样的存在！" << endl;
                tempChar = getchar();
                cout << "[系统消息]获得老王奖励+250金，经验+100" << endl;
                packsack.possession_plus(250);
                protagonist.experienceAmount_plus(100);
                cout << "[系统消息]恭喜您！获得成就：隔壁老王的QQ好友" << endl;
                protagonist.add_achievement("隔壁老王的QQ好友");
                tempChar = getchar();
                tempChar = getchar();
                clear_the_conversation(tempX, tempY);
            }
        }
        if (choose == 2){
                cout << "[系统消息]恭喜你狗蛋，成功逃跑！您真是跑得比兔子还快啊！" << endl;
                tempChar = getchar();
                tempChar= getchar();
                system("CLS");
        }


        /* 只要战胜魔物，就算完成任务，并提供公主信息
        SetConsoleTextAttribute(hConsole_blackTown,7);
        cout << "\t" << blackTown_npc_name << "(Lv." << blackTown_npc_lv << "):" << endl;
        cout << "\t\t" << "妈耶，你竟然活着回来了！也罢，公主被抓到东边的埋骨之林了！那里可真是地狱一样的存在！" << endl;*/




    }
    void getMessage(){
        ifstream file;
        file.open("blackTown_npc_monster.txt", ios_base :: in);
        if (file){
            file >> blackTown_npc_name;
            file >> blackTown_npc_lv;
            file >> blackTown_monster_name;
            file >> blackTown_monster_lv;
        }
        file.close();
    }
private:
    string blackTown_npc_name;
    int blackTown_npc_lv;
    string blackTown_monster_name;
    int blackTown_monster_lv;
};
