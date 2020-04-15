#include "SoldierState.h"

SoldierState::SoldierState(const std::string& name, int hp, int dmg)
    : State(name, hp, dmg) {};
SoldierState::~SoldierState() = default;;
