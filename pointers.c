#include <stdio.h>

// //Get the value from void function, don't use int 
// // We use pointers here because void don't returns anything so we will get the the address from void using pointers
// void SumAvg(int i, int j, int* sum, float* avg) {
//     *sum = i + j;
//     *avg = (float)*sum / 2;
// }

// int main()
// {
//     int i = 3, j = 4, sum;
//     float avg;
//     SumAvg(i,j, &sum, &avg);
//     printf("%d\n", sum);
//     printf("%.2f\n", avg);
//     return 0;
// }


//Ex. 2
// int main()  {
//     int i = 345;
//     int *ptr;
//     int **ptr_ptr;
//     ptr = &i;
//     ptr_ptr = &ptr;
//     printf("%d\n", **ptr_ptr);
//     return 0;
// }

//Ex. 3
// void func1(int *num) {
//     *num = (*num) * 10;
// }
// int main() {
//     int num;
//     printf("Enter the number\n");
//     scanf("%d", &num);
//     func1(&num);
//     printf("Ten times of number is %d\n", num);
//     return 0;
// }