#include "OrderDate.h"

OrderDate::OrderDate() {

}

void OrderDate::setDay(string day) {
    this->day = day;
}

string OrderDate::getDay() {
    return this->day;
}

void OrderDate::setMonth(string month) {
    this->month = month;
}

string OrderDate::getMonth() {
    return this->month;
}

void OrderDate::setYear(string year) {
    this->year = year;
}

string OrderDate::getYear() {
    return this->year;
}

void OrderDate::setHour(string hour) {
    this->hour = hour;
}

string OrderDate::getHour() {
    return this->hour;
}

void OrderDate::setMinute(string minute) {
    this->minute = minute;
}

string OrderDate::getMinute() {
    return this->minute;
}