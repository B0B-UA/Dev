#include <iostream>

#include "Gun.h"

int main() {
    Gun beretta;
    Gun colt("Colt", 10);

    
    std::cout << colt << std::endl;
    std::cout << beretta << std::endl;
    // std::cout << *magnum << std::endl;
    beretta.reload();
    beretta.prepare();
    beretta.prepare();

    beretta.shoot();

    //-----
    Gun *magnum = new Gun("Magnum", 6);
    magnum->reload();
    magnum->prepare();
    magnum->shoot();
    magnum->shoot();
    std::cout << *magnum << std::endl;
    //-----
    std::cout << colt << std::endl;
    std::cout << beretta << std::endl;
    return 0;
}