// Main.cpp

#include "Product.h"
#include "Inventory.h"

int main() {
    Product laptop(1, "Laptop", 1200);
    Product smartphone(2, "Smartphone", 800);

    Inventory inventory;
    inventory.addProduct(laptop);
    inventory.addProduct(smartphone);

    inventory.displayInventory();

    return 0;
}
