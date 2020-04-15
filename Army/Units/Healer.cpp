#include "Healer.h"

Healer::Healer(const std::string& name, int hp, int dmg)
	:SpellCaster(new State(name, hp, dmg), new BaseAttack(), new MagicState(int(HEALER_MANA)),
	new MagicAttack(this, new Spell())) {
	this->uState->healer = true;
};

Healer::~Healer() = default;;

void Healer::changeSpell(SPELL_LIST newSpell) {
	SpellCaster::changeSpell(newSpell);
};

std::ostream& operator<<(std::ostream& out, Healer& healer) {
	if (healer.getState()->isDead) {
		return out << "Healer * IS DEAD *\n";
	}
	else {
		return out << "Healer * " << *(healer.getState()) << *(healer.getMagState()) << " *";
	}
};
