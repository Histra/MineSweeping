#pragma once
#include <bits/stdc++.h>
#include "Protagonist.h"
#include "Store.h"  //Store.h里定义了一个packsack对象
#include "freshVillage.h"
using namespace std;
HANDLE  hConsole_devilAbyss;
//Protagonist protagonist_devilAbyss;

class devilAbyss : public Place{
public:
    devilAbyss (){
        getMessage();
    }
    void conversation_with_npc(){
        hConsole_devilAbyss = GetStdHandle(STD_OUTPUT_HANDLE);//字体颜色
        SetConsoleTextAttribute(hConsole_devilAbyss, 4);
        cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~【恶魔之渊】~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
        int tempX, tempY;
        char tempChar;
        cout << "远始之战结束后， 魔族一直囤居此地。苍木突兀着伸向天空，鸦鸣断断续续，浸染着腐朽与不详。" << endl;
        tempChar = getchar();
        tempChar = getchar();
        getxy(tempX, tempY);

        SetConsoleTextAttribute(hConsole_devilAbyss,5);
        cout << "\t狗蛋儿(LV." << protagonist.showLevel() << ")：" << endl;
        cout << "\t\t" << "妈耶，这儿好阴森！一个人也没有吗？" << endl;
        tempChar = getchar();
        cout << "\t" << devilAbyss_npc_name << "(Lv." << devilAbyss_npc_lv << "):" << endl;
        cout << "\t\t" << "好久没闻到活人的气息了！今晚要加餐喽!" << endl;
        tempChar = getchar();
        clear_the_conversation(tempX, tempY);

        SetConsoleTextAttribute(hConsole_devilAbyss, 6);
        cout << "\t狗蛋儿(LV." << protagonist.showLevel() << ")：" << endl;
        cout << "\t\t" << "谁？谁在哪？有种出来啊！" << endl;
        tempChar = getchar();
        cout << "[一团紫绿色的雾气飘来]" << endl;
        tempChar = getchar();
        cout << "\t" << devilAbyss_npc_name << "(Lv." << devilAbyss_npc_lv << "):" << endl;
        cout << "\t\t" << "当你凝视深渊的时候，深渊也在凝视你。而我,就来自深渊！" << endl;
        tempChar = getchar();
        clear_the_conversation(tempX, tempY);

        SetConsoleTextAttribute(hConsole_devilAbyss, 10);
        cout << "[雾气里突然跌出一个灰头土脸的人]" << endl;
        tempChar = getchar();
        cout << "\t" << devilAbyss_npc_name << "(Lv." << devilAbyss_npc_lv << "):" << endl;
        cout << "\t\t" << "我去，谁扔的烂香蕉皮？摔死我了!" << endl;
        tempChar = getchar();
        cout << "\t狗蛋儿(LV." << protagonist.showLevel() << ")：" << endl;
        cout << "\t\t" << "你是想笑死我好继承我的财产吗？我还以为是魔物呢，没想到是个逗比！" << endl;
        tempChar = getchar();
        clear_the_conversation(tempX, tempY);

        SetConsoleTextAttribute(hConsole_devilAbyss, 9);
        cout << "\t" << devilAbyss_npc_name << "(Lv." << devilAbyss_npc_lv << "):" << endl;
        cout << "\t\t" << "严肃点！此路是我开，此树是我栽，要打此路过，留下买路财！一口价250金！" << endl;
        tempChar = getchar();
        cout << "1.宁死不屈，   2.大丈夫能屈能伸，   3.三十六计走为上" << endl;
        cout << "请选择_______";
        int choose;
        getxy(tempX, tempY);
        while (true){
             cin >> choose;
             if (choose == 1){
                    SetConsoleTextAttribute(hConsole_devilAbyss, 14);
                    cout << "\t" << devilAbyss_npc_name << "(Lv." << devilAbyss_npc_lv << "):" << endl;
                    cout << "\t\t" << "有骨气！敬你是条汉子！" << endl;
                    tempChar = getchar();
                    packsack.possession_decline(packsack.getPossession()); //新添加的函数，在背包头文件里
                    protagonist.hitPoints_decline(protagonist.show_current_hitPoints() - 1);
                    cout << "[系统消息]你的钱包已空！当前生命值已为1！" << endl;
                    tempChar = getchar();
                    cout << "[系统消息]恭喜您！获得成就：穷的一B" << endl;
                    protagonist.add_achievement("穷的一B");
                    tempChar= getchar();
                    clear_the_conversation(tempX, tempY);
                    break;
             }
             if (choose == 2){
                    SetConsoleTextAttribute(hConsole_devilAbyss, 10);
                    cout << "\t狗蛋儿(LV." << protagonist.showLevel() << ")：社会我逼哥，人狠骚话多。我给！" << endl;
                    tempChar = getchar();
                    packsack.possession_decline(250);
                    cout << "\t" << devilAbyss_npc_name << "(Lv." << devilAbyss_npc_lv << "):" << endl;
                    cout << "\t\t" << "这就对了嘛！瓜娃子，非要逼我出手！" << endl;
                    tempChar = getchar();
                    cout << "[系统消息]恭喜您！获得成就：怂的一B" << endl;
                    protagonist.add_achievement("怂的一B");
                    tempChar= getchar();
                    clear_the_conversation(tempX, tempY);
                    break;
             }
             if (choose == 3){
                    SetConsoleTextAttribute(hConsole_devilAbyss, 7);
                    cout << "\t" << devilAbyss_npc_name << "(Lv." << devilAbyss_npc_lv << "):" << endl;
                    cout << "\t\t" << "MMP！敢跑，狗腿不想要了是吧！" << endl;
                    tempChar = getchar();
                    cout << "[系统消息]恭喜您！获得成就：三条腿的二狗子" << endl;
                    protagonist.add_achievement("三条腿的二狗子");
                    tempChar = getchar();
                    clear_the_conversation(tempX, tempY);
             }
             if (choose >= 4){
                    SetConsoleTextAttribute(hConsole_devilAbyss, 13);
                    cout << "[系统消息]是不是撒？有这个选项吗？" << endl;
                    tempChar = getchar();
                    cout << "[系统消息]恭喜您！获得成就：瞎了狗眼" << endl;
                    tempChar = getchar();
                    clear_the_conversation(tempX, tempY);
             }
        }

    }
    void getMessage(){
        ifstream file;
        file.open("devilAbyss_npc.txt", ios_base :: in);
        if (file){
            file >> devilAbyss_npc_name;
            file >> devilAbyss_npc_lv;

        }
        file.close();
    }
private:
    string devilAbyss_npc_name;
    int devilAbyss_npc_lv;
};
