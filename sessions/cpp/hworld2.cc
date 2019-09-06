#include <iostream>
#include "hworld2.hh"

void print_hworld() {
    std::cout << "Hello world" << std::endl;
}

int main (int argc, char *argv[]) {
    print_hworld();

    World w = World();
    std::cout << "There are " << w.human_count() << " humans in your world" << std::endl;

    return 1;
}
