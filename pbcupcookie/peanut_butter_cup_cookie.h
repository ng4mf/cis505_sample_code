#ifndef PEANUT_BUTTER_CUP_COOKIE_H
#define PEANUT_BUTTER_CUP_COOKIE_H

#include "peanut_butter_cup.h"
#include "cookie.h"

class PeanutButterCupCookie {
public:
    PeanutButterCupCookie(PeanutButterCup& pb, Cookie& c);
    void eat();
    PeanutButterCupCookie MakeCookie();
    bool IsEaten();
private:
    PeanutButterCup pbc_;
    Cookie c_;
    bool is_eaten = false;
};

#endif // PEANUT_BUTTER_CUP_COOKIE_H


