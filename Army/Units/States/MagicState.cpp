#include "MagicState.h"

MagicState::MagicState(int mana){
	this->mana = mana;
	this->manaMax = mana;
};
MagicState::~MagicState() = default;;

int MagicState::getMana() const {
	return this->mana;
};

int MagicState::getMaxMana() const {
	return this->manaMax;
}

void MagicState::addMana(int addMana) {
	if (this->mana + addMana > this->manaMax ) {
			this->mana = this->manaMax;
		} else {
			this->mana += addMana;
		}
};

void MagicState::spendMana(int spendMana) {
	if (this->mana-spendMana < 0) {
			throw EmptyManaExeption();
		}
	this->mana -= spendMana;
}

std::ostream& operator<<(std::ostream& out, MagicState& mState) {
	return out << " / " << " mana: " << mState.getMana() << " /";
};
