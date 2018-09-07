#include "peanut_butter_cup.h"
#include <iostream>

PeanutButterCup::PeanutButterCup(Chocolate& c, Peanut& p) : c_(c), p_(p) {
    std::cout << "Peanut Butter Cup created." << std::endl;
		p_.depend_func();
}
