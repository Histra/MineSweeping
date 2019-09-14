#pragma once
#include <bits/stdc++.h>
#include "Protagonist.h"
#include "Monster.h"
#include "Monster_1.h"
#include "Fight.h"
using namespace std;
//Fight fight;
void gotoxy(int x, int y){
	HANDLE hOut = GetStdHandle(STD_OUTPUT_HANDLE);
	COORD c = { x, y };
	SetConsoleCursorPosition(hOut, c);
}
void getxy(int &x, int &y){
    HANDLE gh_std_out;
    gh_std_out = GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_SCREEN_BUFFER_INFO bInfo;
    GetConsoleScreenBufferInfo(gh_std_out,&bInfo);
    x = bInfo.dwCursorPosition.X;
    y = bInfo.dwCursorPosition.Y;
}
void clear_the_conversation(int tempX, int tempY){
    gotoxy(tempX, tempY);
    for (int i = 1; i <= 16; i ++){
        for (int j = 1; j <= 100; j ++)
            cout << "   ";
        cout << endl;
    }
    gotoxy(tempX, tempY);
}
HANDLE  hConsole_freshVillage;
//Protagonist protagonist;
class freshVillage{
public:
    void conversation_with_npc1_npc2(){
        hConsole_freshVillage = GetStdHandle(STD_OUTPUT_HANDLE);//字体颜色
        SetConsoleTextAttribute(hConsole_freshVillage,2);
        cout<< "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~【新\t手\t村】~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" <<endl;
        int tempX, tempY;
        char tempChar;
        cout << "你走在新手村的大路上，春风得意，感觉自己一定能够救出公主，走向人生巅峰!" << endl;
        tempChar = getchar();
        SetConsoleTextAttribute(hConsole_freshVillage,3);
        getxy(tempX, tempY);
        cout << "突然，一位妙龄女子出现在大路上，容颜姣好，唇红齿白，身着水手服。" << endl;
        SetConsoleTextAttribute(hConsole_freshVillage,11);
        //Sleep(1000);
        cout << "\tNPC(Lv." << npc1Lv << "):" << endl;
        cout << "\t\t您好，狗蛋儿！欢迎来到<<一起来救公主吧>>~~" << endl;
        tempChar = getchar();
        cout << "\t狗蛋儿(Lv." << protagonist.showLevel() << ")[咽了一口口水]:\t敢问这位姑娘的芳名？" << endl;
        tempChar = getchar();
        //
        clear_the_conversation(tempX, tempY);
        //
        cout << "\tNPC(Lv." << npc1Lv << "):" << endl;
        cout << "\t\t小女子名叫" << npc1Name << endl;
        tempChar = getchar();
        cout << "\tNPC(Lv." << npc1Lv << "):" << endl;
        cout << "\t\t这里是新手村，为了维护全服公平秩序，那个超级无敌宇宙第一帅的开发者特地派我来保护大家免受高级玩家的欺负。" << endl;
        tempChar = getchar();

        clear_the_conversation(tempX, tempY);

        cout << "\t狗蛋儿(Lv." << protagonist.showLevel() << "): 呵呵" << endl;
        tempChar = getchar();

        clear_the_conversation(tempX, tempY);

        cout << "【突然一把飞剑射中了" << npc1Name << "," << npc1Name << "瞬间挂掉，接着传来一阵奸笑声.....】"  << endl;
        tempChar = getchar();
        cout << "\t" << npc2Name << "(Lv." << npc2Lv << "):" << endl;
        cout << "\t\t饿哈哈哈~保护大家？就凭你这小妮子？" << endl;
        tempChar = getchar();

        clear_the_conversation(tempX, tempY);

        cout << "【只见一团黑风挂过，一只巨大无比的怪物出现】" << endl;
        tempChar = getchar();
        cout << "\t狗蛋儿(Lv." << protagonist.showLevel() << "): " << endl;
        cout << "\t\t.....这么快就打boss啦，什么鬼？！即然这样，就让我像一个男人一样战斗吧！（唉，我为什么要说像个男人？）" ;
        tempChar = getchar();

        //clear_the_conversation(tempX, tempY);
        SetConsoleTextAttribute(hConsole_freshVillage,10);
        cout << "[1.攻击]\t[2.逃跑]\t[3.投降]\t[4.认贼作父]\n";
        cout << "请选择______";
        int tempChoose;
        cin >> tempChoose;
        if (tempChoose == 1){
            int judge_live = 1;
            Monster_1 monster_1;
            monster_1.getMessage();
            Fight <Monster_1> fight;
            fight.fighting(monster_1, judge_live);
            if (judge_live == 0){
                conversation_with_npc1_npc2();
            }
        }
        if (tempChoose == 2){
            cout << "[系统消息]恭喜你狗蛋，成功逃跑！您真是跑得比兔子还快啊！" << endl;
            cout << "[系统消息]狗蛋，由于您选择了逃跑，" << npc2Name << "占领了新手村，你逃出了这个村子。" << endl;
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
        if (tempChoose == 4){
            cout << "[系统消息]狗蛋，请输入“爸爸”以确认您和" << npc2Name << "的父子关系." << endl;
            string name_baba;
            while (true){
                cin >> name_baba;
                if (name_baba == "爸爸"){
                    cout << "【" << "恭喜你，狗蛋，成功成为" << npc2Name <<"的儿子，实现了他多年的夙愿,以致" << npc2Name << "泪流不止,脱水而亡。】" << endl;
                    Sleep(500);
                    cout << "[系统消息]恭喜你通过了考验！" << endl;
                    break;
                }
                else{
                    cout << "[系统消息]我觉得你输的不行,请重新输入：" << endl;
                }
            }

        }


    }
    void printInfo(){
      //  cout << npc1Name << endl;
      //  cout << npc1Lv << endl;
    }
    void getMessage(){
        //freshVillage_state = 1;
        ifstream file;
        file.open("npc1.txt", ios_base :: in);
        if (file){
            file >> npc1Name;
            file >> npc1Lv;
        }
        file.close();
        file.open("npc2.txt", ios_base :: in);
        if (file){
            file >> npc2Name;
            file >> npc2Lv;
        }
        file.close();
    }
private:
    string npc1Name;
    int npc1Lv;
    string npc2Name;
    int npc2Lv;

    //int freshVillage_state;//1.开放，2.被占领
};


