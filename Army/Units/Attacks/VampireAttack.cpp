#include "VampireAttack.h"

VampireAttack::VampireAttack() = default;;
VampireAttack::~VampireAttack() = default;;

void VampireAttack::attack(Unit* enemy, Unit* attacker) {
    enemy->takeDmg(attacker->getState()->getDmg());
    attacker->addHp(attacker->getState()->getDmg()/2);
    enemy->counterAttack(attacker);
};

void VampireAttack::counterAttack(Unit* enemy, Unit* attacker) {
    enemy->takeDmg(attacker->getState()->getDmg() / 2);
};

void VampireAttack::bite(Unit* enemy, Unit* attacker) {
	if (!enemy->getState()->mutating && !enemy->getState()->vampire) {
		delete enemy->getState();
		delete enemy->getAttack();
		enemy->setState(new WerewolfState("InfectedByVampire", int(VAMPIRE), int(VAMPIRE_DMG)));
		enemy->setAttack(new VampireAttack());
	}
};
