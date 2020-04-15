#include "Fireball.h"


Fireball::Fireball(int cost, int magDmg): Spell(cost, magDmg) {};
Fireball::~Fireball() = default;;

void Fireball::cast(Unit *enemy, SpellCaster *attacker) {
	if (enemy->getState()->berserker){
	} else if(attacker->getState()->healer) {
		enemy->takeDmg(attacker->getMagDmg()/2);
	} else if(attacker->getState()->priest) {
		if (enemy->getState()->vampire || enemy->getState()->necromancer) {
				enemy->takeDmg(attacker->getMagDmg()*2);
			} else {
				enemy->takeDmg(attacker->getMagDmg()/2);
			}
	} else {
		enemy->takeDmg(attacker->getMagDmg());
	}
}
