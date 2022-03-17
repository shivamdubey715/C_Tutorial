#include <stdio.h>

int main()
{
    int age, marks;
    printf ("Enter your age\n");
    scanf("%d", &age);

    printf ("Enter your marks\n");
    scanf("%d", &marks);

    switch (age)
    {
    case 3:
        printf("The age is 3\n");
        switch (marks)
        {
        case 45:        
            printf("Your marks are 45\n");
            break;
        
        default:
        printf("Your age is not 45\n");
            break;
        }
        break;

    default:
    printf("Age is not 3, or 23\n");
        break;
    }
    return 0;
}
