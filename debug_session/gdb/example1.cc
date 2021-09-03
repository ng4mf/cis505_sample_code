/* step by step debugging */
/* printing values and addresses */

#include <stdio.h>
#define MYNAME "Yifan"
#define COURSE "cis505"


void print_msg(int maxbuf, const char* name, const char* course)
{
    char buf[maxbuf] = {0};
    int penn_id = 12345678;
    sprintf(buf, "My name is %s. I love %s soooooo much that I want to be a TA for that course!\n", name, course);
    printf("%s", buf);
    printf("This is the homework by Penn ID %d\n", penn_id);
}

int main()
{
    const int maxbuf = 48;
    print_msg(maxbuf, MYNAME, COURSE);
    return 0;
}