#include "Gun.h"

Gun::Gun(const std::string& model, int capacity) {
    this->model = model;
    this->amount = 0;
    this->capacity = capacity;
    this->isReady = false;
    this->totalShots = 0;
}

Gun::~Gun() {}

int Gun::getAmount() const {
    return this->amount;
}

int Gun::getCapacity() const {
    return this->capacity;
}

bool Gun::ready() const {
    return this->isReady;
}

const std::string& Gun::getModel() const {
    return this->model;
}

int Gun::getTotalShots() const {
    return this->totalShots;
}

void Gun::prepare() {
    if ( !this->isReady ) {
        this->isReady = !isReady;
    }
}

void Gun::reload() {
    this->amount = this->capacity;
}

void Gun::shoot() {
    if ( !this->ready() ) {
        throw NotReady();
    }
    if ( amount == 0 ) {
        throw OutOfRounds();
    }
    this->amount -= 1;
    this->totalShots += 1;
    std::cout << " BANG!!! " << std::endl;
}

std::ostream& operator<<(std::ostream& out, const Gun& gun) {
    return out << "Model - " << gun.getModel() << " ( Capacity - " << gun.getCapacity() << ", Amount - " << gun.getAmount() << " )";
}