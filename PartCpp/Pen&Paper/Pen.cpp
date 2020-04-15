#include "Pen.h"
#include <cstring>

Pen::Pen(int inkCapacity) {
    this->inkCapacity = inkCapacity;
    this->inkAmount = inkCapacity;
}

Pen::~Pen() {}

int Pen::getInkAmount() const {
    return  this->inkAmount;
}

int Pen::getInkCapacity() const {
    return this->inkCapacity;
}

void Pen::write(Paper& paper, const std::string& message) {
    if ( inkAmount < 0) {
        inkAmount = 0;
        throw OutOfInk();
    }

    if ( message.length() > (inkAmount || paper.getSymbols()) ) {
        if ( inkAmount < paper.getSymbols() ) {
            paper.addContent(message.substr(0, inkAmount));
            inkAmount -= message.length();
        } else {
            inkAmount -= paper.getSymbols();
            paper.addContent(message.substr(0, paper.getSymbols()));
        }
    } else {
        inkAmount -= message.length();
        paper.addContent(message.substr(0, message.length()));
        
    }
}

void Pen::refill() {
    this->inkAmount = this->inkCapacity;
}
