#include <iostream>

void say_hello();

class Person {
    private:
        std::string name;

    public:
        Person(std::string n): name(n) {}

        std::string say_name() {
            return name;
        }
};
