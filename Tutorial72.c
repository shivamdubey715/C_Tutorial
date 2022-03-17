#include <stdio.h>
#include <stdlib.h>

int sum(int a, int b)
{
    return a + b;
}
int main()
{
    printf("The sum oof 1 and 2 is %d\n", sum(1, 2)); //Testing the function
    int (*fptr)(int, int);                            //Declaring a function pointer
    fptr = &sum;                                      //Creating a funtion pointer
    int d = (*fptr)(4, 6);                            //Dereferencing a function pointer
    printf("The of value d is %d\n", d);
    return 0;
}