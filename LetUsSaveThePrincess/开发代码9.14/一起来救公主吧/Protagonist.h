#pragma once
#include <bits/stdc++.h>
using namespace std;
class Protagonist{
public:
    int totalExp[26];
    void archive(){
        ofstream file;
        file.open("protagonist.txt", ios_base :: out);
        if (file){
            //file << level << endl;
            file << max_hitPoints << endl;
            file << current_hitPoints << endl;
            file << strength << endl;
            file << armor << endl;
            file << agility << endl;//敏捷
            file << experienceAmount << endl;
            file << regenerationAmount << endl;//3重生次数
            //file << state;
            file << skill_1 << endl;
            file << skill_2 << endl;
            file << skill_3 << endl;
            file << skill_4 << endl;

        }
        file.close();
    }
    void getMessage(){
        ifstream file;
        file.open("protagonist.txt", ios_base :: in);
        if (file){
            //file >> level;
            file >> max_hitPoints;
            file >> current_hitPoints;
            file >> strength;
            file >> armor;
            file >> agility;//敏捷
            file >> experienceAmount;
            file >> regenerationAmount;//3重生次数
            //file >> state;
            file >> skill_1;
            file >> skill_2;
            file >> skill_3;
            file >> skill_4;
        }
        file.close();
        file.open("achievements.txt", ios_base :: in);
        if (file){
            while (!file.eof()){
                achievements_amount ++;
                file >> achievements[achievements_amount];
            }
        }
        file.close();
        for (int i = 1; i <= achievements_amount; i ++){
            achievements_count[i] = 0;
        }
    }
    void totalExperence(){
        ifstream file;
        file.open("totalExp.txt", ios_base :: in);
        //int totalExp[25];
        for (int i = 1; i < 26; i++){
            file >> totalExp[i];
        }
    }

    int get_currentLevel(){
        for (int i = 1; i < 26; i++){
            if(experienceAmount < totalExp[i]){
                return i - 1;
                //level = i - 1;
                break;
            }
            if (experienceAmount >= totalExp[25]){
                return 25;
            }
        }
        //cout << "lv = " << level << endl;
    }

    void display(){
        cout << "狗蛋的属性如下：" << endl;
        cout << "\t1.等级 : Lv.";
        cout << get_currentLevel() << endl;
        cout << "\t2.最大生命值 : ";
        cout << max_hitPoints << endl;
        cout << "\t3.当前生命值 : ";
        cout << current_hitPoints << endl;
        cout << "\t4.普通攻击伤害 : ";
        cout << strength << endl;
        cout << "\t5.护甲值 : ";
        cout << armor << endl;//护甲
        cout << "\t6.敏捷度 : ";
        cout << agility << endl;
        cout << "\t7.当前经验总值 : ";
        cout << experienceAmount << endl;
        cout << "\t8.重生数量 : ";
        cout << regenerationAmount << endl;
    }

    void upgrade_attribute_promotion(){//每次升级之后的属性加成
        //level++;
        max_hitPoints = max_hitPoints + 4;
        current_hitPoints = current_hitPoints + 4;
        strength = strength + 2;
        agility = agility + 1;
    }

    int rank_calculation_formula(int x){
        return 2 * x + 3;
    }

    int showLevel(){
        return get_currentLevel();
    }

    int show_max_hitPoints(){
        return max_hitPoints;
    }

    int show_current_hitPoints(){
        return current_hitPoints;
    }

    int showStrength(){
        return strength;
    }

    int showAgility(){
        return agility;
    }

    int showArmor(){
        return armor;
    }

    int usingskill_1(){
        int i_attack;
        double d_attack;
        int skill_1_attack;
        i_attack = strength * 1.1 + 4;
        d_attack = strength * 1.1 + 4;
        if(d_attack - i_attack >= 0.5){
            skill_1_attack = i_attack + 1;
        }
        else{
            skill_1_attack = i_attack;
        }
        return skill_1_attack;
    }

    int usingskill_2(){
        int i_attack;
        double d_attack;
        int skill_2_attack;
        i_attack = strength * 1.2;
        d_attack = strength * 1.2;
        if(d_attack - i_attack >= 0.5){
            skill_2_attack = i_attack + 1;
        }
        else{
            skill_2_attack = i_attack;
        }
        return skill_2_attack;
    }

    int usingskill_3(){
        int skill_3_attack;
        skill_3_attack = strength + 8;
        return skill_3_attack;
    }

    int usingskill_4(){
        int skill_4_attack;
        skill_4_attack = strength * 2;
        return skill_4_attack;
    }

    string getskill_1(){
        return skill_1;
    }

    string getskill_2(){
        return skill_2;
    }

    string getskill_3(){
        return skill_3;
    }

    string getskill_4(){
        return skill_4;
    }
    void hitPoints_decline(int damage){
        current_hitPoints -= damage;
    }
    void experienceAmount_plus(int amount){
        int pro_level = get_currentLevel();
        experienceAmount += amount;
        if (pro_level != get_currentLevel()){
            cout << "[系统消息]恭喜你，狗蛋，成功升级到Lv." << get_currentLevel() << endl;
            for (int i = 1; i <= get_currentLevel() - pro_level; i ++)
                upgrade_attribute_promotion();
        }
    }
    void add_achievement(string achievement){
        for (int i = 1; i <= achievements_amount; i ++){
            if (achievement == achievements[i]){
                achievements_count[i] ++;
                break;
            }
        }

    }
    void showAchievements(){
        int countTimes = 1;
        for (int i = 1; i <= achievements_amount; i ++){
            if (achievements_count[i] != 0){
                cout << "\t" << countTimes++ << "." << achievements[i] << " × " << achievements_count[i]<< endl;
            }
        }
    }
    void strength_plus(int amount){
        strength += amount;
    }
    void strength_decline(int amount){
        strength -= amount;
    }
    void current_hitPoints_plus(int amount){
        if (amount + current_hitPoints >= max_hitPoints){
            current_hitPoints = max_hitPoints;
        }
        else{
            current_hitPoints += amount;
        }
    }
    void max_hitPoints_plus(int amount){
        max_hitPoints += amount;
        current_hitPoints += amount;
    }
    void armor_plus(int amount){
        if (amount + armor >= max_armor){
            armor = max_armor;
        }
        else{
            armor += amount;
        }
    }
    void armor_decline(int amount){
        armor -= amount;
    }
    void set_have(){
        is_have = true;
    }
    bool check_have(){
        return is_have;
    }
private:
    int level;
    int max_hitPoints;
    int current_hitPoints;
    int strength;
    int armor;
    int agility;
    int experienceAmount;
    int regenerationAmount;
    //string state;
    string skill_1;
    string skill_2;
    string skill_3;
    string skill_4;

    string achievements[100];
    int achievements_count[100];
    static int achievements_amount;
    static int max_armor;

    static bool is_have;


};
int Protagonist :: achievements_amount = 0;
int Protagonist :: max_armor = 55;
bool Protagonist :: is_have = false;
