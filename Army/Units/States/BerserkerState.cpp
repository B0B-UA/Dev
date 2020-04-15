#include "BerserkerState.h"

BerserkerState::BerserkerState(const std::string& name, int hp, int dmg)
    : State(name, hp, dmg) {};
BerserkerState::~BerserkerState() = default;;
