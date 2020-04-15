#include "WerewolfState.h"

WerewolfState::WerewolfState(const std::string& name, int hp, int dmg)
    : State(name, hp, dmg) {};
WerewolfState::~WerewolfState() {};
