#include "Order.h"

Order::Order() {

}

int Order::getIdOrder() {
    return idOrder;
}

void Order::coutOrder() {
    cout << "Client " << c.getClientName() << " has ordered: " << endl;
    for (auto product : orderProductsList) {
        product.coutProduct();
    }
    cout << "On: " << d.getDay() << "." << d.getMonth() << "." << d.getYear() << " at: " << d.getHour() << ":" << d.getMinute() << endl;
    cout << "Order total is: " << getTotalOrder() << " $" << endl << " " << endl;
}

void Order::placeOrder(list<Product> menu) {
    string day, month, year, hour, minute, name;
    int id;
    cout << "Please type client name: ";
    cin >> name;
    c.setClientName(name);
    totalOrder = 0;
    orderProductsList.clear();
    do {
        cout << "Introduce the id of the desired product or 0 to place the order " << endl;
        cin >> id;
        for (auto product : menu) {
            if (product.getId() == id) {
                orderProductsList.push_back(product);
                totalOrder = totalOrder + product.getPrice();
            }
        }
    } while (id != 0);

    cout << "Introduce the date and time of the order " << endl;
    cin >> day;
    d.setDay(day);
    cin >> month;
    d.setMonth(month);
    cin >> year;
    d.setYear(year);
    cin >> hour;
    d.setHour(hour);
    cin >> minute;
    d.setMinute(minute);
    idOrder++;
}

float Order::getTotalOrder() {
    return this->totalOrder;
}

bool Order::verifyDate(OrderDate d2) {
    if (stoi(d2.getYear()) != stoi(d.getYear()))
        return false;
    if (stoi(d2.getMonth()) != stoi(d.getMonth()))
        return false;
    if (stoi(d2.getDay()) != stoi(d.getDay()))
        return false;
    return true;
}

bool Order::verifyPeriod(OrderDate startDate, OrderDate endDate) {
    int start, date, end;
    start = stoi(startDate.getYear() + startDate.getMonth() + startDate.getDay());
    end = stoi(endDate.getYear() + endDate.getMonth() + endDate.getDay());
    date = stoi(d.getYear() + d.getMonth() + d.getDay());
    if (start < date && date < end)
        return true;
    return false;

    //another way to verify if date is in the selected period:
    /*if (stoi(startDate.getYear()) > stoi(d.getYear()) || stoi(d.getYear()) > stoi(endDate.getYear()))
        return false;
    if (stoi(startDate.getMonth()) > stoi(d.getMonth()) && stoi(d.getYear()) == stoi(startDate.getYear()))
        return false;
    if (stoi(d.getMonth()) > stoi(endDate.getMonth()) && stoi(d.getYear()) == stoi(endDate.getYear()))
        return false;
    if (stoi(startDate.getDay()) > stoi(d.getDay()))
        return false;
    if (stoi(endDate.getMonth()) == stoi(d.getMonth()) && stoi(endDate.getHour()) < stoi(d.getDay()))
        return false;
    return true;*/
}

Client Order::getClient() {
    return c;
}