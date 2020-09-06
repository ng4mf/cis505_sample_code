#ifndef FILE1_HPP
#define FILE1_HPP

#include "file2.hpp"

class F1 {
private:
	F2 f;
	int y;
public:
	F2& get_f();
};

#endif
