#include "Spell.h"

Spell::Spell() {
	this->cost = 0;
	this->magDmg = 0;
};

Spell::Spell(int cost, int magDmg) {
	this->cost = cost;
	this->magDmg = magDmg;
};

Spell::~Spell() = default;


void Spell::cast(Unit *enemy, SpellCaster* spellCaster) {
	std::cout << "Choose your spell!!!\n";
};

void Spell::setCost(int cost) {
	this->cost=cost;
};

void Spell::setMagDmg(int magDmg) {
	this->magDmg=magDmg;
};

int Spell::getCost() const {
	return this->cost;
}

int Spell::getMagDmg() const {
	return this->magDmg;
}
