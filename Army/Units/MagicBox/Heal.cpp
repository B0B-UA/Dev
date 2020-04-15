#include "Heal.h"

Heal::Heal(int cost, int magDmg): Spell(cost, magDmg) {};
Heal::~Heal() = default;;

void Heal::cast(Unit* enemy, SpellCaster *attacker) {
	if (enemy->getState()->berserker || enemy->getState()->isUndead){
	} else if (attacker->getState()->wizard) {
		enemy->addHp(this->getMagDmg()/2);
	} else {
		enemy->addHp(this->getMagDmg());
	}
}
