#include <stdio.h>

int main()
{
    // printf("Hello World\n");
    int marks[2][4] = {{45, 234, 2, 3},
                       {3, 2, 3, 3}};
    /*marks[0] = 34;
    printf("Marks of student is %d\n", marks[0]);
    marks[0] = 4;
    printf("Marks of student 1 is %d\n", marks[0]);
    
   for (int i = 0; i < 4; i++)
   {
       printf("Enter the value of %d element of the array\n", i);
       scanf("%d", &marks[i]);
   }
   */

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            //printf("The value of %d, %d element of the array is %d\n", i, j, marks[i][j]);
            printf("%d ", marks[i][j]);
        }
        printf("\n");
    }

    return 0;
}
