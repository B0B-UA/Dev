#include <iostream>
#include "Unit.h"

int main() {
    Unit man("Bob", 80, 50);
    Unit zombie("GGG",100, 400);

    std::cout << "Human - " << man << "\n";
    std::cout << "Zombie - " <<  zombie << "\n";
    
    
    man.attack(zombie);
    zombie.attack(man);
    
    man.addHitPoints(60);
    zombie.addHitPoints(60);
    // man.attack(zombie);
    
    // zombie.attack(man);
    man.attack(zombie);
    zombie.attack(man);
    
    std::cout << "Human - " << man << "\n";
    std::cout << "Zombie - " <<  zombie << "\n";
    return 0;
}