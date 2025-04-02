#include <iostream>
#include "person.h"

Person::Person(std::string new_name) : name(new_name) {}

Person::~Person() {}

void Person::addToInventory(std::string item) {
    inventory.push_back(item);
}

void Person::removeFromInventory(std::string item) {
    auto it = std::find(inventory.begin(), inventory.end(), item);
    if (it != inventory.end()) {
        inventory.erase(it);
    }
}

void Person::printInventory() const {
    std::cout << name << "'s Inventory: ";
    for (const std::string& item : inventory) {
        std::cout << item << " ";
    }
    std::cout << std::endl;
}
