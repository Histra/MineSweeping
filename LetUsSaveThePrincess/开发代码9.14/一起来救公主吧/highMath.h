#pragma once
#include <bits/stdc++.h>
using namespace std;
HANDLE  hConsole_highMath;
class highMath {
public:
	highMath() {
		getMessage();
	}
	void conversation_with_npc() {

		hConsole_highMath = GetStdHandle(STD_OUTPUT_HANDLE);//字体颜色
		SetConsoleTextAttribute(hConsole_highMath, 4);
		cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~【高数怪村】~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
		int tempX, tempY;
		char tempChar;
		cout << "【学好数理化，走遍天下都不怕】高数怪村欢迎你！" << endl;
		tempChar = getchar();
		tempChar = getchar();
		getxy(tempX, tempY);
		cout << "\t狗蛋儿(LV." << protagonist.showLevel() << "): 有的人活着，他已经死了... 有的人死了，就不想让别人活！比如牛顿，莱布尼兹..." << endl;
		tempChar = getchar();
		cout << "\t" << highMath_npc1_name << "(LV." << highMath_npc1_lv << "):" << endl;
		cout << "\t\t" << "哪来的智障？学不好高数就怪别人！" << endl;
		tempChar = getchar();
		cout << "\t" << highMath_npc2_name << "(Lv." << highMath_npc2_lv << "):" << endl;
		cout << "\t\t" << "就是就是，真不要脸！" << endl;
		tempChar = getchar();
		clear_the_conversation(tempX, tempY);

		SetConsoleTextAttribute(hConsole_highMath, 6);
		cout << "\t狗蛋儿(LV." << protagonist.showLevel() << "): 说谁呢？糟老头子! 我高数可是上过60分的！" << endl;
		tempChar = getchar();
		cout << "\t" << highMath_npc2_name << "(LV." << highMath_npc2_lv << "):" << endl;
		cout << "\t\t" << "哟哟，可不得了！" << endl;
		tempChar = getchar();
		cout << "\t" << highMath_npc1_name << "(LV." << highMath_npc1_lv << "):" << endl;
		cout << "\t\t" << "tan90°!" << endl;
		tempChar = getchar();
		clear_the_conversation(tempX, tempY);

		SetConsoleTextAttribute(hConsole_highMath, 8);
		cout << "\t狗蛋儿(LV." << protagonist.showLevel() << "): 十以内的加减乘除我张口就出！" << endl;
		tempChar = getchar();
		cout << "\t" << highMath_npc1_name << "(LV." << highMath_npc1_lv << "):" << endl;
		cout << "\t\t" << "你既如此骚，何不入九霄？" << endl;
		tempChar = getchar();
		clear_the_conversation(tempX, tempY);

		SetConsoleTextAttribute(hConsole_highMath, 9);
		cout << "\t" << highMath_npc2_name << "(LV." << highMath_npc2_lv << "):" << endl;
		cout << "\t\t" << "∫(-a,a)√(a * a - x * x)！做出这道题我就告诉你公主的信息！" << endl;
		cout << "\t\t" << "1. πa * a,    2. 0.25πa * a,    3. 0.5πa * a,  " << endl;
		cout << "\t\t  4. 以上答案都不正确,    5. 我不知道" << endl;
		cout << "请选择______";
		getxy(tempX, tempY);
		int choose;
		while (true){
            cin >> choose;
            if (choose == 1){
                SetConsoleTextAttribute(hConsole_highMath, 2);
                cout << "[系统消息]妈耶，答案错了。" << endl;
                tempChar = getchar();
                cout << "[系统消息]恭喜您！获得成就：蠢的一B" << endl;
			    protagonist.add_achievement("蠢的一B");
			    tempChar = getchar();
                cout << "\t" << highMath_npc1_name << "(LV." << highMath_npc1_lv << "):" << endl;
                cout << "\t\t" << "还高数上过60分，打死你我都不信！" << endl;
                tempChar = getchar();
			    clear_the_conversation(tempX, tempY);
		    }
		    if (choose == 2){
		        SetConsoleTextAttribute(hConsole_highMath, 3);
                cout << "[系统消息]狗蛋呀，你可长点心吧！" << endl;
                tempChar = getchar();
                cout << "[系统消息]恭喜您！获得成就：蠢的一B" << endl;
			    protagonist.add_achievement("蠢的一B");
                cout << "\t" << highMath_npc1_name << "(LV." << highMath_npc1_lv << "):" << endl;
                cout << "\t\t" << "不吹牛，猪能死吗？" << endl;
                tempChar = getchar();
			    clear_the_conversation(tempX, tempY);
		    }
		    if (choose == 3) {
		        SetConsoleTextAttribute(hConsole_highMath, 12);
                cout << "[系统消息]厉害了，我的狗蛋！答案正确！获得奖励：经验+100" << endl;
                protagonist.experienceAmount_plus(100);
                tempChar = getchar();
			    cout << "\t" << highMath_npc1_name << "(LV." << highMath_npc1_lv << "):" << endl;
                cout << "\t\t" << "不会是蒙的吧！" << endl;
			    tempChar = getchar();
			    cout << "\t" << highMath_npc2_name << "(LV." << highMath_npc2_lv << "):" << endl;
			    cout << "\t\t" << "公主被抓到南边的埋骨之林，闯过前面的恶魔之渊就能到达埋骨之林了！千万别去送死啊！" << endl;
			    tempChar = getchar();
			    clear_the_conversation(tempX, tempY);
                break;

		    }
            if (choose == 4){
                SetConsoleTextAttribute(hConsole_highMath, 13);
                cout << "[系统消息]你是猴子请来的逗比吗？" << endl;
                tempChar = getchar();
                cout << "[系统消息]恭喜您！获得成就：蠢的一B" << endl;
			    protagonist.add_achievement("蠢的一B");
			    tempChar = getchar();
			    clear_the_conversation(tempX, tempY);
            }
		    if (choose == 5) {
		        SetConsoleTextAttribute(hConsole_highMath, 10);
                cout << "[系统消息]你很诚实！但继续保持！" << endl;
                tempChar = getchar();
			    cout << "[系统消息]恭喜您！获得成就：蠢的一B" << endl;
			    protagonist.add_achievement("蠢的一B");
			    tempChar = getchar();
			    clear_the_conversation(tempX, tempY);
		    }
		    if (choose >= 6){
		        SetConsoleTextAttribute(hConsole_highMath, 14);
                cout << "[系统消息]没这个选项，你傻啊！" << endl;
                tempChar = getchar();
                cout << "[系统消息]恭喜您！获得成就：傻癌晚期" << endl;
                protagonist.add_achievement("傻癌晚期");
			    tempChar = getchar();
			    clear_the_conversation(tempX, tempY);
		    }
        }

	}
	void getMessage() {
		ifstream file;
		file.open("highMath_npc.txt", ios_base::in);
		if (file) {
			file >> highMath_npc1_name;
			file >> highMath_npc1_lv;
			file >> highMath_npc2_name;
			file >> highMath_npc2_lv;
		}
		file.close();
	}
private:
	string highMath_npc1_name;
	int highMath_npc1_lv;
	string highMath_npc2_name;
	int highMath_npc2_lv;

};
