#pragma once
#include <iostream>
#include <list>
#include <string>
#include "Client.h"
#include "Product.h"
#include "OrderDate.h"
using namespace std;

class Order {
private:

    int idOrder;
    float totalOrder;
    list<Product> orderProductsList;
    Client c;
    OrderDate d;
public:

    Order();

    int getIdOrder();

    void coutOrder();

    void placeOrder(list<Product> menu);

    float getTotalOrder();

    bool verifyDate(OrderDate date);

    bool verifyPeriod(OrderDate startDate, OrderDate endDate);

    Client getClient();

};