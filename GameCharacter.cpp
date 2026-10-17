#include "GameCharacter.h"
#include <iostream>


GameCharacter::GameCharacter(std::string name, float hp, float max_hp, int level) : name(name), hp(hp),
                                                                                    max_hp(max_hp), level(level) {}

float GameCharacter::take_damage(float damage) {
    if (hp > damage) {
        hp -= damage;
        return hp;
    }

    hp = 0;
    return 0;
}

float GameCharacter::heal(float amount) {
    if (amount + hp >= max_hp) {
        hp = max_hp;
    }
    else {
        hp += amount;
    }

    return hp;
}

void GameCharacter::display_info() const {
    std::cout << "Name: " << name << std::endl;
    std::cout << "HP: " << hp << std::endl;
    std::cout << "Max Hp: " << max_hp << std::endl;
    std::cout << "Level: " << level << std::endl;
}

bool GameCharacter::is_alive() const {
    return hp > 0;
}
