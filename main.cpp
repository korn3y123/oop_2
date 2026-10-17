#include <iostream>

#include "GameCharacter.h"
#include "Warrior.h"
#include "Mage.h"
#include "Archer.h"


int main() {
    Warrior warrior("Arthur", 150, 150, 5, 25, 15);
    Mage mage("Merlin", 80, 80, 5, 100, 100, 35);
    Archer archer("Robin", 100, 100, 5, 20, 30);

    GameCharacter* character = nullptr;
    character = &warrior;

    character->display_info();
    std::cout << "Damage: " << character->attack() << std::endl;
    std::cout << "--------------------" << std::endl;

    character = &mage;
    character->display_info();
    std::cout << "Damage: " << character->attack() << std::endl;
    std::cout << "--------------------" << std::endl;

    character = &archer;
    character->display_info();
    std::cout << "Damage: " << character->attack() << std::endl;
    std::cout << "--------------------" << std::endl;

    std::cout << "Warrior blocks damage:" << std::endl;

    float remaining_damage = warrior.block(40);
    warrior.take_damage(remaining_damage);
    warrior.display_info();

    std::cout << "--------------------" << std::endl;
    std::cout << "Mage restores mana:" << std::endl;

    mage.restore_mana(20);
    mage.display_info();

    std::cout << "--------------------" << std::endl;
    std::cout << "Archer reloads arrows:" << std::endl;

    archer.reload(10);
    archer.display_info();

    return 0;
}