// Product.cpp

#include "Product.h"

Product::Product(int id, const std::string& name, double price)
    : productId(id), productName(name), price(price) {}

int Product::getProductId() const {
    return productId;
}

const std::string& Product::getProductName() const {
    return productName;
}

double Product::getPrice() const {
    return price;
}
