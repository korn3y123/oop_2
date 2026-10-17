#ifndef MAGE_H
#define MAGE_H

#include "GameCharacter.h"

class Mage : public GameCharacter {
public:
    Mage(std::string name, float hp, float max_hp, int level, float mana, float max_mana, float spell_damage);
    float attack() override;
    float restore_mana(float amount);
    void display_info() const override;

private:
    float mana;
    float max_mana;
    float spell_damage;

};

#endif