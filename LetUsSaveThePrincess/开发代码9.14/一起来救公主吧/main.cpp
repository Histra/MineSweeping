#include <bits/stdc++.h>
#include <Windows.h>
//#include "Protagonist.h"
#include "freshVillage.h"
#include "Place.h"
#include "forgivableVillage.h"
#include "madeInHeaven.h"
#include "depthOfFlowers.h"
#include "secondBuilding.h"
#include "kingCanyon.h"
#include "Camelot.h"
#include "blackTown.h"
#include "highMath.h"
#include "devilAbyss.h"
#include "BOSShome.h"
#include "Monster.h"
#include "Monster_1.h"
#include "Monster_2.h"
#include "Monster_3.h"
#include "Monster_4.h"
#include "Monster_5.h"
#include "Monster_6.h"
#include "Monster_7.h"
#include "Monster_8.h"
#include "Monster_9.h"
#include "Monster_10.h"
#include "Fight.h"

#include "Packsack.h"
#include "Store.h"


using namespace std;

//字体颜色
HANDLE  hConsole;
int current_point = 1;

//Protagonist protagonist;
//freshVillage fresh_village;
forgivableVillage forgivable_village;
madeInHeaven made_in_heaven;
depthOfFlowers depth_of_flowers;
secondBuilding second_building;
kingCanyon king_canyon;
Camelot camelot;
blackTown black_town;
highMath high_math;
devilAbyss devil_abyss;
BOSShome  BOSS_home;

//Packsack packsack;
Store store;

Monster_1 monster_1;
Monster_2 monster_2;
Monster_3 monster_3;
Monster_4 monster_4;
Monster_5 monster_5;
Monster_6 monster_6;
Monster_7 monster_7;
Monster_8 monster_8;
Monster_9 monster_9;
Monster_10 monster_10;

//Fight fight;

string map_digitization[20][20];
string name_digitization[20];
bool is_get_handbook = false;
void map_digitized(){
    ifstream file;
    file.open("map_name_digitization.txt", ios_base :: in);
    if (file){
        for (int i = 1; i <= 12; i ++){
            file >> name_digitization[i];
        }
    }
    file.close();
    map_digitization[1][1] = name_digitization[2];
    map_digitization[1][2] = name_digitization[5];
    map_digitization[2][1] = name_digitization[3];
    map_digitization[2][2] = name_digitization[6];
    map_digitization[2][3] = name_digitization[1];
    map_digitization[3][1] = name_digitization[2];
    map_digitization[3][2] = name_digitization[4];
    map_digitization[4][1] = name_digitization[3];
    map_digitization[4][2] = name_digitization[6];
    map_digitization[4][3] = name_digitization[8];
    map_digitization[5][1] = name_digitization[1];
    map_digitization[5][2] = name_digitization[10];
    map_digitization[5][3] = name_digitization[9];
    map_digitization[6][1] = name_digitization[2];
    map_digitization[6][2] = name_digitization[4];
    map_digitization[6][3] = name_digitization[7];
    map_digitization[7][1] = name_digitization[6];
    map_digitization[7][2] = name_digitization[8];
    map_digitization[7][3] = name_digitization[11];
    map_digitization[8][1] = name_digitization[4];
    map_digitization[8][2] = name_digitization[7];
    map_digitization[8][3] = name_digitization[11];
    map_digitization[9][1] = name_digitization[5];
    map_digitization[9][2] = name_digitization[10];
    map_digitization[10][1] = name_digitization[5];
    map_digitization[10][2] = name_digitization[9];
    map_digitization[10][3] = name_digitization[11];
    map_digitization[11][1] = name_digitization[7];
    map_digitization[11][2] = name_digitization[8];
    map_digitization[11][3] = name_digitization[10];
    //?
    map_digitization[12][1] = name_digitization[9];
    map_digitization[9][3] = name_digitization[12];
}
void emigrate(int current_point){
    if (current_point == 1){
        system("CLS");
        fresh_village.conversation_with_npc1_npc2();
    }
    if (current_point == 2){
        system("CLS");
        forgivable_village.conversation_with_npc();
    }
    if (current_point == 3){
        system("CLS");
        made_in_heaven.conversation_with_npc();
    }
    if (current_point == 4){
        system("CLS");
        depth_of_flowers.conversation_with_npc();
    }
    if (current_point == 5){
        system("CLS");
        second_building.conversation_with_npc();

    }
    if (current_point == 6){
        system("CLS");
        king_canyon.conversation_with_npc();
    }
    if (current_point == 7){
        system("CLS");
        camelot.conversation_with_npc();
    }
    if (current_point == 8){
        system("CLS");
        black_town.conversation_with_npc();
    }
    if (current_point == 9){
        system("CLS");
        high_math.conversation_with_npc();
    }
    if (current_point == 10){
        system("CLS");
        devil_abyss.conversation_with_npc();
    }
    if (current_point == 11){
        system("CLS");
        BOSS_home.conversation_with_npc();
    }
    if (current_point == 12){
        cout << "[系统消息]恭喜你，狗蛋，掉出了这个世界！" << endl;
        cout << "\t由于时空扭曲，狗蛋被引力撕成了原子，so，you die!" << endl;
        cout << "[系统消息]获得成就：好奇心害死狗蛋儿" << endl;
        cout << "\t开发者有点儿可怜你，所以你获得了更高维度宇宙的物品：怪物图鉴\n" << endl;
        is_get_handbook = true;
        cout << "\t\t【重回新手村...】" << endl;
        getchar();getchar();
        system("CLS");
        fresh_village.conversation_with_npc1_npc2();
    }
}

void print_map(){
    SetConsoleTextAttribute(hConsole,30);
    cout << "|=========================================================================================================|" << endl;
    cout << "|.........................................................................................................|" << endl;
    cout << "|...新......................................******........................................................|" << endl;
    cout << "|....手...................................**......********................................................|" << endl;
    cout << "|.....村***********************301守卫者**................*******************.............................|" << endl;
    cout << "|.....**........................二号楼.......................................**...........................|" << endl;
    cout << "|.....**............................**........................................**..........................|" << endl;
    cout << "|.....**.............................*.........................................高数怪村...................|" << endl;
    cout << "|.....**..............................***.......................................##.....**.................|" << endl;
    cout << "|...原谅.................................**......................................##......**...............|" << endl;
    cout << "|....村******.............................***....................................##........**.............|" << endl;
    cout << "|.......**....**.............................**...................................##.........**...........|" << endl;
    cout << "|........**.....**.............................**********.........................##...........**.........|" << endl;
    cout << "|........**.......*************农药峡谷***...............##......................##..............**.......|" << endl;
    cout << "|........**......................#........**...............##...................##.................*****->?" << endl;
    cout << "|........**......................#..........**................##...............##.........................|" << endl;
    cout << "|........**......................#...........**.................###########恶魔深渊.......................|" << endl;
    cout << "|........**......................#............**.............................##...........................|" << endl;
    cout << "|.........**.....................#.............**...........................##............................|" << endl;
    cout << "|...天上人间.....................#...............**.........................##............................|" << endl;
    cout << "|.........##.....................#.................*.........................##...........................|" << endl;
    cout << "|..........##...................##...........亚瑟王*.........................##...........................|" << endl;
    cout << "|...........##.................##..............宫殿######....................##...........................|" << endl;
    cout << "|...........##................#.........................##.....................##.........................|" << endl;
    cout << "|.............##..............#..........................##......................##.......................|" << endl;
    cout << "|..............#####百花深处.#..........................#.##......................##......................|" << endl;
    cout << "|..........................##......................#####...###....................##......................|" << endl;
    cout << "|............................##...................##...........#..................##......................|" << endl;
    cout << "|.............................##................##..............####################......................|" << endl;
    cout << "|..............................##.............##...................................##.....................|" << endl;
    cout << "|...............................##############.........................************BOOS的窝...............|" << endl;
    cout << "|............................................黑色城镇*******************..................................|" << endl;
    cout << "|.........................................................................................................|" << endl;
    cout << "|=========================================================================================================|" << endl;
}
void print_menu(){
    while(true){
        system("CLS");
        SetConsoleTextAttribute(hConsole,10);
        char tempChar;
        while(true){
            cout << "①显示地图\t②前往地点\t③系统选项\t④背包物品\t⑤疯狂商店\t⑥个人属性\t⑦个人成就\t⑧怪物图鉴" << endl;
            cout << "请选择_____";
            cin >> tempChar;
            if (tempChar >= 49 && tempChar <= 57){
                break;
            }
            else{
                system("CLS");
            }
        }
        int tempChoose;
        tempChoose = tempChar - 48;
        //cin >> tempChoose;
        if (tempChoose == 1){
            SetConsoleTextAttribute(hConsole,150);
            print_map();
            cout << "\n[1.返回]\n";
            char tempChar;
            cin >> tempChar;
            SetConsoleTextAttribute(hConsole,9);
            system("CLS");
        }
        if (tempChoose == 2){
            int tempCount = 1;
            cout << "请输入要去的地方：[";
            for (int i = 1; i <= 11; i ++){
                if (map_digitization[current_point][i] != "")
                    cout << tempCount++ << "." << map_digitization[current_point][i] << "\t";
            }
            cout << "]" << endl;
            cout << "请选择____";
            int tempChoose_number;
            cin >> tempChoose_number;
            for (int i = 1; i <= 12; i ++){
                if (map_digitization[current_point][tempChoose_number] == name_digitization[i]){
                    current_point = i;
                    break;
                }
            }//cout << current_point << "&&&" << endl;
            //调用地点类中的函数；
            emigrate(current_point);

            /*char tempChar;
            tempChar = getchar();Sleep(2000);
            system("CLS");*/
        }
        if (tempChoose == 3){
            cout << "[1.结束游戏]\t[2.存档]\t[3.支持一下开发者]\t[4.取消]" << endl;
            int tempChoose_number;
            cin >> tempChoose_number;
            if (tempChoose_number == 1){
                cout << "[系统消息]无法结束游戏！您需要开发者权限才能结束游戏。" << endl;
                getchar();
                char tempChar;
                tempChar = getchar();
                system("CLS");
                //exit(0);
            }
            if (tempChoose_number == 2){
                //cout << "[系统消息]无法存档！愚蠢的开发者还没有学会【抠鼻】" << endl;
                protagonist.archive();
                packsack.archive();
                cout << "存档成功！" << endl;
                getchar();
                char tempChar;
                tempChar = getchar();
                system("CLS");
            }
            if (tempChoose_number == 3){
                cout << "[系统消息]请加QQ：3169858658。吐槽也可骂人也行。" << endl;
                getchar();
                char tempChar;
                tempChar = getchar();
                system("CLS");
            }
            if (tempChoose_number == 4){
                system("CLS");
                continue;
            }
        }
        if (tempChoose == 4){
            SetConsoleTextAttribute(hConsole,15);
            int tempX2, tempY2;
            getxy(tempX2, tempY2);
            while (true){
                packsack.display();
                cout << "[1.使用物品]\t[2.拆卸物品]\t[3.取消]\t请选择__";
                int tempChoose_number;
                cin >> tempChoose_number;
                if (tempChoose_number == 1){
                    cout << "请选择背包内物品___";
                    int tempChoose_1;
                    cin >> tempChoose_1;
                    cout << "请选择数量___";
                    int tempChoose_amount1;
                    cin >> tempChoose_amount1;
                    packsack.invoking_use(tempChoose_1, tempChoose_amount1);
                }
                if (tempChoose_number == 2){
                    cout << "\t您身上装备：" << endl;
                    cout << "\t\t";
                    bool flag = false;
                    packsack.equip_display(flag);
                    getchar();getchar();
                    if (flag){
                        cout << "请选择物品___";
                        int tempChoose_2;
                        cin >> tempChoose_2;
                        cout << "请选择数量___";
                        int tempChoose_amount2;
                        cin >> tempChoose_amount2;
                        packsack.invoking_unuse(tempChoose_2, tempChoose_amount2);
                    }
                    else{
                        cout << "[系统消息]没有物品可以拆卸！" << endl;
                    }
                    getchar();
                }
                if (tempChoose_number == 3){
                    cout << "\n[系统消息]按任意键返回..." << endl;
                    getchar();
                    char tempChar;
                    tempChar = getchar();
                    break;
                }
                //SetConsoleTextAttribute(hConsole,15);
                clear_the_conversation(tempX2, tempY2);
            }
        }
        if (tempChoose == 5){
            store.display();
        }
        if (tempChoose == 6){
            protagonist.display();
            getchar();
            char tempChar;
            tempChar = getchar();

        }
        if (tempChoose == 7){
            protagonist.showAchievements();
            getchar();
            getchar();
        }
        if (tempChoose == 8){
            if (is_get_handbook){
                ifstream file;
                string name;
                int kind;
                int max_hitPoints;
                int current_hitPoints;
                int armor;
                int strong;
                int level;
                int gold;
                int exp;
                string state;
                file.open("Monster_all.txt", ios_base :: in);
                if (file){
                    for (int i = 1; i  <= 10; i ++){
                        //cout<<setw(15)<<setiosflags(ios::left)<<setfill('X')<<4000<<endl;
                        cout << "1.名字：";
                        file >> name;
                        cout << setw(15) << setiosflags(ios::left) << setfill(' ') << name;
                        cout << "\t2.种类：";
                        file >> kind;
                        cout << setw(5) << setiosflags(ios::left) << setfill(' ') << kind;
                        cout << "\t3.生命值";
                        file >> max_hitPoints;
                        cout << setw(5) << setiosflags(ios::left) << setfill(' ') << max_hitPoints ;
                        file >> current_hitPoints;
                        cout << "\t4.护甲值：";
                        file >> armor;
                        cout << setw(5) << setiosflags(ios::left) << setfill(' ') << armor ;
                        cout << "\t5.攻击力：";
                        file >> strong;
                        cout << setw(5) << setiosflags(ios::left) << setfill(' ') << strong ;
                        cout << "\t6.等级：" ;
                        file >> level;
                        cout << setw(5) << setiosflags(ios::left) << setfill(' ') << level ;;
                        cout << "\t7.击杀金币奖励：";
                        file >> gold;
                        cout << setw(5) << setiosflags(ios::left) << setfill(' ') << gold ;
                        cout << "\t8.击杀经验奖励：";
                        file >> exp;
                        cout << setw(5) << setiosflags(ios::left) << setfill(' ') << exp ;
                        cout << endl;
                    }
                }
                file.close();
                getchar();getchar();
            }
            else{
                cout << "[系统消息]您需要管理员权限才能打开此图鉴！！" << endl;
                getchar();getchar();
            }
        }

    }

}
void print_the_background(){
    SetConsoleTextAttribute(hConsole,15);
    cout << "古老的阿尔及利亚大陆上，自远始之战后已是千年之久，败北的魔族一直蠢蠢欲动，" << endl;
    cout << "在黑暗中将羽翼丰满，伺机让黑紫色再次笼罩这片大陆。" << endl;
    cout << "妖艳的魔族之女，贪婪地凝视着这片美丽的大陆，驱使着魔物进犯人类的家园。" << endl;
    getchar();
    SetConsoleTextAttribute(hConsole,13);
    cout << "“这原是我的王国(╯‘□′)╯︵┻━┻”" << endl;
    SetConsoleTextAttribute(hConsole,15);
    getchar();
    cout << "神圣纪年1037，魔军不宣而战，三月时间便攻至王国都城，人类存亡之际，自天空降下两道惊雷，" << endl;
    cout << "一道融进皇后的腹中，另一道劈毁了魔女半边身体。" << endl;
    cout << "濒死的魔女仓皇退兵，让出王国一半土地。" << endl;
    cout << "次年初，王国公主降生。公主降生之时，天边金光闪烁，隐有梵音吟唱，无人注意到神格在公主额头一闪而没。" << endl;
    getchar();
    cout << "神圣纪年1054，魔女冒死潜入王国，护国长老两死一伤，公主被掳，" << endl;
    getchar();
    SetConsoleTextAttribute(hConsole,13);
    cout << "“我会夺取你的灵……emmmm…肉体，我的膜法会把你们撕成碎片(╯‘□′)╯︵┻━┻” " << endl;
    getchar();
    SetConsoleTextAttribute(hConsole,15);
    cout << "危机再次席卷阿尔及利亚大陆。" << endl;
    cout << "百废待兴的神圣王国再也无力派兵营救公主，老国王昭告全国，恳求国民们能伸出援助之手! " << endl;
    cout << "你背起三级包，放下98K，毅然决然地踏上荆棘之路…………" << endl;
    cout << "" << endl;
    getchar();
    cout << "走吧，少年郎。" << endl;
    int tempChar;
    tempChar = getchar();
    SetConsoleTextAttribute(hConsole,13);
    cout << "[系统消息]加载中...";
    Sleep(2000);
    for (int i = 1; i <= 50; i ++)
        cout << "\b";
}

//是 print_the_beginning 的；

static const unsigned char ASCII_TAB[][5]=  //5*7
{
    { 0x00, 0x00, 0x00, 0x00, 0x00 },   // sp
    { 0x00, 0x00, 0x2f, 0x00, 0x00 },   // !
    { 0x00, 0x07, 0x00, 0x07, 0x00 },   // "
    { 0x14, 0x7f, 0x14, 0x7f, 0x14 },   // #
    { 0x24, 0x2a, 0x7f, 0x2a, 0x12 },   // $
    { 0xc4, 0xc8, 0x10, 0x26, 0x46 },   // %
    { 0x36, 0x49, 0x55, 0x22, 0x50 },   // &
    { 0x00, 0x05, 0x03, 0x00, 0x00 },   // '
    { 0x00, 0x1c, 0x22, 0x41, 0x00 },   // (
    { 0x00, 0x41, 0x22, 0x1c, 0x00 },   // )
    { 0x14, 0x08, 0x3E, 0x08, 0x14 },   // *
    { 0x08, 0x08, 0x3E, 0x08, 0x08 },   // +
    { 0x00, 0x00, 0x50, 0x30, 0x00 },   // ,
    { 0x10, 0x10, 0x10, 0x10, 0x10 },   // -
    { 0x00, 0x60, 0x60, 0x00, 0x00 },   // .
    { 0x20, 0x10, 0x08, 0x04, 0x02 },   // /

    { 0x3E, 0x51, 0x49, 0x45, 0x3E },   // 0
    { 0x00, 0x42, 0x7F, 0x40, 0x00 },   // 1
    { 0x42, 0x61, 0x51, 0x49, 0x46 },   // 2
    { 0x21, 0x41, 0x45, 0x4B, 0x31 },   // 3
    { 0x18, 0x14, 0x12, 0x7F, 0x10 },   // 4
    { 0x27, 0x45, 0x45, 0x45, 0x39 },   // 5
    { 0x3C, 0x4A, 0x49, 0x49, 0x30 },   // 6
    { 0x01, 0x71, 0x09, 0x05, 0x03 },   // 7
    { 0x36, 0x49, 0x49, 0x49, 0x36 },   // 8
    { 0x06, 0x49, 0x49, 0x29, 0x1E },   // 9

    { 0x00, 0x36, 0x36, 0x00, 0x00 },   // :
    { 0x00, 0x56, 0x36, 0x00, 0x00 },   // ;
    { 0x08, 0x14, 0x22, 0x41, 0x00 },   // <
    { 0x14, 0x14, 0x14, 0x14, 0x14 },   // =
    { 0x00, 0x41, 0x22, 0x14, 0x08 },   // >
    { 0x02, 0x01, 0x51, 0x09, 0x06 },   // ?
    { 0x32, 0x49, 0x59, 0x51, 0x3E },   // @

    { 0x7E, 0x11, 0x11, 0x11, 0x7E },   // A
    { 0x7F, 0x49, 0x49, 0x49, 0x36 },   // B
    { 0x3E, 0x41, 0x41, 0x41, 0x22 },   // C
    { 0x7F, 0x41, 0x41, 0x22, 0x1C },   // D
    { 0x7F, 0x49, 0x49, 0x49, 0x41 },   // E
    { 0x7F, 0x09, 0x09, 0x09, 0x01 },   // F
    { 0x3E, 0x41, 0x49, 0x49, 0x7A },   // G
    { 0x7F, 0x08, 0x08, 0x08, 0x7F },   // H
    { 0x00, 0x41, 0x7F, 0x41, 0x00 },   // I
    { 0x20, 0x40, 0x41, 0x3F, 0x01 },   // J
    { 0x7F, 0x08, 0x14, 0x22, 0x41 },   // K
    { 0x7F, 0x40, 0x40, 0x40, 0x40 },   // L
    { 0x7F, 0x02, 0x0C, 0x02, 0x7F },   // M
    { 0x7F, 0x04, 0x08, 0x10, 0x7F },   // N
    { 0x3E, 0x41, 0x41, 0x41, 0x3E },   // O
    { 0x7F, 0x09, 0x09, 0x09, 0x06 },   // P
    { 0x3E, 0x41, 0x51, 0x21, 0x5E },   // Q
    { 0x7F, 0x09, 0x19, 0x29, 0x46 },   // R
    { 0x46, 0x49, 0x49, 0x49, 0x31 },   // S
    { 0x01, 0x01, 0x7F, 0x01, 0x01 },   // T
    { 0x3F, 0x40, 0x40, 0x40, 0x3F },   // U
    { 0x1F, 0x20, 0x40, 0x20, 0x1F },   // V
    { 0x3F, 0x40, 0x38, 0x40, 0x3F },   // W
    { 0x63, 0x14, 0x08, 0x14, 0x63 },   // X
    { 0x07, 0x08, 0x70, 0x08, 0x07 },   // Y
    { 0x61, 0x51, 0x49, 0x45, 0x43 },   // Z

    { 0x00, 0x7F, 0x41, 0x41, 0x00 },   // [
    { 0x55, 0x2A, 0x55, 0x2A, 0x55 },   // '\'
    { 0x00, 0x41, 0x41, 0x7F, 0x00 },   // ]
    { 0x04, 0x02, 0x01, 0x02, 0x04 },   // ^
    { 0x40, 0x40, 0x40, 0x40, 0x40 },   // _
    { 0x00, 0x01, 0x02, 0x04, 0x00 },   // '

    { 0x20, 0x54, 0x54, 0x54, 0x78 },   // a
    { 0x7F, 0x48, 0x44, 0x44, 0x38 },   // b
    { 0x38, 0x44, 0x44, 0x44, 0x20 },   // c
    { 0x38, 0x44, 0x44, 0x48, 0x7F },   // d
    { 0x38, 0x54, 0x54, 0x54, 0x18 },   // e
    { 0x08, 0x7E, 0x09, 0x01, 0x02 },   // f
    { 0x0C, 0x52, 0x52, 0x52, 0x3E },   // g
    { 0x7F, 0x08, 0x04, 0x04, 0x78 },   // h
    { 0x00, 0x44, 0x7D, 0x40, 0x00 },   // i
    { 0x20, 0x40, 0x44, 0x3D, 0x00 },   // j
    { 0x7F, 0x10, 0x28, 0x44, 0x00 },   // k
    { 0x00, 0x41, 0x7F, 0x40, 0x00 },   // l
    { 0x7C, 0x04, 0x18, 0x04, 0x78 },   // m
    { 0x7C, 0x08, 0x04, 0x04, 0x78 },   // n
    { 0x38, 0x44, 0x44, 0x44, 0x38 },   // o
    { 0x7C, 0x14, 0x14, 0x14, 0x08 },   // p
    { 0x08, 0x14, 0x14, 0x18, 0x7C },   // q
    { 0x7C, 0x08, 0x04, 0x04, 0x08 },   // r
    { 0x48, 0x54, 0x54, 0x54, 0x20 },   // s
    { 0x04, 0x3F, 0x44, 0x40, 0x20 },   // t
    { 0x3C, 0x40, 0x40, 0x20, 0x7C },   // u
    { 0x1C, 0x20, 0x40, 0x20, 0x1C },   // v
    { 0x3C, 0x40, 0x30, 0x40, 0x3C },   // w
    { 0x44, 0x28, 0x10, 0x28, 0x44 },   // x
    { 0x0C, 0x50, 0x50, 0x50, 0x3C },   // y
    { 0x44, 0x64, 0x54, 0x4C, 0x44 }    // z
};
const int SCREEN_COLS   =       170 ; /* how many columns does terminal have */
const int HORIZONTAL_DISTANCE = 4  ; /* horizontal distance between two characters (列距) */
const int VERTICAL_DISTANCE   = 1  ; /* vertical distance  between two rows of characters (行距) */
const char BRUSH_CHAR        =  '*';
const char BLANK_CHAR       =   ' ';

/* ASCII_TAB字模中字体的高度和宽度 */
const int FONT_ROWS       =     13;
const int FONT_COLS      =      5;

/* 屏幕每行最多可以显示的字符个数 */
const int CHAR_PER_LINE    =       (SCREEN_COLS/(FONT_COLS + HORIZONTAL_DISTANCE));

static char get_char_xy(char ch, int x, int y)
{
    if (ch < ' ' || ch > 'z')
        ch = ' ';
    ch -= ' ';
    return (ASCII_TAB[ch][x] & (1<<y)) ? BRUSH_CHAR : BLANK_CHAR;
}
static void print_row(char ch, int row)
{
    int i;
    for (i = 0; i < FONT_COLS; i++) {
        printf("%c", get_char_xy(ch, i, row));
    }
}
void print_the_beginning(){
    char str[80] = " Come and save the     princess";
    int i, j, k, len, index = 0;
    //printf("Please input a string:\n");
    //gets(str);
    //scanf("%s", str);
    len = strlen(str);
    while (index < len) {
        for (i = 0; i < FONT_ROWS; i++) {
            for (j = 0; j < CHAR_PER_LINE && j + index < len; j++) {
                print_row(str[index + j], i);
                for (k = 0; k < HORIZONTAL_DISTANCE; k++) {
                    printf("%c", BLANK_CHAR);
                }
            }
            printf("\n");
        }
        index += CHAR_PER_LINE;
        for (k = 0; k < VERTICAL_DISTANCE; k++) {
            printf("\n");
        }
    }
    for (int i = 1; i <= 0; i ++)
        cout << endl;
    cout << "▃▃▃▃▃▃▃▃▃▃▃▃▃▃▃▃▃▃▃▃▃▃▃▃▃▃▃▃▃▃▃▃▃▃▃▃▃▃▃▃▃▃▃▃▃▃▃▃▃▃▃▃▃▃▃▃▃▃" << endl;
    cout << "▋ " << endl;
    cout << "▋\t游戏名字：《一起来救公主吧！》" << endl;
    cout << "▋" << endl;
    cout << "▋\t版本8.0" << endl;
    cout << "▋" << endl;
    cout << "▋\t游戏介绍： c++课程设计小学期的产物" << endl;
    cout << "▋" << endl;
    cout << "▋\tMUD游戏制作者：王刚、王皓、郜中强、孙翔（一组）" << endl;
    cout << "▋" << endl;
    cout << "▋\tQQ：1497058369" << endl;
    cout << "▋" << endl;
    cout << "▃▃▃▃▃▃▃▃▃▃▃▃▃▃▃▃▃▃▃▃▃▃▃▃▃▃▃▃▃▃▃▃▃▃▃▃▃▃▃▃▃▃▃▃▃▃▃▃▃▃▃▃▃▃▃▃▃▃" << endl;
    getchar();
    system("CLS");
}
int main(){
    hConsole = GetStdHandle(STD_OUTPUT_HANDLE);//字体颜色
    protagonist.getMessage();
    protagonist.totalExperence();
    map_digitized();

    //BOSS_home.conversation_with_npc();
    //depth_of_flowers.conversation_with_npc();
   // store.display();
  // print_menu();
   //BOSS_home.conversation_with_npc();

//初始化
    print_the_beginning();
    print_the_background();
    SetConsoleTextAttribute(hConsole,3);
    cout<< "\n为了让这个游戏看起来比较正常，请按照您的喜好输入一个主角名： ";
    SetConsoleTextAttribute(hConsole,5);
    /*cout << "1.雄霸天($1000)" << endl;
    cout << "2.步惊云($900)" << endl;
    cout << "3.韩大狗($500)" << endl;
    cout << "4.狗蛋儿($100)" << endl;
    int temp1;
    cin >> temp1;*/
    string tempString;
    cin >> tempString;
    getchar();
    SetConsoleTextAttribute(hConsole,6);
    cout << "好的，狗蛋先生，不愧是海大的学生，连起名字都这么独特！" << endl;
    SetConsoleTextAttribute(hConsole,7);
    cout << "快去营救公主吧~~" << endl;
    getchar();
    system("CLS");
    //SetConsoleTextAttribute(hConsole,2);
    //cout << "<正在新(cai)手(ji)村里....>\n" << endl;
    SetConsoleTextAttribute(hConsole,8);

    fresh_village.getMessage();
    fresh_village.conversation_with_npc1_npc2();
    SetConsoleTextAttribute(hConsole,10);

    print_menu();
    return 0;
}
