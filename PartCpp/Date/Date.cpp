#include "Date.h"

Date::Date(int day, int month, int year): day(day), month(month), year(year) {
    int max = 31;

    // day

    if ( year % 2 == 0) {
        max = 30;
    }

    if (year%4 != 0 || year%100 == 0 && year%400 != 0) {
        if ( month == 2 ) {
            max = 28;
        }
    } else { 
        if ( month == 2 ) {
            max = 29;
        }
    }

    if ( day > max ) {
        throw InvalidDate("wrong DAY");
    }

    // month

    if ( month > 12 ) {
        throw InvalidDate("wrong MONTH");
    }

    // year

    if ( year < 0 ) {
        throw InvalidDate("wrong YEAR");
    }
}

Date::~Date(){}

int Date::getDay() const {
    return this->day;
}

int Date::getMonth() const {
    return this->month;
}

int Date::getYear() const {
    return this->year;
}

std::ostream& operator<<(std::ostream& out, const Date& date) {
    return out << date.getDay() << "." << date.getMonth() << "." << date.getYear();
}
