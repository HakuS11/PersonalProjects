#ifndef PERSON_H
#define PERSON_H

#include <vector>
#include <string>

class Person {
    std::string name;
    std::vector<std::string> inventory;

public:
    Person(std::string new_name);
    ~Person();

    void addToInventory(std::string item);
    void removeFromInventory(std::string item);
    void printInventory() const;
};

#endif // PERSON_H
