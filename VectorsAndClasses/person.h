#ifndef PERSON_H
#define PERSON_H

#include <vector>
#include <string>

class Person {
    std::string name;
    std::vector<std::string> inventory;

public:
    Person(const std::string& new_name);
    ~Person();

    void addToInventory(const std::string& item);
    void removeFromInventory(const std::string& item);
    void printInventory() const;
};

#endif // PERSON_H
