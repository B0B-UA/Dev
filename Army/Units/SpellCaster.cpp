#include "SpellCaster.h"

SpellCaster::SpellCaster(State *uState, BaseAttack *uAttack, MagicState *mState, MagicAttack *mAttack): Unit( uState, uAttack) {
	this->mState = mState;
	this->mAttack = mAttack;
};

SpellCaster::~SpellCaster() {
	delete(this->mState);
	delete(this->mAttack);
};

void SpellCaster::cast(Unit* enemy) {
	this->mAttack->cast(enemy, this);
	std::cout << *(this->getState()->getName()) << " >> " << *(enemy->getState()->getName())  << " : Attack(in-process)\n"; // кто атакует.
};

void SpellCaster::changeSpell(SPELL_LIST newSpell) {
	this->mAttack->changeSpell(newSpell);
}

int SpellCaster::getMana() const {
	return this->mState->getMana();
}

int SpellCaster::getMaxMana() const {
	return this->mState->getMaxMana();
}

int SpellCaster::getMagDmg() const {
	return this->mAttack->getMagDmg();
}

void SpellCaster::addMana(int addmana) {
	this->mState->addMana(addmana);
};

void SpellCaster::spendMana(int spendMana) {
	this->mState->spendMana(spendMana);
};

MagicState* SpellCaster::getMagState() {
	return this->mState;
};

std::ostream& operator<<(std::ostream& out, SpellCaster& spellCaster) {
	out << "/ " <<  (*spellCaster.getMagState()) << " /";
	return out;
};
