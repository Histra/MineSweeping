#pragma once
#include <bits/stdc++.h>
#include "Protagonist.h"
#include "Monster.h"
#include "Monster_6.h"
using namespace std;



HANDLE  hConsole_depthOfFlowers;
Protagonist protagonist_depthOfFlowers;
class depthOfFlowers : public Place{
public:
    depthOfFlowers(){
        is_first_come = true;
    }
    void TopicWords(){
        SetConsoleTextAttribute(hConsole_depthOfFlowers,2);
        cout << "~~~~~~~~~~~~~~~~~~~~【百\t花\t♂\t深\t处】~~~~~~~~~~~~~~~~~~~~~~~~~~" <<endl;
        cout << "你来到了一个山谷，其间百种菊花遍地开放，清新的菊花香气将你围绕。谷中的小城里俊男萌♂妹多如彘犬。显然这里是个不需要计划生育的地方" << endl;
        cout << "谷外的阵法将山谷护在其中，符文在阵中流转，氤氲光雾升腾而起，似乎可以抵挡魔军的进攻。一条长河从谷底延伸到远处……" << endl;
    }
    void conversation_with_npc(){
        int tempX, tempY;
        int tempX1, tempY1;
        TopicWords();
        getxy(tempX, tempY);
        if(is_first_come){
            cout << "你走进城中，发现城中鞭炮齐鸣，锣鼓喧天。似乎在办什么红事。围观人群的行动如老年人一样迟缓？" << endl;
            cout << "\t" << "???" << "(Lv." << "???" << "):" << endl;
            cout << "\t\t囡囡呀……囡囡…………" << endl;
            getchar();
            cout << "你想：【1.去看看】\t【2.并不感兴趣】" << endl;
            cout << "请选择___";
            int option1;
            cin >> option1;
            if(option1 == 1){
                cout << "你离开围观的人群，来到一个小巷子中。哭声从一所简陋的小屋中传出……" << endl;
                getchar();
                clear_the_conversation(tempX, tempY);
                cout << "\t【1.推门进去】\t【2.转身离去】" << endl;
                cout << "请选择___";
                int option2;
                cin >> option2;
                if(option2 == 1){
                    cout << "门并没有锁，屋内家具被厚厚灰尘覆盖了，好像这个屋子有几年没有住人了。" << endl;
                    getchar();
                    cout << "哭声从最深处的门内传来……" << endl;
                    getchar();
                    cout << "你来到门前，门缓缓的开了，腐朽的气味夹杂一股截然不同的清新气味扑面而来……你昏了过去。" << endl;
                    getchar();getchar();
                    cout << "周围一阵摇晃。你醒了过来。浑身无力。" << endl;
                    getchar();
                    cout << "你在一个红色的长方体空间里，两侧有各有一片窗帘，却没有门……" << endl;
                    getchar();
                    cout << "从窗帘看出去，你在红轿子中。围观人群的衣着与之前无异，面容却苍老了几十岁。" << endl;
                    getchar();
                    cout << "远处有一个祭坛一样的建筑，上面几个身着黑色衣服的人在进行什么仪式。手上的盘子盛放着几颗人头……" << endl;
                    getchar();
                    cout << "不知过了多久，轿子停了。一阵眩晕后，你站在了木地板上，周围并没有什么轿子的踪影……" << endl;
                    cout << "环顾周围，你发现你在一艘浅黑色的船上……" << endl;
                    getchar();
                    clear_the_conversation(tempX, tempY);
                    int option3;
                    while(true){
                        cout << "你想【1.待在原地】\t【2.在甲板上看看】\t【3.去船下层看看】" << endl;
                        getxy(tempX1, tempY1);
                        cin >> option3;
                        if(option3 == 1){
                            cout << "风儿吹得你瑟瑟发抖。" << endl;
                            getchar();
                            clear_the_conversation(tempX1, tempY1);
                        }
                        if(option3 == 2){
                            cout << "甲板上空无一人，即使船上的灯都亮着，你依旧感觉不到一丝活物的气息……" << endl;
                            getchar();
                            clear_the_conversation(tempX1, tempY1);
                        }
                        if(option3 == 3){
                            cout << "你在不远处找到了向下走的楼梯，越往下走，楼梯的颜色慢慢变浅……" << endl;
                            cout << "下楼后，地板墙壁的颜色完全变成了暗红色……血腥味升腾而起。" << endl;
                            cout << "你强压下心中的恐惧……" << endl;
                            getchar();
                            clear_the_conversation(tempX1, tempY1);
                            break;
                        }
                    }
                    cout << "你开始探索每一扇门，然而门后出了斑驳的血迹之外再无他物。" << endl;
                    getchar();
                    clear_the_conversation(tempX, tempY);
                    cout << "你来到最后一扇门前，【1.打开】【2.回到甲板上】" << endl;
                    cout << "你想___";
                    int option4;
                    cin >> option4;
                    if(option4 == 1){
                        cout << "这间屋子要干净许多，一个青色的身影盘坐在屋子中间，听到开门声，他回头看了你一眼。" << endl;
                        getchar();
                        cout << "\t林长生(Lv.10):" << endl;
                        cout << "\t\t找地方坐吧，这艘船是不会停的，你的寿命在这也不会流逝。" << endl;
                        getchar();
                        clear_the_conversation(tempX, tempY);
                        int option5;
                        while(true){
                            getxy(tempX1, tempY1);
                            cout << "\t【1.关于城中的人】\t【2.关于房间里的血迹】\t【3.回到甲板】" << endl;
                            cout << "你选择___";

                            cin >> option5;
                            if(option5 == 1){
                                cout << "\t狗蛋(Lv."  << protagonist.showLevel() << "):" << endl;//读进去等级
                                cout << "\t\t我是怎么上的轿子？城中的人为什么会突然变老？我又为什么会来到这艘船上？到底发生了什么？？？" << endl;
                                cout << "\t林长生(Lv.10):" << endl;
                                cout << "\t\t等等！你说可以你能看到城里的人变老了？此话当真？" << endl;
                                getchar();

                                cout << "\t狗蛋(Lv."  << protagonist.showLevel() << "):" << endl;
                                cout << "\t\t废话！我有毒编出这种问题？我问你还是你问我？这到底是怎么回事？GNMD老子现在很怕 你可能体会到？" << endl;
                                cout << "\t林长生(Lv.10):" << endl;
                                cout << "\t\t天不绝我人族，我等了十几年，终于等到了……" << endl;
                                getchar();
                                cout << "\t狗蛋(Lv."  << protagonist.showLevel() << "):" << endl;
                                cout << "\t\t好的好的同喜同喜麻烦你TM迪回答问题好吗求你了" << endl;
                                cout << "\t林长生(Lv.10):" << endl;
                                cout << "\t\t她现在听不到你，见到她的时候一定要不惜一切代价杀了她，化形末期的她是最虚弱的。" << endl;
                                getchar();
                                cout << "\t狗蛋(Lv."  << protagonist.showLevel() << "):" << endl;
                                cout << "\t\t真是谢谢你告诉我这些老子现在问题更多了替我向你祖宗八辈问好行吗？" << endl;
                                getchar();
                                clear_the_conversation(tempX1, tempY1);
                            }
                            if(option5 == 2){
                                cout << "\t狗蛋(Lv."  << protagonist.showLevel() << "):" << endl;
                                cout << "\t\t你说上船的人下不去也死不了，那船上怎么一个人也没有，血迹又是哪来的？？？" << endl;
                                cout << "\t林长生(Lv.10):" << endl;
                                cout << "\t\t你只有在那个地方跳下船才有一线生机，在这之前，只能祈祷那些人不要来……" << endl;
                                getchar();
                                cout << "\t狗蛋(Lv."  << protagonist.showLevel() << "):" << endl;
                                cout << "\t\t这个问题就当你回答了吧……你回答问题的方式真是欠吃刀子。" << endl;
                                getchar();
                                clear_the_conversation(tempX1, tempY1);
                            }
                            if(option5 == 3){
                                cout << "\t狗蛋(Lv."  << protagonist.showLevel() << "):" << endl;
                                cout << "\t\t我还是回甲板上等着跳河吧白白了您内~到地方了你吼一嗓我一猛子就扎下去了嘛" << endl;
                                cout << "\t林长生(Lv.10):" << endl;
                                cout << "\t\t等等……" << endl;
                                getchar();
                                cout << "\t狗蛋(Lv."  << protagonist.showLevel() << "):" << endl;
                                cout << "\t\t????" << endl;
                                getchar();
                                cout << "\t林长生(Lv.10):" << endl;
                                cout << "\t\t加油……" << endl;
                                getchar();
                                cout << "\t狗蛋(Lv."  << protagonist.showLevel() << "):" << endl;
                                cout << "\t\t这是殡仪馆的电话你记好，报我的名字打八折还送火葬场火化五分熟一条龙服务" << endl;
                                getchar();
                                clear_the_conversation(tempX1, tempY1);
                                break;
                            }
                            if (option5 != 1 && option5 != 2 && option5 != 3){
                                cout << "别搞事……" << endl;
                                getchar();
                                clear_the_conversation(tempX1, tempY1);
                            }
                        }
                    }
                    if(option4 == 2){
                        cout << "你稳了一手，回到了甲板上……" << endl;
                        getchar();
                        clear_the_conversation(tempX, tempY);
                    }
                    cout << "不知过了多久，河面突然翻动起来。一只面目狰狞的水兽钻了出来，啸声响彻云霄，你听不到其他任何声音……" << endl;
                    cout << "隐隐看见远处一条鲜红色的船划了过来……" << endl;
                    cout << "[1.跳上去][2.并不想跳]" << endl;
                    cout << "你选择___";
                    int option6;
                    cin >> option6;
                    cout << "跳是吧，好的。你跳了上去。" << endl;
                    cout << "这头水兽的后背疤痕累累，每一处疤痕都是一个座位……" << endl;
                    getchar();
                    clear_the_conversation(tempX, tempY);
                    cout << "又过了许久，你终于踏上了土地……" <<endl;
                    cout << "岛上开满了紫色的花，充斥这一种妖异的美感……" << endl;
                    getchar();
                    clear_the_conversation(tempX, tempY);
                    cout << "\t林蚺之主(Lv.10):" << endl;
                    cout << "\t\t哼，你以为本座听不到你就奈何不了你吗？杀了他！" << endl;
                    getchar();
                    clear_the_conversation(tempX, tempY);

                    int judge_live = 1;
                    Monster_6 monster_6;
                    monster_6.getMessage();
                    Fight <Monster_6> fight;
                    fight.fighting(monster_6, judge_live);
                    if (judge_live == 0){
                        fresh_village.conversation_with_npc1_npc2();
                    }
                    //战斗过程，和三个小怪 小怪相同
                    getchar();
                    clear_the_conversation(tempX, tempY);
                    cout << "\t林蚺之主(Lv.10):" << endl;
                    cout << "\t\t怎么可能？别杀我，我可以把这个地方给你，包括外面那些提供生命力的牲口，不，人！都给你，饶了我" << endl;
                    getchar();
                    cout << "不等说完，你便两句诗续了她……当年圣战魔女的二把手，落得了如此羞耻的下场" << endl;
                    getchar();
                    clear_the_conversation(tempX, tempY);
                    cout << "[系统消息]获得奖励：金币+200，经验+80" << endl;
                    cout << "[系统消息]获得物品：紫色的卵" << endl;
                    protagonist.experienceAmount_plus(80);
                    packsack.possession_plus(200);
                    getchar();
                    //先检查有没有绿毛虫，有的话执行下面的语句
                    cout << "[系统消息]你的绿毛虫好像对这个蛋很感兴趣，趁你不被一口吞下" << endl;
                    cout << "[系统消息]你的绿毛虫进化成 裂空座？？" << endl;

                    protagonist.set_have();
                    //读进去
                    cout << "[系统消息]获得成就：缘，妙不可言" << endl;
                    protagonist.add_achievement("缘，妙不可言");
                    getchar();
                    clear_the_conversation(tempX, tempY);
                }

            }
            else{
                cout << "你看了一会，便离开了人群，一股诡异的感觉萦绕在你的心头……" << endl;
                getchar();
                clear_the_conversation(tempX, tempY);
                cout << "你看到城中告示栏有清理怪物的悬赏，马上撕了告示来到城外……" << endl;
                getchar();
                clear_the_conversation(tempX, tempY);
                cout << "准备战斗……" << endl;
                getchar();
                clear_the_conversation(tempX, tempY);

                int judge_live = 1;
                Monster_6 monster_6;
                monster_6.getMessage();
                Fight <Monster_6> fight;
                fight.fighting(monster_6, judge_live);
                if (judge_live == 0){
                    fresh_village.conversation_with_npc1_npc2();
                }
                //z战斗和上面怪物种类相同 三只
                getchar();
                clear_the_conversation(tempX, tempY);
                cout << "[系统消息]任务奖励：金币+100，经验+50" << endl;
                protagonist.experienceAmount_plus(50);
                packsack.possession_plus(100);
                getchar();
                cout << "你离开了山谷……" << endl;
                cout << "[系统消息]几日后，林蚺之主从百花深处重新现世，战力比起当年更强一筹，王国局势更加岌岌可危……" << endl;
                getchar();
                clear_the_conversation(tempX, tempY);
            }
            is_first_come = false;
        }
        else{
            cout << "一片苍凉……" << endl;
        }
    }

private:
    bool is_first_come;
};




/*void linChangSheng_words(){
        cout << "这里城外原本是没有河的……" << endl;
        cout << "几十年前，圣战的时候，魔女带着几名魔族精锐首领与王国长老交手，" << endl;
        cout << "长老们拼死将几名精锐击杀，苍天又降下神罚打退魔女之后人类才勉强赢了这场大战。" << endl;
        cout << "没想到，其中一精锐生命力极其顽强，它将肉身化卵，远遁至此……" << endl;
        cout << "我的小女儿，少不经事，捡到了那颗卵，谁都没有告诉，反而当宝贝藏了起来……" << endl;
        cout << "囡囡七岁那年，可能是玩耍的时候弄破了皮肤，血滴到了卵上，那天开始，对我们，对这个城镇来说，恐惧开始了。" << endl;
        cout << "它的食欲让它醒来，强行与囡囡融合，开始的时候它并不能完全压制住囡囡，所以一直安抚囡囡让她保密，" << endl;
        cout << "然后在它能掌控身体的时候悄悄地吞噬护城阵法的力量。" << endl;
        cout << "再然后，它吃光了护城阵法，力量也壮大到能压制囡囡，也不再隐藏了。" << endl;
        cout << "它借护城阵法的阵基创造了吸取生命力的大阵，掌控了城中的人，又将生命力具象化为这条河，" << endl;
    }*/
