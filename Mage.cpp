#include "Mage.h"
#include <iostream>

Mage::Mage(std::string name, float hp, float max_hp, int level, float mana, float max_mana, float spell_damage)
              : GameCharacter(name, hp, max_hp, level), mana(mana), max_mana(max_mana), spell_damage(spell_damage) {}

float Mage::attack() {
    if (!is_alive()) {
        return 0;
    }
    if (mana < 10) {
        std::cout << name << " doesn't have enough mana!" << std::endl;
        return 0;
    }

    mana -= 10;
    float damage = spell_damage + level * 3;
    std::cout << name << " casts a spell!" << std::endl;

    return damage;
}

float Mage::restore_mana(float amount) {
    if (amount <= 0) {
        return mana;
    }
    if (mana + amount >= max_mana) {
        mana = max_mana;
    }
    else {
        mana += amount;
    }

    return mana;
}

void Mage::display_info() const {
    GameCharacter::display_info();

    std::cout << "Mana: " << mana << std::endl;
    std::cout << "Max mana: " << max_mana << std::endl;
    std::cout << "Spell damage: " << spell_damage << std::endl;
}