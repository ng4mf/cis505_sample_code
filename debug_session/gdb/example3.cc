/* show how backtrace can help debugging */

// #define DEADLOOP

#include <iostream>
#include <assert.h>

using namespace std;

int step1(int n);
int step2(int n);
int step3(int n);
int step4(int n);

/*
int step_x(int n)
{
	// complex code here
	if (not step 4)
	{
		step_x+1(n);
	}
	else
	{
		cout << "The argument n is "<< n << endl;
	}
}
*/

int step1(int n)
{
    // complex code here
    step2(n);
}
#ifdef DEADLOOP
int step2(int n)
{
    // complex code here
    step2(n);
}
#else
int step2(int n)
{
    // complex code here
    step3(0);
}
#endif
int step3(int n)
{
    // complex code here
    step4(n);
}

int step4(int n)
{
    cout << "The argument n is " << n << endl;
}

int main()
{
    step1(505);
    cout << "All steps finished" << endl;
    return 0;
}