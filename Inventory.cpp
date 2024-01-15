// Inventory.cpp

#include "Inventory.h"
#include <iostream>

void Inventory::addProduct(const Product& product) {
    products.push_back(product);
}

void Inventory::displayInventory() const {
    std::cout << "Inventory:\n";
    for (const auto& product : products) {
        std::cout << "Product ID: " << product.getProductId() << "\n";
        std::cout << "Product Name: " << product.getProductName() << "\n";
        std::cout << "Price: $" << product.getPrice() << "\n\n";
    }
}
