#include "Soldier.h"
#include "States/SoldierState.h"

Soldier::Soldier(const std::string& name, int hp, int dmg) 
    : Unit( new SoldierState(name, hp, dmg), new BaseAttack()) {};

Soldier::~Soldier() = default;;

std::ostream& operator<<(std::ostream& out, Soldier& soldier) {
	if (soldier.getState()->isDead) {
		return out << "Soldier * IS DEAD *\n";
	}
	else {
		return out << "Soldier * " << *(soldier.getState()) << " *";
	}
};
