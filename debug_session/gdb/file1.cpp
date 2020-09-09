#include <stdio.h>

#include "file1.hpp"
#include "file2.hpp"

F2& F1::get_f()
{
	return this->f;
}

int main() {
	F2* f = new F2();

	F2 f2;

	// const char* str = "vim is the best text editor\n";
	
	printf("Num is %d\n", f->get_f());
	printf("Num is %d\n", f2.get_f());
	printf("Num is %d\n", ((F2*)(f-f+1))->get_f());

	/* missing delete of "f" */

	/* DO NOT MIX C STYLE MEM FUNCTIONS WITH C++ STYLE ONES */
	/* DO CALL "delete f", BUT NOT free(f) */

	return 0;
}
