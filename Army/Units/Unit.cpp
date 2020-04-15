#include "Unit.h"

int Unit::Count = 0;

Unit::Unit(State* state, BaseAttack* attack) {
    this->uState = state;
    this->uAttack = attack;

    Count++;
    id = Count;
};

Unit::~Unit() {
    delete(this->uState);
    delete(this->uAttack);
};

int Unit::getCount() {
    return Count;
};

int Unit::getId() {
    return id;
};

void Unit::attack(Unit* enemy) {
    this->getState()->IsAlive();
    
    if (enemy->uState->isDead) {
        std::cout << "something went wrong...\n";
    }
    else {
        this->uAttack->attack(enemy, this);
    }
};

void Unit::counterAttack(Unit* enemy) {
    this->uState->IsAlive();
    if (this->uState->isDead || enemy->uState->isDead) {
        std::cout << "something went wrong...\n";
    }
    else {
        this->uAttack->counterAttack(enemy, this);
    }
};

void Unit::takeDmg(int dmg) {
    this->uState->takeDmg(dmg);
};

void Unit::addHp(int hp) {
    this->uState->IsAlive();
    if (this->uState->isDead) {
        std::cout << "something went wrong...\n";
    }
    else {
        this->uState->addHp(hp);
    }
};

void Unit::bite(Unit* enemy) {
    this->uState->IsAlive();
    if (this->uState->isDead || enemy->uState->isDead) {
        std::cout << "something went wrong...\n";
    }
    else {
        if (!enemy->uState->mutating) {
            this->uAttack->bite(enemy, this);
            enemy->uState->mutating = true;
        }
    }
};

State* Unit::getState() {
    return this->uState;
};

BaseAttack* Unit::getAttack() {
	return this->uAttack;
};

void* Unit::setState(State *state) {
	this->uState = state;
	return nullptr;
};

void* Unit::setAttack(BaseAttack *attack) {
	this->uAttack = attack;
	return nullptr;
};

std::ostream& operator<<(std::ostream& out, Unit& unit) {
    out << "/ " <<  *(unit.getState()) << " /";
    return out;
};
