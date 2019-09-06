#ifndef HWORLD2_H_
#define HWORLD2_H_

#include <vector>

void print_hworld();

class World {
    private:
        std::vector<std::string> humans;

    public:
        int human_count() {
            return humans.size();
        };

        World() {
            humans = {"John", "Mary", "Yin"};
        };
};

#endif /* HWORLD2_H_ */
