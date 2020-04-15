#include "BaseAttack.h"

BaseAttack::BaseAttack() = default;;
BaseAttack::~BaseAttack() = default;;

void BaseAttack::attack(Unit* enemy, Unit* attacker) {
    enemy->takeDmg(attacker->getState()->getDmg());
    enemy->counterAttack(attacker);
};

void BaseAttack::counterAttack(Unit* enemy, Unit* attacker) {
    enemy->takeDmg(attacker->getState()->getDmg() / 2);
};

void BaseAttack::bite(Unit* enemy, Unit* attacker) {
	std::cout << *attacker->getState()->getName() << " bite missed (from BaseAttack)\n";
};
