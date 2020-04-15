#include "MagicAttack.h"
#include "..//Magicbox/Fireball.h"

MagicAttack::MagicAttack(SpellCaster* spellCaster, Spell* spell) {
	this->spellCaster = spellCaster;
	this->spell = spell;
	this->spellBook = new SpellBook();
};

MagicAttack::~MagicAttack() = default;;

void MagicAttack::changeSpell(SPELL_LIST newSpell) {
	delete (this->spell);
	this->spell = &spellBook->changeSpell(newSpell);
}

void MagicAttack::cast(Unit* enemy, SpellCaster* attacker) {
	if (enemy->getState()->isDead || attacker->getState()->isDead) {
		std::cout << "something went wrong...\n";
	}
	else {
		attacker->spendMana(this->spell->getCost());
		this->spell->cast(enemy, attacker);
	}
};

int MagicAttack::getMagDmg() {
	return this->spell->getMagDmg();
};
