#pragma once
#include <iostream>
using namespace std;

class Product {
private:

    int idProduct;
    string productName;
    float price;

public:

    Product();

    void setId(int idProdus);

    int getId();

    void setProductName(string productName);

    string getProductName();

    void setPrice(float price);

    float getPrice();

    void coutProduct();

    void cinProduct();

};