#pragma once
class Monster{
public:
    virtual void getMessage() = 0;
    void hitPoints_decline(int damage){
        current_hitPoints -= damage;
    }
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
};
