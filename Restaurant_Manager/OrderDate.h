#pragma once
#include <iostream>
using namespace std;

class OrderDate {

private:

    string day, month, year, hour, minute;

public:

    OrderDate();

    void setDay(string day);

    string getDay();

    void setMonth(string month);

    string getMonth();

    void setYear(string year);

    string getYear();

    void setHour(string hour);

    string getHour();

    void setMinute(string minute);

    string getMinute();
};
