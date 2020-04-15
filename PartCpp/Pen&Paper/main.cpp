#include <iostream>
#include <cstring>
#include "Pen.h"
#include "Paper.h"


int main() {
    Pen pen(35);
    Paper paper(40);
    std::string message1 = "Some text bla bla bla!!!";
    std::string message2 = "1234567890";
    std::cout << pen.getInkAmount() << "-ink-" << pen.getInkCapacity() << "\n";
    std::cout << paper.getSymbols() << "-symb-" << paper.getMaxSymbols() <<"\n";
    pen.write(paper, message1);
    pen.write(paper, message2);
    pen.refill();
    pen.write(paper, message2);
    paper.show();
    std::cout << pen.getInkAmount() << "-ink-" << pen.getInkCapacity() << "\n";
    std::cout << paper.getSymbols() << "-symb-" << paper.getMaxSymbols() <<"\n";
    
    return 0;
}