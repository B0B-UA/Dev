#include "WizardState.h"

WizardState::WizardState(const std::string& name, int hp, int dmg)
    : State(name, hp, dmg) {};
WizardState::~WizardState() {};