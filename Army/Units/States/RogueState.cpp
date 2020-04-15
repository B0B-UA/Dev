#include "RogueState.h"

RogueState::RogueState(const std::string& name, int hp, int dmg)
    : State(name, hp, dmg) {};
RogueState::~RogueState() = default;;
