#include "Unit.h"

Unit::Unit(const std::string& name, int hp, int dmg) {
    this->name = name;
    this->hitPoints = this->hitPointsLimit = hp;
    ensureIsAlive();
    this->damage = dmg;
}

Unit::~Unit() {}

void Unit::ensureIsAlive() {
    if ( hitPoints < 0 ) {
        this->hitPoints = 0;
        throw UnitIsDead();
    }
}

int Unit::getDamage() const {
    return this->damage;
}

int Unit::getHitPoints() const {
    return this->hitPoints;
}

int Unit::getHitPointsLimit() const {
    return this->hitPointsLimit;
}

const std::string& Unit::getName() const {
    return this->name;
}

void Unit::addHitPoints(int hp) {
    ensureIsAlive();
    if (this->hitPoints + hp > this->hitPointsLimit ) {
        this->hitPoints = this->hitPointsLimit;
    } else {
        this->hitPoints += hp;
    }
}

void Unit::takeDamage(int dmg) {
    ensureIsAlive();
    this->hitPoints -= dmg;
}

void Unit::attack(Unit& enemy) {
    ensureIsAlive();
    enemy.takeDamage(this->damage);
    this->counterAttack(enemy);
}

void Unit::counterAttack(Unit& enemy) {
    ensureIsAlive();
    this->takeDamage(enemy.damage/2);
}

std::ostream& operator<<(std::ostream& out, const Unit& unit) {
    return out << "(" << unit.getName() << ") - "<< unit.getHitPoints();
}
