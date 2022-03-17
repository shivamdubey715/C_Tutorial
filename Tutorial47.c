#include <stdio.h>
#include <stdlib.h>

int main()
{

    /*int *ptr;
    int n;
    printf("Enter the size of the array you want to create\n");
    scanf("%d", &n);
    ptr = (int *)malloc(3 * sizeof(int));
    for (int i = 0; i < n; i++)
    {
        printf("Enter the value no %d of this title array%d\n", i);
        scanf("%d", &ptr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        printf("The value at %d of this array is %d\n", i, ptr[i]);
    }

    return 0;
}*/

    int *ptr;
    int n;
    printf("Enter the size of the array you want to create\n");
    scanf("%d", &n);
    ptr = (int *)calloc(n, sizeof(int));
    for (int i = 0; i < n; i++)
    {
        printf("Enter the value no %d of this title array%d\n", i);
        scanf("%d", &ptr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        printf("The value at %d of this array is %d\n", i, ptr[i]);
    }

    printf("Enter the size of the new array you want to create\n");
    scanf("%d", &n);

    ptr = (int *)realloc(ptr, n * sizeof(int));
    for (int i = 0; i < n; i++)
    {
        printf("Enter the value no %d of this title array%d\n", i);
        scanf("%d", &ptr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        printf("The new value at %d of this array is %d\n", i, ptr[i]);
    }
    free(ptr);

    return 0;


}
