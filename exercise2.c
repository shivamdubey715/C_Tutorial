#include <stdio.h>

int main()
{
    int rows, type;
    printf("How many rows do you want?\n");
    scanf("%d", &rows);
    printf("Enter 0 for star pattern and 1 for reversed star pattern\n");
    scanf("%d", &type);

    switch (type)
    {
    case 0:
    {
        for (int i = 0; i < rows; i++)
        {
            for (int j = 0; j <= i; j++)
            {
                printf("*");
            }
            printf("\n");
        }
    }
    break;

    case 1:
    {
        for (int i = 0; i < rows; i++)
        {
            for (int j = 0; j <= rows - i - 1; j++)
            {
                printf("*");
            }
            printf("\n");
        }
    }

    default:
        break;
    }
    return 0;
}
