#ifndef GAMECHARACTER_H
#define GAMECHARACTER_H
#include <string>

class GameCharacter {
public:
    GameCharacter(std::string name, float hp, float max_hp, int level);
    virtual void attack();
    float take_damage(float damage);
    float heal(float amount);
    void display_info() const;
    bool is_alive() const;

private:
    std::string name;
    float hp;
    float max_hp;
    int level;
};


#endif