#include <iostream>
#include "person.h"

int main() {
    std::string name;
    std::cout << "Enter your name: ";
    std::getline(std::cin, name);

    Person player(name);

    while (true) {
        std::cout << "\nOptions:\n";
        std::cout << "1. Add an item\n";
        std::cout << "2. Remove an item\n";
        std::cout << "3. Show inventory\n";
        std::cout << "4. Exit\n";
        std::cout << "Choose an option: ";

        int choice;
        std::cin >> choice;
        std::cin.ignore();  // To clear the newline character

        if (choice == 1) {
            std::cout << "Enter item to add: ";
            std::string item;
            std::getline(std::cin, item);
            
            if (!item.empty()) {
                player.addToInventory(item);
                std::cout << "\"" << item << "\" added to inventory.\n";
            } else {
                std::cout << "Item cannot be empty!\n";
            }
        } 
        else if (choice == 2) {
            std::cout << "Enter item to remove: ";
            std::string item;
            std::getline(std::cin, item);
            
            if (!item.empty()) {
                player.removeFromInventory(item);
            } else {
                std::cout << "Item cannot be empty!\n";
            }
        } 
        else if (choice == 3) {
            player.printInventory();
        } 
        else if (choice == 4) {
            std::cout << "Exiting program.\n";
            break;
        } 
        else {
            std::cout << "Invalid choice! Please select 1, 2, 3, or 4.\n";
        }
    }

    return 0;
}
