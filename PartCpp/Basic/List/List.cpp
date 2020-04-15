#include "List.h"
#include <iostream>

List::List(int capacity, double multiplier) : capacity(capacity), current(0), multiplier(multiplier) {
    array = (int *)malloc(capacity * sizeof(int));

    if (array == NULL)
    {
        throw OutOfMemoryException();
    }
}

List::~List() {
    free(array);
}

int List::size() const {
    return this->current;
}

int List::max_size() const {
    return this->capacity;
}

void List::erase(int index) {
    if ( index > this->size() ) {
        throw ZeroLenException();
    }

    for ( int i = index; i < this->size(); i++ ) {
        this->array[i] = array[i+1];
    }
    this->current -= 1;
}

void List::insert(int value, int index) {
    int newCurrent = current + 1;

    if ( newCurrent > capacity ) {
        int newCapacity = capacity*multiplier;
        int *newarray = (int*)realloc(array, newCapacity * sizeof(int));

        if (newarray == NULL) {
            throw OutOfMemoryException();
        }
        capacity = newCapacity;
        array = newarray;
    }
    for ( int i = this->size(); i > index; i-- ) {
        array[i] = array[i-1];
    }
    array[index] = value;
    this->current = newCurrent;
}

int List::find(int value) const {
    for ( int i = 0; i < this->size(); i++ ) {
        if ( value == array[i] ) {
            return value;
        }
    }
    return -1;
}

void List::push_back(int value) {
    int newCurrent = current + 1;

    if ( newCurrent > capacity )
    {
        int newCapacity = capacity * multiplier;
        int *newArray = (int *)realloc(array, newCapacity * sizeof(int));

        if ( newArray == NULL )
        {
            throw OutOfMemoryException();
        }

        this->capacity = newCapacity;
        this->array = newArray;
    }

    this->array[current] = value;
    this->current = newCurrent;
}

int List::pop_back() {
    if ( current == 0 )
    {
        throw ZeroLenException();
    }
    current -= 1;
    return this->array[current];
}

void List::sort() {
    for ( int i = size(); i > 0; i-- ) {
        for ( int j = 1; j < i; j++ ) {
            if ( array[j-1] > array[j] ) {
                int buf = array[j-1];
                
                array[j-1] = array[j];
                array[j] = buf;
            }
        }
    }
}

int List::operator[](int index) const {
    return array[index];
}

bool List::operator==(const List &other) const {
    if (this->size() != other.size()) {
        return false;
    }
    else
    {
        for (int i = 0; i < this->size(); i++)
        {
            if (this->array[i] != other.array[i]) {
                return false;
            }
        }
    }
    return true;
}

bool List::operator!=(const List &other) const {
    return !operator==(other);
}

std::ostream &operator<<(std::ostream &out, const List &list) {
    int last = list.size() - 1;

    for (int i = 0; i < last; i++)
    {
        out << list[i] << ' ';
    }
    out << list[last];
    return out;
}