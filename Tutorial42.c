#include <stdio.h>

int b = 34; // The is the global variable since it is declared inside main()
int func1(int b1)
{
    static char myvar = 40;
    printf("The value of myvay is %d\n", myvar);
    myvar++;
    //printf("The value of b inside func1 is %d\n", b);
    //printf(" The address of b inside func1 is %d\n", &b);
    return b1 + myvar;
}
int main()
{
    int b = 344;
    //printf("The address of b inside main is %d\n", &b);
    int val = func1(b);
    val = func1(b);
    val = func1(b);
    val = func1(b);
    val = func1(b);
    val = func1(b);
    val = func1(b);
    int *ptr = &val;
    //printf("The value of func1 is %d\n", val);
    return 0;
}