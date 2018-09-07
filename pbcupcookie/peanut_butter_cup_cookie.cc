#include "peanut_butter_cup_cookie.h"
#include <iostream>

PeanutButterCupCookie::PeanutButterCupCookie
  (PeanutButterCup& pbc, Cookie& c) : pbc_(pbc), c_(c) {
    std::cout << "New PB Cup cookie created" << std::endl;
}
void PeanutButterCupCookie::eat() {
    is_eaten = true;
    std::cout << "Ate my cookie. Yum!" << std::endl;
}

PeanutButterCupCookie PeanutButterCupCookie::MakeCookie() {
    Chocolate ch;  Peanut p;
    PeanutButterCup pbc(ch, p);

    Sugar s; Eggs e;Butter b;
    Cookie c(s, e, b);

    PeanutButterCupCookie pb_cookie(pbc, c);

    return pb_cookie;
}

bool PeanutButterCupCookie::IsEaten() {
    return is_eaten;
}

int main() {
    Chocolate ch;
    Peanut p;
    PeanutButterCup pbc(ch, p);

    Sugar s;
    Eggs e;
    Butter b;
    Cookie c(s, e, b);

    PeanutButterCupCookie pb_cookie(pbc, c);
    pb_cookie.eat();
    return 0;

}
