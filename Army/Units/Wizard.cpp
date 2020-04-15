#include "Wizard.h"

Wizard::Wizard(const std::string& name, int hp, int dmg)
	:SpellCaster(new State(name, hp, dmg), new BaseAttack(), new MagicState(int(WIZARD_MANA)),
	new MagicAttack(this, new Spell())) {
	this->uState->wizard = true;
};

Wizard::~Wizard() = default;;

void Wizard::changeSpell(SPELL_LIST newSpell) {
	SpellCaster::changeSpell(newSpell);
};

std::ostream& operator<<(std::ostream& out, Wizard& wizard) {
	if (wizard.getState()->isDead) {
		return out << "Wizard * IS DEAD *\n";
	}
	else {
		return out << "Wizard * " << *(wizard.getState()) << *(wizard.getMagState()) << " *";
	}
};
