#pragma once
#include <bits/stdc++.h>
#include "Monster.h"
#include "Monster_5.h"
using namespace std;

HANDLE  hConsole_secondBuilding;

class secondBuilding : public Place {
public:
    void topicWords(){
        SetConsoleTextAttribute(hConsole_secondBuilding,2);
        cout << "~~~~~~~~~~~~~~~~~~~~【守\t卫\t者\t二\t号\t楼】~~~~~~~~~~~~~~~~~~~~~~~~~~" <<endl;
        cout << "这里终年不见阳光，厚重的阴云始终笼罩着高耸的城墙，令人压抑的气息使得人喘不过气来。" << endl;
        cout << "这里曾是最重要的军事要塞，但现如今在此驻扎的兵力令人羞愧。你进入到城里，士兵看你的眼神有点怪异" << endl;
        getchar();
        cout << "\t你想去哪：" << endl;
        cout << "【1.城主府】【2.药店】【3.随便逛逛】" << endl;
        int choose;
        cin >> choose;
        cout << "【系统消息】恭喜你，迷路了！" << endl;
        getchar();
        cout << "你迷路了一天，饥寒交迫，这时你听见有人交谈,你..." << endl;
        cout << "【1.凑上去】【2.凑上去】【3.凑上去】【4.溜了溜了】" << endl;
        int choose2;
        cin >> choose2;
        cout << "好的，你凑了上去。" << endl;
        getchar();
        cout << "\t???(Lv.??):" << endl;
        cout << "\t\t“……时机…………带……靠……魔族………国……”" << endl;
        getchar();
        cout << "\t\t“叽叽喳喳叽叽喳喳……”" << endl;
        getchar();
        cout << "然后你跳出去把那几个人宰了.还捡到张地图。" << endl;
    }
    bool is_first_come = true;
    void conversation_with_npc(){
        topicWords();
        if(is_first_come == true){
                getchar();
            cout << "次日，城中并没有通缉凶手的消息出现……" << endl;
            getchar();
            //cout << "\t你想去哪：" << endl;
            //cout << "【1.随便逛逛】【2.兵营】【3.城主府】" << endl;
            int option1;
            while (true){
                bool jump = true;
                cout << "\t你想去哪：" << endl;
                cout << "【1.随便逛逛】【2.兵营】【3.城主府】" << endl;
                cin >> option1;
                if(option1 != 1 && option1 != 2 && option1 != 3){
                    cout << "别搞事好好输" << endl;
                }
                if(option1 == 1){
                    cout << "人民脸上透露着掩藏不住的忧虑" << endl;
                }
                if(option1 == 2){
                    cout << "正在打点行囊的士兵们动作轻快，少许士兵露出犹豫的神情……" << endl;
                    getchar();
                    cout << "\t士兵(Lv.?):" << endl;
                    cout << "\t\t“城主说国王下令让我们回守都城。”" << endl;
                }
                if(option1 == 3){

                    cout << "城主正眺望窗外……" << endl;
                    cout << "【1.交谈】【2.嘲讽】【3.接取任务】" << endl;
                    while(true){
                        int option2;
                        cin >> option2;
                        if(option2 != 1 && option2 != 2 && option2 != 3){
                            cout << "别搞事好好输" << endl;
                        }
                        if(option2 == 1){
                            cout << "\t城主(Lv.???):" << endl;
                            cout << "\t\t可惜君命难违，否则我定要与此城共存亡。" << endl;
                        }
                        if(option2 == 2){
                            cout << "\t狗蛋儿(Lv." << protagonist.showLevel() << "):" << endl;
                            cout << "\t\t“求求你别鸡儿秀了，谁让你走得你心里没点B数吗.”" << endl;
                            getchar();
                            cout << "\t城主(Lv.???):" << endl;
                            cout << "\t\t“小友此言何意，我难道会伪传君命不成？”" << endl;
                            getchar();
                            bool is_first_come3 = true;
                            while(true){
                                cout << "【1.寻找证据】【2.杀了他】" << endl;
                                int option3;
                                cin >> option3;
                                if(option3 != 1 && option3 != 2)
                                {
                                    cout << "别搞事好好输" << endl;
                                }
                                if(option3 == 1 && is_first_come3 == true){
                                    cout << "你转身想走，突然身后一阵寒风袭来，你凭借身上的几点敏捷躲过了城主耿直的一击。" << endl;
                                    is_first_come3 = false;
                                }
                                if(option3 == 1 && is_first_come3 == false){
                                    cout << "【系统消息】还选这个没死过吗小伙子？" << endl;
                                }
                                if(option3 == 2 && is_first_come3 == true){
                                    cout << "\t狗蛋儿(Lv." << protagonist.showLevel() << "):" << endl;
                                    cout << "\t\t“不想和你多BB好吧，吃我这一钉ter”" << endl;
                                    getchar();
                                    cout << "【系统消息】击杀了城主(Lv.???),获得经验+50。" << endl;//加上经验
                                    protagonist.experienceAmount_plus(50);
                                    cout << "【系统消息】获得成就：我想杀你你莫法" << endl;
                                    cout << "【系统消息】由于没有证据，你未能获得金钱奖励，并且仓皇逃出城市。" << endl;//让他回到前往界面
                                    break;
                                }
                                if(option3 == 2 && is_first_come3 == false){
                                    cout << "\t狗蛋儿(Lv." << protagonist.showLevel() << "):" << endl;
                                    cout << "\t\t“狗官看着稳得一批，心里慌得一笔，吃我一钉ter”" << endl;
                                    cout << "【系统消息】击杀了城主(Lv.???),获得经验+50,金币+200。" << endl;//加上获得的东西
                                    packsack.possession_plus(200);
                                    protagonist.experienceAmount_plus(50);
                                    cout << "【系统消息】获得成就：狗官噩梦" << endl;//加上获得的东西
                                    break;
                                }
                            }
                            break;
                        }
                        if(option2 == 3){
                            cout << "\t城主(Lv.???):" << endl;
                            cout << "\t\t“军队即将回守都城，我们走后留守此地的士兵恐怕抵挡不住城外魔物的侵袭，还望小友出手清理城外的畜生。”" << endl;
                            getchar();
                            cout << "【系统消息】接取任务：打扫卫生。" << endl;
                            cout << "【系统消息】任务奖励：经验X50，金币X200." << endl;
                            int judge_live = 1;
                            Monster_5 monster_5;
                            monster_5.getMessage();
                            Fight <Monster_5> fight;
                            fight.fighting(monster_5, judge_live);
                            if (judge_live == 0){
                                fresh_village.conversation_with_npc1_npc2();
                            }
                            getchar();
                            cout << "你与魔物的战斗击碎了地面，露出了一只开始腐烂的脚。" << endl;
                            int option4;
                            while(true){
                                cout << "【1.挖出来】【2.重新埋好】" << endl;
                                cin >> option4;
                                if(option4 != 1 && option4 != 2){
                                    cout << "别搞事好好输" << endl;
                                }
                                if(option4 == 1){
                                    cout << "从这具尸体的衣着来看似乎是皇家的信使，脖子上的刀痕相当瞩目。" << endl;
                                    cout << "尸体手里紧握的羊皮上写着：人在城在，城毁人亡" << endl;
                                    getchar();
                                    cout << "你重新安葬了他。" << endl;
                                    getchar();
                                    break;
                                }
                                if(option4 == 2){
                                    cout << "【系统消息】这么没好奇心吗小伙子？" << endl;
                                }
                            }
                            cout << "你回到城主府。" << endl;
                            cout << "\t城主(Lv.???):" << endl;
                            cout << "\t\t“感谢你，小友。这是给你的奖励。”" << endl;
                            cout << "【系统消息】获得奖励：经验+50，金币+200." << endl;//加上获得的东西
                            protagonist.experienceAmount_plus(50);
                            packsack.possession_plus(200);
                            getchar();
                            cout << "\t狗蛋儿(Lv." << protagonist.showLevel() << "):" << endl;
                            cout << "\t\t“你说国王让你回守都城，谁让你走得你心里没点B数吗？”" << endl;
                            getchar();
                            cout << "\t城主(Lv.???):" << endl;
                            cout << "\t\t“小友此言何意，我难道会伪传君命不成？”" << endl;
                            getchar();
                            bool is_first_come4 = true;
                            while(true){
                                cout << "【1.不杀他】【2.杀了他】" << endl;
                                int option5;
                                cin >> option5;
                                if(option5 != 1 && option5 != 2){
                                    cout << "别搞事好好输" << endl;
                                }
                                if(option5 == 1 && is_first_come4 == true){
                                    cout << "你转身想走，突然身后一阵寒风袭来，你凭借身上的几点敏捷躲过了城主耿直的一击。" << endl;
                                    is_first_come4 = false;
                                }
                                if(option5 == 1 && is_first_come4 == false){
                                    cout << "你依旧没有杀他，留下一句好自为之后离开了城市。" << endl;//f返回主界面
                                    cout << "【系统消息】狗官依旧带兵叛逃，投靠魔族后便销声匿迹，魔族实力更加壮大，人类岌岌可危。" << endl;
                                    getchar();
                                    cout << "【系统消息】获得成就：事不关己高高挂起" << endl;//加上获得的东西
                                    break;
                                }
                                if(option5 == 2){
                                    cout << "你刚想出手，突然身旁一阵寒风袭来，你凭借身上的几点敏捷躲过了城主阴险的一击。" << endl;
                                    getchar();
                                    cout << "\t狗蛋儿(Lv." << protagonist.showLevel() << "):" << endl;
                                    cout << "\t\t“狗官，吃我一拳”" << endl;
                                    getchar();
                                    cout << "【系统消息】击杀了城主(Lv.???),获得经验X50,金币X200。" << endl;//加上获得的东西
                                    protagonist.experienceAmount_plus(50);
                                    packsack.possession_plus(200);
                                    cout << "【系统消息】获得成就：狗官噩梦" << endl;//加上获得的东西
                                    getchar();
                                    break;
                                }
                            }
                            break;
                        }

                    }
                    jump = false;
                }
                if(jump == false)
                    break;
            }
            is_first_come = false;
            //返回主界面
        }
        if(is_first_come == false){
            int option6;
            while(true){
                cout << "\t你想去哪：" << endl;
                cout << "【1.随便逛逛】【2.兵营】【3.城主府】【4.打扰了】" << endl;
                cin >> option6;
                int tempX3, tempY3;
                getxy(tempX3, tempY3);
                if(option6 != 1 && option6 != 2 && option6 != 3 && option6 != 4){
                    cout << "别搞事好好输" << endl;
                    clear_the_conversation(tempX3, tempY3);
                }
                if(option6 == 1){
                    cout << "百姓脸上愁容更甚。" << endl;
                    clear_the_conversation(tempX3, tempY3);
                }
                if(option6 == 2){
                    cout << "自愿留守的战士们散发着坚定的光辉。" << endl;
                    clear_the_conversation(tempX3, tempY3);

                }
                if(option6 == 3){
                    cout << "城主府空无一人" << endl;
                    clear_the_conversation(tempX3, tempY3);
                }
                if(option6 == 4)
                    break;
            }
            //返回主界面

        }
    }
};







