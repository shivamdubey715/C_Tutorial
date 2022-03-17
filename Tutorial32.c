
#include<stdio.h>

void display(int *ptr) {
    printf("%d\n", *ptr);
}
//int sum(int arr[]) {//
    //int sum_of_array = 0;
   // for (int i = 0; i < 4; i++) {
  //      sum_of_array += arr[i];
  //  }
  //  return sum_of_array;

int main() {
    int arr[] = {1,2,3,4};
    for(int i = 0; i < 4; i++) {
        display(&arr[i]);
    
    //int result, array[] = {23,33,44,55};
    //result = sum(array);
    //printf("Result = %d\n", result);
    }
    return 0;
}
