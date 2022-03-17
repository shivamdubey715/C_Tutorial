// #include <stdio.h>

// int jumpTo(int arr[], int n)
// {
//     int count = 0, jump = 0;

//     // if (arr[0] == 0)
//     // {
//     //     return 0;
//     // }
//     // if (arr[0] > n - 1)
//     // {
//     //     return 1;
//     // }
//     for (int i = 0; i < n; i++)
//     {

//         if (jump <= i)
//         {
//             if (i + arr[i] >= jump)
//             {
//                 jump = i + arr[i];

//                 count++;

//                 if (arr[i] >= n - i - 1)
//                 {
//                     return count;
//                     break;
//                 }
//                 // if (arr[i] == 0)
//                 // {
//                 //     return -1;
//                 // }
                
//             }
//         }
//     }
// }
// int main()
// {
//     int n;
//     scanf("%d", &n);
//     int arr[n];
//     for (int i = 0; i < n; i++)
//     {
//         scanf("%d", &arr[i]);
//     }
//     printf("%d\n", jumpTo(arr, n));

//     return 0;
// }


#include <stdio.h>

int geekonacci(int a, int b, int c, int n) {
    if(n == 1) {
        return 1;
    }
    if(n == 2) {
        return 3;
    }
    if(n == 3) {
        return 2;
    }
    int ans = geekonacci(a, b, c, n - 1) + geekonacci(a, b, c, n - 2) + geekonacci(a, b, c, n - 3);
    return ans;
}
int main() {
	//code
	int a, b, c, n, num;
	scanf("%d", &num);
	while(num != 0) {
	    scanf("%d%d%d%d", &a, &b, &c, &n);
	    printf("%d\n", geekonacci(a, b, c, n));
	}
	
	return 0;
}