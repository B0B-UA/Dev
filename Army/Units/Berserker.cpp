#include "Berserker.h"
#include "States/BerserkerState.h"
#include "Unit.h"
#include "States/WerewolfState.h"

Berserker::Berserker(const std::string& name, int hp, int dmg) 
	: Unit( new BerserkerState(name, hp, dmg), new BaseAttack()) {
	this->uState->berserker = true;
};

Berserker::~Berserker() = default;;

std::ostream& operator<<(std::ostream& out, Berserker& berserker) {
	if (berserker.getState()->isDead) {
		return out << "Berserker * IS DEAD *\n";
	} else {
		return out << "Berserker * " << *(berserker.getState()) << " *";
	}
};
