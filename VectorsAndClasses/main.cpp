#include <iostream>
#include "person.h"

int main() {
    std::string name;
    std::cout << "Enter your name: ";
    std::getline(std::cin, name);

    Person player(name);

    std::cout << "Enter your items (type 'done' to finish):\n";
    std::string item;
    while (true) {
        std::cout << "> ";
        std::getline(std::cin, item);
        if (item == "done") break;
        player.addToInventory(item);
    }

    player.printInventory();

    return 0;
}

