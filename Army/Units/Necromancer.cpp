#include "Necromancer.h"

Necromancer::Necromancer(const std::string& name, int hp, int dmg)
	:SpellCaster(new State(name, hp, dmg), new BaseAttack(), new MagicState(int(NECROMANCER_MANA)),
	new MagicAttack(this, new Spell())) {
	this->uState->necromancer = true;
};

Necromancer::~Necromancer() = default;;

void Necromancer::changeSpell(SPELL_LIST newSpell) {
	SpellCaster::changeSpell(newSpell);
};

void Necromancer::attack(Unit* enemy) {
	Unit::attack(enemy);
	this->addObservable(enemy);
};

void Necromancer::inspectObservable(Unit* enemy) {
	if (enemy->getState()->getHp() == 0) {
		Observer::removeObservable(enemy);
		this->addHp(10);
	}
};

std::ostream& operator<<(std::ostream& out, Necromancer& necromancer) {
	if (necromancer.getState()->isDead) {
		
		return out << "Necromancer * IS DEAD *\n";
	}
	else {
		return out << "Necromancer * " << *(necromancer.getState()) << *(necromancer.getMagState()) << " *";
	}
};
