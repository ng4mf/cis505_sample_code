#include "cookie.h"
#include <iostream>

Cookie::Cookie(Sugar& s, Eggs& e, Butter& b) : s_(s), e_(e), b_(b) {
    std::cout << "Cookie is warm and ready" << std::endl;
}
