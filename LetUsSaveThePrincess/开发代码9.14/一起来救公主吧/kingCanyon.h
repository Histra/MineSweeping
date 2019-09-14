#pragma once
#include "Monster.h"
#include "Monster_2.h"
HANDLE  hConsole_kingCanyon;
class kingCanyon : public Place{
public:
    kingCanyon(){
        getMessage();
    }
    void conversation_with_npc(){
        hConsole_kingCanyon = GetStdHandle(STD_OUTPUT_HANDLE);//字体颜色
        SetConsoleTextAttribute(hConsole_kingCanyon,2);
        cout<< "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~【农\t药\t峡\t谷】~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" <<endl;
        int tempX, tempY;
        getxy(tempX, tempY);

        SetConsoleTextAttribute(hConsole_kingCanyon,11);
        //Sleep(1000);
        cout << "\t" << npc1Name << "(Lv." << npc1Lv << "):" << endl;
        cout << "\t\t羁绊是什么意思呢?（自言自语中）" << endl;
        char tempChar;
        getchar();
        tempChar = getchar();
        cout << "\t狗蛋儿(Lv." << protagonist.showLevel() << "):" << endl;
        cout << "\t\t小......小姐 ，这样不好吧（听成了生殖器官的狗蛋）" << endl;
        tempChar = getchar();
        clear_the_conversation(tempX, tempY);
        cout << "\t" << npc1Name << "(Lv." << npc1Lv  << "):" << endl;
        cout <<"\t\t呵呵（银铃般的笑声），远道而来的客人，要来和妲己玩耍么"<<endl;
        tempChar = getchar();
        cout << "\t狗蛋儿(Lv." << protagonist.showLevel() << "):" << endl;
        cout << "\t\t （一脸猪哥样）好啊好啊" << endl;
        tempChar = getchar();
        clear_the_conversation(tempX, tempY);
        cout << "\t" << npc1Name << "(Lv." << npc1Lv  << "):" << endl;
        cout << "\t\t可是和我玩耍的人必须是脚踏七彩祥云的盖世英雄，你愿意接受妲己的考验么?" <<endl;
        tempChar = getchar();
        cout << "\t狗蛋儿(Lv." << protagonist.showLevel() << "): " << endl;
        cout << "\t\t这......这（有点犹豫）" ;
        tempChar = getchar();
        clear_the_conversation(tempX, tempY);
        cout << "\t" << npc1Name << "(Lv." << npc1Lv  << "):" << endl;
        cout << "\t\t如果通过了英雄的考验，妲己会给予你一样宝物呦" <<endl;
        cout << "[系统消息]叮，完成任务可获得；"<<endl;
        cout << "\t宠物：光精灵";
        cout << "\t称号：带妹勇者"<<endl;
        tempChar = getchar();
        cout << "\t狗蛋儿(Lv." << protagonist.showLevel() << "): " << endl;
        cout << "\t\t（一听到有如此丰厚的奖励，毫无犹豫的答应下来）no problem" ;
        tempChar = getchar();
        clear_the_conversation(tempX, tempY);
        cout << "\t" << npc1Name << "(Lv." << npc1Lv << "):" << endl;
        cout <<"\t\t客人，去通过那无数英雄的陨落地---农药峡谷吧" <<endl;
        tempChar = getchar();
        cout << "\t狗蛋儿(Lv." << protagonist.showLevel() << "): " << endl;
        cout << "\t\t（小心翼翼地迈入峡谷之中，不知道前方有多危险，能让妲己作为考验）" ;
        tempChar = getchar();
        SetConsoleTextAttribute(hConsole_kingCanyon,10);
        cout << "[1.攻击]\n";
        cout << "请选择______";
        int tempChoose;
        cin >> tempChoose;
        if (tempChoose == 1){
            int judge_live = 1;
            Monster_2 monster_2;
            monster_2.getMessage();
            Fight <Monster_2> fight;
            fight.fighting(monster_2, judge_live);
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
        cout << "\t" << npc1Name << "(Lv." << npc1Lv  << "):" << endl;
        cout <<"\t\t客人，我果然没有看错你，来陪妲己玩耍吧"<<endl;
        cout <<"[系统消息]恭喜您获得:最弱buff ： 普通攻击 + 1"<<endl;
        protagonist.strength_plus(1);
       // protagonist.add_achievement("带妹勇者");
        cout << "[系统消息]（开发者觉得你有点儿可怜）获得经验+60， 金币+250" << endl;
        protagonist.experienceAmount_plus(60);
        packsack.possession_plus(250);
        getchar();
    }
    void getMessage(){
        //freshVillage_state = 1;
        ifstream file;
        file.open("kingCanyon_npc3.txt", ios_base :: in);
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
