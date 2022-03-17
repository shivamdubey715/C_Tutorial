#include <stdio.h>

int main()
{
    printf("Lets learn about pointers\n");
    int a = 76;
    int *ptr2 = NULL;
    int *ptra = &a;
    printf("The address of pointer to a is %p\n", &ptra);
    printf("The address of some garbage is %p\n", 
    ptr2);

    printf("The value of a is %d\n", *ptra);
    
    return 0;
}
