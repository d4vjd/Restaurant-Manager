#pragma once
#include <iostream>
#include <list>
#include "Product.h"
#include "Order.h"
#include "OrderDate.h"
using namespace std;

class Restaurant {
private:

    string restaurantName;
    int idRestaurant;
    list<Product> menuProductList;
    list<Order> orderList;

public:

    void setRestaurantName(string restaurantName);

    string getRestaurantName();

    int getIdRestaurant();

    list<Product> getProductList();

    void setProductList(Product p);

    void coutProductList();

    void coutMenu();

    void addToOrderList(Order c);

    list<Order> getOrderList();

    float coutTotalFromDate(OrderDate d);

    float coutTotalFromPeriod(OrderDate startDate, OrderDate endDate, string clientName);

    void a(OrderDate startDate, OrderDate endDate, string clientName);

    Restaurant();
};