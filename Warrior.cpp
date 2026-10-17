#include "Warrior.h"
#include <iostream>

Warrior::Warrior(std::string name, float hp, float max_hp, int level, float weapon_damage, float armor)
                              : GameCharacter(name, hp, max_hp, level), weapon_damage(weapon_damage), armor(armor) {}

float Warrior::attack() {
    if (!is_alive()) {
        return 0;
    }
    float damage = weapon_damage + level * 2;
    std::cout << name << " attacks with a sword!" << std::endl;

    return damage;
}

float Warrior::block(float damage) {
    if (damage > armor) {
        return damage - armor;
    }

    return 0;
}

void Warrior::display_info() const {
    GameCharacter::display_info();
    std::cout << "Weapon damage: " << weapon_damage << std::endl;
    std::cout << "Armor: " << armor << std::endl;
}
