#ifndef WARRIOR_H
#define WARRIOR_H
#include "GameCharacter.h"

class Warrior : public GameCharacter {
public:
    Warrior(std::string name, float hp, float max_hp, int level, float weapon_damage, float armor);
    float attack() override;
    float block(float damage);
    void display_info() const override;

private:
    float weapon_damage;
    float armor;
};


#endif