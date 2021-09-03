/* show how backtrace can help debugging */

#include <iostream>
#include <assert.h>

using namespace std;

void error_msg()
{
    cout << "There is an error!" << endl;
}

int very_complex_correct_code()
{
    return 0;
}

int very_complex_buggy_code()
{
    int *a = NULL;
    cout << *a << endl;
    return 0;
}

int step1();
int step2();
int step3();
int step4();

/*
int step_x()
{
    very_complex_code();
    return step_x+1();
}
*/

int step1()
{
    int result = very_complex_correct_code();
    if (result < 0)
    {
        error_msg();
        return -1;
    }
    return step2();
}

int step2()
{
    int result = very_complex_correct_code();
    if (result < 0)
    {
        error_msg();
        return -1;
    }
    return step3();
}

int step3()
{
    int result = very_complex_buggy_code();
    if (result < 0)
    {
        error_msg();
        return -1;
    }
    return step4();
}

int step4()
{
    int result = very_complex_correct_code();
    if (result < 0)
    {
        error_msg();
        return -1;
    }
    return 0;
}

int main()
{
    step1();
    cout << "All steps finished" << endl;
    return 0;
}