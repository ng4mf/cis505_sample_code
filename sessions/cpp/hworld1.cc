#include <iostream>
#include "hworld1.hh"

void memory(int argc) {
    int something[10];
    something[5] = 42;

    int *a = reinterpret_cast<int *>(malloc(argc * sizeof(int)));
    for (int i = 0; i < argc; ++i) {
        a[i] = i;
    }

    free(a);
}

int main(int argc, char *argv[]) {
    say_hello();

    Person new_p = Person("Bhabna");
    std::cout << "Our new friend's name is :" << new_p.say_name() << std::endl;

    memory(argc);

    return 1;
}

void say_hello() {
    std::cout << "Hello world" << std::endl;
}
