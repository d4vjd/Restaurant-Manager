#include "Restaurant.h"

void Restaurant::setRestaurantName(string restaurantName) {
    this->restaurantName = restaurantName;
}

string Restaurant::getRestaurantName() {
    return this->restaurantName;
}

int Restaurant::getIdRestaurant() {
    return Restaurant::idRestaurant;
}

list<Product> Restaurant::getProductList() {
    return this->menuProductList;
}

void Restaurant::setProductList(Product p) {
    menuProductList.push_back(p);
}

void Restaurant::coutProductList() {
    for (auto produs : menuProductList) {
        produs.coutProduct();
    }
}

void Restaurant::coutMenu() {
    cout << "The menu is:" << endl;
    coutProductList();
    cout << endl;

}

Restaurant::Restaurant() {
    this->restaurantName = "Test Restaurant";
    this->idRestaurant = 1;
}

void Restaurant::addToOrderList(Order c) {
    orderList.push_back(c);
}

float Restaurant::coutTotalFromDate(OrderDate d) {
    float total = 0;
    for (auto c : orderList) {
        if (c.verifyDate(d))
            total = total + c.getTotalOrder();
    }
    return total;
}

float Restaurant::coutTotalFromPeriod(OrderDate startDate, OrderDate endDate, string clientName) {
    float total = 0;
    for (auto c : orderList) {
        if (c.getClient().getClientName() == clientName)
            if (c.verifyPeriod(startDate, endDate))
                total = total + c.getTotalOrder();
            else cout << "Client has not placed any order in the selected period" << endl;
    }
    return total;
}

list<Order> Restaurant::getOrderList() {
    return orderList;
}