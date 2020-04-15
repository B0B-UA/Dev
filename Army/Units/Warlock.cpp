#include "Warlock.h"

Warlock::Warlock(const std::string& name, int hp, int dmg)
	:SpellCaster(new State(name, hp, dmg), new BaseAttack(), new MagicState(int(WARLOCK_MANA)),
	new MagicAttack(this, new Spell())) {
	this->uState->warlock = true;
};

Warlock::~Warlock() {};

Demon* Warlock::invokeDemon(const std::string& name) {
	this->mState->spendMana(45);
	Demon* demon = NULL;
	return demon->Demon::invokeDemon(name);
};

std::ostream& operator<<(std::ostream& out, Warlock& warlock) {
	if (warlock.getState()->isDead) {
		return out << "Warlock * IS DEAD *\n";
	}
	else {
		return out << "Warlock * " << *(warlock.getState()) << *(warlock.getMagState()) << " *";
	}
};
