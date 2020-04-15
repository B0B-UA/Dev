#include "Vampire.h"
#include "States/VampireState.h"
#include "Attacks/VampireAttack.h"

Vampire::Vampire(const std::string& name, int hp, int dmg) 
	: Unit( new VampireState(name, hp, dmg), new VampireAttack()) {
	this->uState->vampire = true;
	this->uState->isUndead = true;
};

Vampire::~Vampire() {};

std::ostream& operator<<(std::ostream& out, Vampire& vampire) {
	if (vampire.getState()->isDead) {
		return out << "Vampire * IS DEAD *\n";
	}
	else {
		return out << "Vampire * " << *(vampire.getState()) << " *";
	}
};
