#include <iostream>
#include <algorithm>
#include "person.h"

Person::Person(const std::string& new_name) : name(new_name) {}

Person::~Person() {}

void Person::addToInventory(const std::string& item) {
    inventory.push_back(item);
}

void Person::removeFromInventory(const std::string& item) {
    auto it = std::find(inventory.begin(), inventory.end(), item);
    if (it != inventory.end()) {
        inventory.erase(it);
        std::cout << "Removed \"" << item << "\" from inventory.\n";
    } else {
        std::cout << "Item \"" << item << "\" not found in inventory.\n";
    }
}

void Person::printInventory() const {
    std::cout << name << "'s Inventory: ";
    if (inventory.empty()) {
        std::cout << "No items in inventory.";
    } else {
        for (const std::string& item : inventory) {
            std::cout << item << " ";
        }
    }
    std::cout << std::endl;
}
