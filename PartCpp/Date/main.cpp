#include <iostream>
#include "Date.h"

int main () {
    Date first(28, 2, 2009);
    Date *date;
    try{
        date = new Date(29, 2, 2010);
    } catch (InvalidDate e) {
        std::cout << e.text << std::endl;
        date = new Date(1, 2, 2009);
    }

    std::cout << first << "\n";
    std::cout << *date << "\n";
    return 0;
}