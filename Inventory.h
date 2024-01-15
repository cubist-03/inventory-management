// Inventory.h

#ifndef INVENTORY_H
#define INVENTORY_H

#include <vector>
#include "Product.h"

class Inventory {
private:
    std::vector<Product> products;

public:
    void addProduct(const Product& product);
    void displayInventory() const;
};

#endif
