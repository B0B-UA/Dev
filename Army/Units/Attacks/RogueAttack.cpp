#include "RogueAttack.h"

RogueAttack::RogueAttack() = default;;
RogueAttack::~RogueAttack() = default;;

void RogueAttack::attack(Unit* enemy, Unit* attacker) {
    enemy->takeDmg(attacker->getState()->getDmg());
};
