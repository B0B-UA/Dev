#include <iostream>
#include "State.h"

class UnitIsDeadExeption {};

void State::IsAlive() {
    if (this->hp <= 0 && !this->isDead) {
        this->isDead = true;
        this->hp = 0;
        std::cout << *this->getName() << "  - IS DEAD\n";
    }
};

State::State(const std::string& name, int hp, int dmg) {
    this->name = new std::string(name);
    this->hp = hp;
    this->hpMax = hp;
    this->dmg = dmg;
};

State::~State() {
    delete(this->name);
};

void State::takeDmg(int dmg) {
	this->hp -= dmg;

	if ( this->hp < 0 ) {
		this->hp = 0;
	};
};

void State::addHp(int hp) {
    if (this->hp + hp > this->hpMax ) {
        this->hp = this->hpMax;
    } else {
        this->hp += hp;
    }
};

void State::setDmg(int dmg) {
    this->dmg = dmg;
};

void State::setHp(int hp) {
    this->hp = hp;
};

void State::setHpMax(int hpMax)   {
    this->hpMax = hpMax;
};

int State::getDmg() const {
    return this->dmg;
};

int State::getHp() const  {
    return this->hp;
};

int State::getHpMax() const   {
    return this->hpMax;
};

std::string* State::getName() const   {
    return this->name;
};

std::ostream& operator<<(std::ostream& out, State& state) {
    return out << " / " <<  *state.getName() << " - " << state.getHpMax() << ":" << state.getHp() << " <> " << state.getDmg() << " /";
};
