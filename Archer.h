#ifndef ARCHER_H
#define ARCHER_H

#include "GameCharacter.h"

class Archer : public GameCharacter {
public:
    Archer(std::string name, float hp, float max_hp, int level, int arrows, float bow_damage);
    float attack() override;
    int reload(int amount);
    void display_info() const override;

private:
    int arrows;
    float bow_damage;
};

#endif