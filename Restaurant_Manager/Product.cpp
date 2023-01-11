#include "Product.h"

Product::Product() {
    idProduct = 0;
}

void Product::setProductName(string productName) {
    this->productName = productName;
}

string Product::getProductName() {
    return this->productName;
}

void Product::setPrice(float price) {
    this->price = price;
}

float Product::getPrice() {
    return this->price;
}

void Product::coutProduct() {
    cout << idProduct << "." << productName << " costs " << price << endl;
}

void Product::cinProduct() {
    cin >> productName >> price;
}

void Product::setId(int idProduct) {
    this->idProduct = idProduct;
}

int Product::getId() {
    return idProduct;
}