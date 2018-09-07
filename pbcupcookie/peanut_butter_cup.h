#include "chocolate.h"
#include "peanut.h"

class PeanutButterCup {
public:
    PeanutButterCup(Chocolate& c, Peanut& p);
private:
    Chocolate c_;
    Peanut p_;
};
