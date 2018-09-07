#include "peanut.h"

#include <iostream>

Peanut::Peanut() {
    std::cout << "Picked some peanuts." << std::endl;
}

void Peanut::depend_func() {
	std::cout << "Dependent function called." << std::endl;
}
