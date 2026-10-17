#include "Archer.h"
#include <iostream>

Archer::Archer(std::string name, float hp, float max_hp, int level, int arrows, float bow_damage)
                                  : GameCharacter(name, hp, max_hp, level), arrows(arrows), bow_damage(bow_damage) {}

float Archer::attack() {
    if (!is_alive()) {
        return 0;
    }
    if (arrows <= 0) {
        std::cout << name << " has no arrows!" << std::endl;
        return 0;
    }

    arrows--;
    float damage = bow_damage + level * 2;
    std::cout << name << " shoots an arrow!" << std::endl;

    return damage;
}

int Archer::reload(int amount) {
    if (amount <= 0) {
        return arrows;
    }
    arrows += amount;

    return arrows;
}

void Archer::display_info() const {
    GameCharacter::display_info();

    std::cout << "Arrows: " << arrows << std::endl;
    std::cout << "Bow damage: " << bow_damage << std::endl;
}
