#include "VampireState.h"

VampireState::VampireState(const std::string& name, int hp, int dmg)
    : State(name, hp, dmg) {};
VampireState::~VampireState() {};