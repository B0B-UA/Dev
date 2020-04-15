#include "Paper.h"

Paper::Paper(int maxSymbols){
    this->maxSymbols = maxSymbols;
    this->symbols = maxSymbols;
}

Paper::~Paper() {}

int Paper::getMaxSymbols() const {
    return this->maxSymbols;
}

int Paper::getSymbols() const {
    return this->symbols;
}

void Paper::addContent(const std::string& message) {
    if ( maxSymbols >= symbols ) {
        this->content.append(message);
    }

    this->symbols -= message.length();

    if ( symbols < 0 ) {
        this->symbols = 0;
        throw OutOfSpace();
    }
}

void Paper::show() const {
    std::cout << content << std::endl;
}
