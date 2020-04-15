#include "SpellBook.h"

#include "Fireball.h"
#include "Heal.h"
#include "..//Demon.h"


SpellBook::SpellBook() {
	this->magBook.insert(std::pair<SPELL_LIST, Spell&>(FIREBALL_, *(new Fireball(int(FIREBALL_NAME), int(FIREBALL_DMG)))));
	this->magBook.insert(std::pair<SPELL_LIST, Spell&>(HEAL_, *(new Heal(int(HEAL_NAME), int(HEAL_DMG)))));
}

SpellBook::~SpellBook() {
	magBook.clear();
};

Spell& SpellBook::changeSpell(SPELL_LIST newSpell) {
	return magBook.find(newSpell)->second;
};
