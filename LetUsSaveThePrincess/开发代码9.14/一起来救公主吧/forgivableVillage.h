#pragma once
#include <bits/stdc++.h>
#include "Monster.h"
#include "Monster_5.h"
#include "Monster_6.h"
#include "Monster_7.h"

using namespace std;
freshVillage fresh_village;
HANDLE  hConsole_forgivableVillage;
int tempX, tempY;
int tempX1, tempY1;
class forgivableVillage : public Place{
public:
    forgivableVillage(){
        getMessage();
        is_first_come = true;
        is_first_come2 = true;
    }
    //bool judge = true;
    void topicWords(){
        SetConsoleTextAttribute(hConsole_forgivableVillage,2);
        cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~【原\t谅\t村】~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" <<endl;
        cout << "你来到了一个绿意盎然的村子。在这里，太阳绿色的光辉跟村民头上的圣光交相辉映，小绿帽公益随处可见，真是个世外桃源...(?)" << endl;
        getchar();
    }
    void conversation_with_npc(){
        topicWords();
        conversation_with_npc1();
        //conversation_with_npc2();
    }
    void conversation_with_npc1(){//村长
        //bool jump = true;
        getxy(tempX, tempY);
        if(is_first_come){
            cout << "\t" << npc1Name << "(Lv." << npc1Lv << "):" << endl;
            cout << "\t\t欢迎来到原谅村，少年，找老朽所求何事？" << endl;
            getchar();
            while(true){
                getxy(tempX1, tempY1);
                cout << "【1.询问历史】 【2.接取任务】 【3.打扰了】" << endl;
                cout << "请选择___";
                int tempChoose;
                cin >> tempChoose;
                if(tempChoose == 1){
                    cout << "【系统消息】村长拒绝了你。" << endl;
                    getchar();getchar();
                    clear_the_conversation(tempX1, tempY1);
                    continue;
                }
                if(tempChoose == 2){//之后还要加判断是不是第一次来，不是第一次来的话身上有没有这个任务
                    cout << "\t" << npc1Name << "(Lv." << npc1Lv << "):" << endl;
                    cout << "\t\t少年来的正巧，前夜村外的妖兽袭击村子，抢去了村子一半的存粮，村民们惶惶不安。" << endl;
                    getchar();
                    cout << "\t\t老朽想请你解决那三头孽畜，把老朽戴了三十多年的小绿帽抢回来。" << endl;
                    getchar();
                    cout << "【系统消息】接取任务：夺回狗村长的绿帽" << endl;
                    cout << "【系统消息】任务奖励：经验+50，金币+150" << endl;
                    getchar();
                    cout << "【系统消息】村长把你扔到了村子外，准备战斗。" << endl;
                    getchar();//下面是战斗过程
                    clear_the_conversation(tempX, tempY);
                    cout << "%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%" << endl;
                    cout << "[系统消息]和第一只孽畜战斗吧！" << endl;
                    int judge_live_1 = 1;
                    Monster_5 monster_5;
                    monster_5.getMessage();
                    Fight <Monster_5> fight_5;
                    fight_5.fighting(monster_5, judge_live_1);
                    if (judge_live_1 == 0){
                        fresh_village.conversation_with_npc1_npc2();
                    }
                    system("CLS");
                    topicWords();
                    //clear_the_conversation(tempX, tempY);
                    cout << "%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%" << endl;
                    cout << "[系统消息]和第二只孽畜战斗吧！" << endl;
                    int judge_live_2 = 1;
                    Monster_6 monster_6;
                    monster_6.getMessage();
                    Fight <Monster_6> fight_6;
                    fight_6.fighting(monster_6, judge_live_2);
                    if (judge_live_2 == 0){
                        fresh_village.conversation_with_npc1_npc2();
                    }
                    system("CLS");
                    topicWords();
                    //clear_the_conversation(tempX, tempY);
                    cout << "%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%" << endl;
                    cout << "[系统消息]和第三只孽畜战斗吧！" << endl;
                    int judge_live_3 = 1;
                    Monster_7 monster_7;
                    monster_7.getMessage();
                    Fight <Monster_7> fight_7;
                    fight_7.fighting(monster_7, judge_live_3);
                    if (judge_live_3 == 0){
                        fresh_village.conversation_with_npc1_npc2();
                    }
                    system("CLS");
                    topicWords();
                    //clear_the_conversation(tempX, tempY);
                    if (judge_live_1 & judge_live_2 & judge_live_3){
                        cout << "【系统消息】获得任务物品：油光澄澄的绿帽." << endl;
                        getchar();
                        cout << "\t你回到村子将绿帽还给村长。" << endl;
                        cout << "\t" << npc1Name << "(Lv." << npc1Lv << "):" << endl;
                        cout << "\t\tNICE呀 马飞。感谢你，少年。" << endl;
                        getchar();
                        cout << "【系统消息】任务奖励：经验+50，金币+150" << endl;//加上获得的东西
                        protagonist.experienceAmount_plus(50);
                        packsack.possession_plus(150);
                        getchar();
                       // jump = false;
                        clear_the_conversation(tempX, tempY);
                        conversation_with_npc2();
                        is_first_come = false;
                        break;
                    }
                    else{
                        break;
                    }
                }
                if(tempChoose == 3){
                    cout << "\t" << npc1Name << "(Lv." << npc1Lv << "):" << endl;
                    cout << "\t\t“不行，你得帮我”" << endl;
                    getchar();getchar();
                    clear_the_conversation(tempX, tempY);

                }
                if(tempChoose != 1 && tempChoose != 2 && tempChoose != 3){
                    cout << "小伙子搞事情？？" << endl;
                    clear_the_conversation(tempX, tempY);
                }
            }
        }
        else{
             while(true){
                cout << "\t" << npc1Name << "(Lv." << npc1Lv << "):" << endl;
                cout << "\t\t欢迎回到原谅村，少年，找老朽所求何事？" << endl;
                getchar();
                while(true){
                cout << "【1.询问历史】 【2.接取任务】 【3.打扰了】" << endl;
                    int tempChoose;
                    cin >> tempChoose;
                    if(tempChoose == 1){
                        cout << "【系统消息】村长拒绝了你。" << endl;
                        getchar();
                        cout << "\t" << npc1Name << "(Lv." << npc1Lv << "):" << endl;
                        cout << "\t\t死心吧少年，我是不会说的。" << endl;

                        getchar();
                        clear_the_conversation(tempX, tempY);
                    }
                    if(tempChoose == 2){//之后还要加判断是不是第一次来，不是第一次来的话身上有没有这个任务
                        cout << "\t" << npc1Name << "(Lv." << npc1Lv << "):" << endl;
                        cout << "\t\t感谢你少年，老朽的绿帽回来了。" << endl;
                        getchar();
                        clear_the_conversation(tempX, tempY);
                    }
                    if(tempChoose == 3){
                        break;
                    }
                    if(tempChoose != 1 && tempChoose != 2 && tempChoose != 3){
                        cout << "小伙子搞事情？？" << endl;
                        clear_the_conversation(tempX, tempY);
                    }
                }
                break;
            }
        }
    }

    void conversation_with_npc2(){
        cout << "你刚想离去，听见村头传来哭声……" << endl;
        getchar();
        if(is_first_come2){
            cout << "\t" << npc2Name << "(Lv." << npc2Lv << "):" << endl;
            cout << "\t\t呜呜呜呜呜呜呜呜呜呜呜呜呜呜……" << endl;
            getchar();
            int tempChoose;
            while(true){
                cout << "【1.送他绿帽】 【2.捶他一顿】 【3.安慰小明】 【4.打扰了】" << endl;
                cin >> tempChoose;
                if(tempChoose == 1){
                    cout << "【系统消息】你没有这种东西。" << endl;
                    getchar();getchar();
                    clear_the_conversation(tempX, tempY);
                }
                if(tempChoose == 2){
                    cout << "\t" << npc2Name << "(Lv." << npc2Lv << "):" << endl;
                    cout << "\t\t哼，啊嚯戈。" << endl;
                    getchar();
                    cout << "【系统消息】你被小明锤了一顿。" << endl;
                    getchar();getchar();
                    clear_the_conversation(tempX, tempY);
                }
                if(tempChoose == 3){
                    int allnum = 4;
                    for(allnum = 4; allnum >= 0; allnum--){
                        for(int i = allnum; i >= 0; i--){
                            cout << "呜呜" ;
                        }

                        getchar();
                    }
                    cout << "\t\t你苟屁不通的开导，重新激起小明对生活的热情，督促着他全心全意投入到小绿帽公益事业中去。" << endl;
                    getchar();
                    cout << "\t" << npc2Name << "(Lv." << npc2Lv << "):" << endl;
                    cout << "\t\t******！" << endl;
                    getchar();
                    cout << "【系统消息】获得奖励宠物：绿毛虫（最大生命值+1%）" << endl;//加上获得的东西
                    //狗蛋属性加成
                    protagonist.max_hitPoints_plus(protagonist.show_max_hitPoints() / 100);

                    getchar();
                    cout << "【系统消息】获得成就：无限的可能？" << endl;//加上获得的东西
                    protagonist.add_achievement("无限的可能？");
                    getchar();
                    clear_the_conversation(tempX, tempY);
                    break;
                }
                if(tempChoose == 4){
                    break;
                }
            }
            is_first_come2 = false;
        }
        else{
            cout << "\t" << npc2Name << "(Lv." << npc2Lv << "):" << endl;
            cout << "\t\t嘿嘿嘿嘿哈哈哈哈哈……" << endl;
            int tempChoose;
            while(true){
                cout << "【1.送他绿帽】 【2.捶他一顿】 【3.打扰了】" << endl;
                cin >> tempChoose;
                if(tempChoose == 1){
                    cout << "【系统消息】你没有这种东西。" << endl;
                    getchar();
                    clear_the_conversation(tempX, tempY);
                }
                if(tempChoose == 2){
                    cout << "\t" << npc2Name << "(Lv." << npc2Lv << "):" << endl;
                    cout << "\t\t哼，啊嚯戈。" << endl;
                    getchar();
                    cout << "【系统消息】你被小明锤了一顿。" << endl;
                    getchar();
                    clear_the_conversation(tempX, tempY);
                }
                if(tempChoose == 3){
                    break;
                }
            }
        }

    }
    void getMessage(){
        ifstream file;
        file.open("forgivableVillage_npc1.txt", ios_base :: in);
        if (file){
            file >> npc1Name;
            file >> npc1Lv;
        }
        file.close();
        file.open("forgivableVillage_npc2.txt", ios_base :: in);
        if (file){
            file >> npc2Name;
            file >> npc2Lv;
        }
        file.close();
    }
private:
    bool is_first_come;
    bool is_first_come2;
    string npc1Name;
    int npc1Lv;
    string npc2Name;
    int npc2Lv;

};

