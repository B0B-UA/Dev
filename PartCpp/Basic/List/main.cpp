#include <iostream>

#include "List.h"



int main() {

    
    
    List a (100, 1.05);
    for ( int i = 0; i <= 10; i++ ) {
        a.push_back(i);
    }

    a.erase(2);
    a.insert(777, 7);
    a.pop_back();
    a.sort();
    
    List b (100, 1.05);
    b.push_back(3);


    // for ( int i = 0; i < a.size(); i++ ) {
    //     std::cout << a[i] << std::endl;
    // }

    std::cout << "Size Max (a) = " << a.max_size() << std::endl;
    std::cout << "Size (a)= " << a.size() << std::endl;
    std::cout << "Find in list a = " << a.find(5) << std::endl;
    std::cout << a << " == " << b << ", " << (a == b) << std::endl;
    std::cout << a << " != " << b << ", " << (a != b) << std::endl;
    return 0;
}