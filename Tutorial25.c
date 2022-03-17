#include <stdio.h>

int main()
{
    int num;
    printf("Enter the number of which ASCII value you want\n");
    scanf("%d", &num);
    printf("The ASCII value of %d is %c\n", num, num);
    
    return 0;
}
