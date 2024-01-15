// Product.h

#ifndef PRODUCT_H
#define PRODUCT_H

#include <string>

class Product {
private:
    int productId;
    std::string productName;
    double price;

public:
    Product(int id, const std::string& name, double price);

    int getProductId() const;
    const std::string& getProductName() const;
    double getPrice() const;
};

#endif
