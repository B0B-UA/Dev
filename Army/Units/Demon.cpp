#include "Demon.h"
#include "States/SoldierState.h"

Demon::Demon(const std::string& name, int hp, int dmg)
	: Unit( new SoldierState(name, hp, dmg), new BaseAttack()) {
	this->getState()->isUndead = true;
};

Demon::~Demon() = default;;

Demon* Demon::invokeDemon(const std::string& name) {
	return new Demon(name);
};

std::ostream& operator<<(std::ostream& out, Demon& demon) {
	if (demon.getState()->isDead) {
		return out << "Demon * IS DEAD *\n";
	}
	else {
		return out << "Demon * " << *(demon.getState()) << " *";
	}
};
