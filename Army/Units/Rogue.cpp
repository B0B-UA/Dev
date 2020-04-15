#include "Rogue.h"
#include "Attacks/RogueAttack.h"
#include "States/RogueState.h"

Rogue::Rogue(const std::string& name, int hp, int dmg)
    : Unit( new RogueState(name, hp, dmg), new RogueAttack()) {};

Rogue::~Rogue() = default;;

std::ostream& operator<<(std::ostream& out, Rogue& rogue) {
	if (rogue.getState()->isDead) {
		return out << "Rogue * IS DEAD *\n";
	}
	else {
		return out << "Rogue * " << *(rogue.getState()) << " *";
	}
};
