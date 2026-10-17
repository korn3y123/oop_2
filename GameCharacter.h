#ifndef GAMECHARACTER_H
#define GAMECHARACTER_H
#include <string>

class GameCharacter {
public:
    GameCharacter(std::string name, float hp, float max_hp, int level);
    virtual float attack() = 0;
    virtual void display_info() const;

    float take_damage(float damage);
    float heal(float amount);
    bool is_alive() const;

protected:
    std::string name;
    float hp;
    float max_hp;
    int level;
};


#endif