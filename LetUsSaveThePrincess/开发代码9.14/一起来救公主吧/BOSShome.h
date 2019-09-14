#pragma once
#include <bits/stdc++.h>
#include "Protagonist.h"
#include "Monster.h"
#include "Monster_7.h"
#include "Monster_9.h"
#include "Monster_10.h"
using namespace std;

HANDLE  hConsole_BOSShome;
class BOSShome : public Place{
public:
    BOSShome (){
        getMessage();
        is_first_come1 = true;
    }
    void topicWords(){
        cout << "~~~~~~~~~~~~~~~~~~~~【BOSS】~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
        cout << "\t\t你历经坎坷，终于来到了BOSS的家门口" << endl;
        getchar();
    }
    void conversation_with_npc(){
        topicWords();

        int tempX, tempY;
        int tempX1, tempY1;
        if(is_first_come1){
            getxy(tempX, tempY);
            cout << "\t" << npc1Name << "(LV." << npc1Lv << "):" << endl;
            cout << "\t\t没想到你能活着走到这里，但也无妨，杀你对我来说就像拿个快递一样简单" << endl;
            getchar();
            cout << "\t狗蛋(LV." << protagonist.showLevel() << "):"<<endl;
            cout << "\t\t那你开门啊狗贼" << endl;
            getchar();
            clear_the_conversation(tempX, tempY);
            cout << "\t" << npc1Name << "(LV." << npc1Lv << "):" << endl;
            cout << "\t\t桀桀桀……你先得问问我的小狗……" << endl;
            getchar();
            clear_the_conversation(tempX, tempY);
            cout << "%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%" << endl;
            cout << "[系统消息]战斗吧！" << endl;
            int judge_live_1 = 1;
            Monster_7 monster_7;
            monster_7.getMessage();
            Fight <Monster_7> fight_7;
            fight_7.fighting(monster_7, judge_live_1);
            if (judge_live_1 == 0){
                fresh_village.conversation_with_npc1_npc2();
            }
            //getchar();
            system("CLS");
            topicWords();
            //clear_the_conversation(tempX, tempY);
            cout << "\t" << npc1Name << "(LV." << npc1Lv << "):" << endl;
            cout << "\t\t小伙子搞得起，你再得问问我另一条小狗吧" << endl;
            getchar();
            cout << "\t狗蛋(LV." << protagonist.showLevel() << "):" <<endl;
            cout << "\t\t你敢不敢让我进门打恩？待客之道出了大问题吧你怕是" << endl;
            getchar();
            clear_the_conversation(tempX, tempY);
            cout << "%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%" << endl;
            cout << "[系统消息]战斗吧！" << endl;
            int judge_live_2 = 1;
           // Fight <Monster_7> fight_7;
            fight_7.fighting(monster_7, judge_live_2);
            if (judge_live_2 == 0){
                fresh_village.conversation_with_npc1_npc2();
            }
            //getchar();
            system("CLS");
            topicWords();
            //clear_the_conversation(tempX, tempY);
            cout << "\t" << npc1Name << "(LV." << npc1Lv << "):" << endl;
            cout << "\t\t不错嘛小伙子，那在让你进来之前，我给你讲个故事如何？" << endl;
            getchar();
            cout << "\t狗蛋(LV." << protagonist.showLevel() << "):"<<endl;
            cout << "\t\t讲个G2，搞快让我锤爆你把公主救出来走上人生巅峰事成之后五五分成你看如何" << endl;
            getchar();
            cout << "\t" << npc1Name << "(LV." << npc1Lv << "):" << endl;
            cout << "\t\t桀桀……满口骚话的勇者真不多见，多谢你配合我拖延时间，我的仪式完成了……进来变成小盒吧桀桀桀" << endl;
            getchar();
            cout << "\t狗蛋(LV." << protagonist.showLevel() << "):"<<endl;
            cout << "\t\t嗷！德玛西亚！" << endl;
            getchar();
            clear_the_conversation(tempX, tempY);
            getxy(tempX, tempY);
            cout << "城堡大门发出诡异的吱呀声，片刻后，门开了" << endl;
            cout << "\t[1.进去]\t[2.打扰了]\t[3.投降]" << endl;
            cout << "你选择___";
            getxy(tempX1,tempY1);
            int option1;
            int chooseNum = 0;
            int chooseNum2 = 0;
            while(true){
                cin >> option1;
                if(option1 == 1){
                    cout << "\t" << npc1Name << "(LV." << npc1Lv << "):" << endl;
                    cout << "\t\t桀桀桀……我的膜法会把你撕成碎片！" << endl;
                    getchar();
                    cout << "\t狗蛋(LV." << protagonist.showLevel() << "):"<<endl;
                    cout << "\t\t你瞅瞅你瞳孔都涣散了，我们人是死了之后才这样的跟你讲" << endl;
                    getchar();
                    clear_the_conversation(tempX1, tempY1);
                    cout << "%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%" << endl;
                    cout << "[系统消息]战斗吧！" << endl;
                    int judge_live_3 = 1;
                    Monster_9 monster_9;
                    monster_9.getMessage();
                    Fight <Monster_9> fight_9;
                    fight_9.fighting(monster_9, judge_live_3);
                    if (judge_live_3 == 0){
                        fresh_village.conversation_with_npc1_npc2();
                    }
                    getchar();
                    system("CLS");
                    topicWords();
                    //clear_the_conversation(tempX1, tempY1);
                    break;
                }
                if(option1 == 2){
                    cout << "都最后一关了还选这个选项想不想救人了" << endl;
                    getchar();getchar();

                    clear_the_conversation(tempX1, tempY1);
                    chooseNum += 1;
                    if(chooseNum >= 2){
                        clear_the_conversation(tempX, tempY);
                        break;

                    }

                }
                if(option1 == 3){
                    cout << "讲真，不要点进来第二次，最后一关是相当危险的" << endl;
                    getchar();
                    clear_the_conversation(tempX1, tempY1);
                    chooseNum2 += 1;
                    if(chooseNum >= 2){
                        clear_the_conversation(tempX, tempY);
                        break;
                    }

                }
            }
            cout << "\t" << npc1Name << "(LV." << npc1Lv << "):" << endl;
            cout << "\t\t你……竟敢……！桀桀桀……也罢……去救“公主”吧……桀桀桀桀桀桀" << endl;
            getchar();
            cout << "\t狗蛋(LV." << protagonist.showLevel() << "):" <<endl;
            cout << "\t\t这么弱的皮皮锤的王国头皮发麻真的可怕" << endl;
            cout << "\t\t话说公主在哪咧" << endl;
            is_first_come1 = false;
            getchar();
        }
        else{
            cout << "家里没人……" << endl;
        }

        system("CLS");
        topicWords();
        int tempX2, tempY2;
        getxy(tempX2, tempY2);
        cout << "[阴森的寒气继续漫延着，侵蚀着，让狗蛋儿喘不过气来]" << endl;
        getchar();
        cout << "\t狗蛋儿(LV." << protagonist.showLevel() << "): " << endl;
        cout << "\t\t美丽的公主啊！请睁开你的眼睛吧！" << endl;
        getchar();
        clear_the_conversation(tempX2, tempY2);

        cout << "[弥漫着的寒气旋即闪着紫黑色的光芒，并迅速窜进公主的体内]" << endl;
        getchar();
        cout << "\t" << princess_name << "(LV." << princess_lv << "):" << endl;
        cout << "\t\t迷茫的勇士，这个世界已经脱节了，这是一个被诅咒的因果啊！而我竟是为了纠正它而生的！" << endl;
        getchar();
        clear_the_conversation(tempX2, tempY2);

        cout << "\t狗蛋儿(LV." << protagonist.showLevel() << "): " << endl;
        cout << "\t\t公主，你醒了？我终于..." << endl;
        getchar();
        cout << "\t" << princess_name << "(LV." << princess_lv << "):" << endl;
        cout << "\t\t曾经我向往着魔能与人愉快地相处，但今天我确实清醒了。" << endl;
        getchar();
        clear_the_conversation(tempX2, tempY2);

        cout << "\t" << princess_name << "(LV." << princess_lv << "):" << endl;
        cout << "\t\t人类是一种低级的存在，依靠远始之战遗留下的圣物苟延残喘至今。" << endl;
        getchar();
        cout << "\t" << princess_name << "(LV." << princess_lv << "):" << endl;
        cout << "\t\t而魔，应是最为美丽，最为优雅的物种。愚昧的人类一直占据着这块大陆，破坏着环境，也该灭亡了！" << endl;
        getchar();
        clear_the_conversation(tempX2, tempY2);

        cout << "\t狗蛋儿(LV." << protagonist.showLevel() << "): " << endl;
        cout << "\t\t你不是公主，你是谁？魔女应该已经被打败了呀！这是怎么回事？" << endl;
        getchar();
        cout << "\t" << princess_name << "(LV." << princess_lv << "):" << endl;
        cout << "\t\t无知的人类啊！我正是神圣王国的公主，我正是要毁灭人类！" << endl;
        getchar();
        clear_the_conversation(tempX2, tempY2);

        cout << "\t" << princess_name << "(LV." << princess_lv << "):" << endl;
        cout << "\t\t可悲的魔女，目光短浅，空有如此力量，却在想着别人的美貌而活。如今她的力量已被我窃取！" << endl;
        getchar();
        cout << "\t" << princess_name << "(LV." << princess_lv << "):" << endl;
        cout << "\t\t我要该变这自远始之战以来一直不变的顽固世界。世界是属于更为高位的魔族的！" << endl;
        getchar();
        clear_the_conversation(tempX2, tempY2);

        cout << "\t狗蛋儿(LV." << protagonist.showLevel() << "): " << endl;
        cout << "\t\t罪恶的行为总有一天会被发现，虽然地上所有的泥土把它们掩埋！" << endl;
        getchar();
        cout << "\t狗蛋儿(LV." << protagonist.showLevel() << "): " << endl;
        cout << "\t\t有时候选择也会改变你的内心。" << endl;
        getchar();
        clear_the_conversation(tempX2, tempY2);

        cout << "1.我选择拯救   2.我选择逃避   3.我选择战斗" << endl;
        cout << "请选择_______";
        getxy(tempX2, tempY2);
        int choose;
        cin >> choose;
        while (true){
             if (choose == 3){
                    system("CLS");
                    cout << "【系统消息】warnning warnning!" << endl;
                    cout << "\t最终BOSS还有五秒到达战场！" << endl;
                    Sleep(2500);
                    cout << "\tBOSS等了2.5秒后迫不及待地自行出场了..." << endl;
                    cout << "\t" << princess_name << "(Lv." << princess_lv << "):" << endl;
                    cout << "\t\t" << "enmmmm, 我们好像在哪见过~" << endl;
                    getchar();
                    cout << "\t狗蛋儿(Lv." << protagonist.showLevel() << "):" << endl;
                    cout << "\t\t你他喵的在逗我~~(狗蛋大义凛然的说）逃出这个世界，我只能手刃你了！！" << endl;
                    getchar();
                    cout << "【系统消息】狗蛋儿触发关键词：大义凛然。获得生命值加成999999" << endl;
                    protagonist.max_hitPoints_plus(999999);
                    protagonist.current_hitPoints_plus(999999);
                    int judge_live_1 = 10;
                    Monster_10 monster_10;
                    monster_10.getMessage();
                    Fight <Monster_10> fight_10;
                    fight_10.fighting(monster_10, judge_live_1);

                    break;

             }
             if (choose == 2){
                    cout << "[系统消息]逃避有个毛用！" << endl;
                    cout << "[系统消息]恭喜您，获得成就：怂的一B" << endl;
                    getchar();
                    getchar();
                    clear_the_conversation(tempX2, tempY2);
                    //没break语句，跳不出循环

             }
             if (choose == 1){
                    cout << "\t" << princess_name << "(LV." << princess_lv << "):" << endl;
                    cout << "\t\t看不上！" << endl;
                    getchar();
                    cout << "\t公主说完，对狗蛋儿发出致命一击，造成99999999点伤害" << endl;
                    getchar();
                    cout << "\t狗蛋儿以为自己gg了..." << endl;
                    if (protagonist.check_have()){
                        cout << "\t狗蛋儿身体里的裂空座发出翡翠般耀眼的光芒" << endl;
                        getchar();
                        cout << "裂空座祛除了魔女的灵魂，公主恢复了正常" << endl;
                        getchar();
                        cout << "公主和狗蛋儿幸福的生活在了一起~~" << endl;
                        cout << "【The end】" << endl;
                        getchar();
                        exit(0);
                    }
                    else{
                        cout << "\t其实狗蛋儿真的gg了" << endl;
                        getchar();
                        cout << "不到一周的时间，王国便被魔族攻陷，人族陷入了更大的危机..." << endl;
                        getchar();
                        cout << "\t【敬请期待《一起来救公主吧2》】" << endl;
                        cout << "\t\t【gg...】" << endl;
                        getchar();
                        exit(0);

                    }
                    clear_the_conversation(tempX2, tempY2);

             }
             if (choose >= 4){
                    cout << "[系统消息]是不是撒？有这个选项吗？" << endl;
                    cout << "[系统消息]恭喜您，获得成就：自作聪明" << endl; //成就可以在文本文件里添加
                    getchar();
                    getchar();
                    clear_the_conversation(tempX2, tempY2);
             }


        }
    }
    void getMessage(){
        ifstream file;
		file.open("BOSShome_npc.txt", ios_base::in);
		if (file) {
            file >> npc1Name;
            file >> npc1Lv;
			file >> princess_name;
			file >> princess_lv;
		}
		file.close();
    }
private:
    bool is_first_come1;
    string npc1Name;
    int npc1Lv;
    string princess_name;
    int princess_lv;
};
