#pragma once
#include "Protagonist.h"
#include "Packsack.h"
#include "freshVillage.h"
using namespace std;
//Protagonist protagonist;
Packsack packsack;
int map_digit_choose = 0;
template <class T>
class Fight{
public :
    void fighting(T monster, int &judge_live){
        int roundsNumber = 1;
        while(true){
            cout << "正在和" << monster.name << "战斗..." << endl;
            cout << "\t【狗蛋前生命值：" << protagonist.show_current_hitPoints();
            cout << " , 最大生命值：" << protagonist.show_max_hitPoints() << "】" << endl;
            cout << "\t【" << monster.name << "当前生命值：";
            cout << monster.current_hitPoints << "】" << endl;
            cout << "狗蛋发起攻击：" << endl;
            cout << "\t[1.一技能]\t[2.二技能]\t[3.三技能]\t";
            cout << "请选择____";
            int tempChoose;
            cin >> tempChoose;
            if (tempChoose == 1){
                cout << "狗蛋使用一技能【" << protagonist.getskill_1() << "】";
                cout << "对" << monster.name << "造成";
                int tempDamage;
                tempDamage = protagonist.usingskill_1() - monster.armor;
                if (tempDamage < 0)
                    tempDamage = 0;
                cout << tempDamage << "点伤害" << endl;
                monster.hitPoints_decline(tempDamage);
                getchar();getchar();
            }
            if (tempChoose == 2){
                cout << "狗蛋使用二技能【" << protagonist.getskill_2() << "】";
                cout << "对" << monster.name << "造成";
                int tempDamage;
                tempDamage = protagonist.usingskill_2() - monster.armor;
                if (tempDamage < 0)
                    tempDamage = 0;
                cout << tempDamage << "点伤害" << endl;
                monster.hitPoints_decline(tempDamage);
                getchar();getchar();

            }
            if (tempChoose == 3){
                cout << "狗蛋使用三技能【" << protagonist.getskill_3() << "】";
                cout << "对" << monster.name << "造成";
                int tempDamage;
                tempDamage = protagonist.usingskill_3() - monster.armor;
                if (tempDamage < 0)
                    tempDamage = 0;
                cout << tempDamage << "点伤害" << endl;
                monster.hitPoints_decline(tempDamage);
                getchar();getchar();

            }
            if (tempChoose == 4){
                cout << "狗蛋使用四技能（隐藏技能）【" << protagonist.getskill_4() << "】";
                cout << "对" << monster.name << "造成";
                int tempDamage;
                tempDamage = protagonist.usingskill_4() - monster.armor;
                if (tempDamage < 0)
                    tempDamage = 0;
                cout << tempDamage << "点伤害" << endl;
                monster.hitPoints_decline(tempDamage);
                getchar();getchar();

            }
            //monster attack goudan
            cout << monster.name << "发起攻击:" << endl;
            cout << "\t" << monster.name << "对狗蛋造成了";
            int tempDamage;
            tempDamage = monster.strong - protagonist.showArmor();
            if (tempDamage < 0)
                    tempDamage = 0;
            cout << tempDamage << "点伤害" << endl;
            protagonist.hitPoints_decline(tempDamage);
            getchar();
            cout << "[系统消息]第" << roundsNumber ++ << "回合结束." << endl;
            if (protagonist.show_current_hitPoints() <= 0){
                if (judge_live == 10){
                    cout << "[系统消息]你被公主锤爆i~~" << endl;
                    cout << "\t你的鲜血激发出了公主心中的善，公主把魔女赶出了身体" << endl;
                    cout << "\t魔族失去了力量来源，国家恢复了安定祥和" << endl;
                    cout << "\t为了纪念狗蛋儿，公主厚葬了你，把今天定义成“狗蛋节”" << endl;
                    cout << "\t\t【The end】" << endl;
                    exit(0);
                }
                else{
                    cout << "[系统消息]你在战斗中牺牲！" << endl;
                    cout << "\n\n\t\t【重回新手村，加载中...】" << endl;
                    protagonist.getMessage();
                    monster.getMessage();
                    getchar();
                    judge_live = 0;
                    system("CLS");
                }

                //设置一个标志，回到新手村。
                break;
            }
            if (monster.current_hitPoints <= 0){
                cout << "[系统消息]你在战斗中获胜！" << endl;
                cout << "\t此次战斗你获得的战利品有:" << endl;
                cout << "\t\t1.经验\t" << monster.exp << endl;
                cout << "\t\t2.金币\t" << monster.gold << endl;
                protagonist.experienceAmount_plus(monster.exp);
                packsack.possession_plus(monster.gold);
                getchar();
                //设置一个标志回到print_menu() 或者 继续闯关。
                break;
            }

            cout << "\t[1.继续战斗]\t[2.逃跑]\t请选择____";
            int tempChoose_number;
            cin >> tempChoose_number;
            if (tempChoose_number == 1){
                cout << "**************************************************************************" << endl;
                continue;
            }
            if (tempChoose_number == 2){
                //设置标志调用print_menu()；
                if (judge_live == 10){
                    cout << "逃跑失败！" << endl;
                    getchar();
                }
                else
                    break;
            }
        }


    }
private:



};
