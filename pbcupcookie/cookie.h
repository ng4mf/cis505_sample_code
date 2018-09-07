#include "sugar.h"
#include "eggs.h"
#include "butter.h"

class Cookie {
public:
    Cookie(Sugar& s, Eggs& e, Butter& b);

private:
    Sugar s_;
    Eggs e_;
    Butter b_;
};
