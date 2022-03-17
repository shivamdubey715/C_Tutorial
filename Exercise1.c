#include <stdio.h>

int main()
{
    int b, a;
    printf("Enter a number: \n");
    scanf("%d", &a);

    do {
        printf("a * b = %d\n", b);
        b = b + 1;
    } while (b < 11);

    return 0;
}
    