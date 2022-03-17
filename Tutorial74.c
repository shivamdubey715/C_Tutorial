#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#define pi 3.14

int edistance(int x1, int x2, int y1, int y2)
{
    
    scanf("%d %d %d %d", &x1, &x2, &y1, &y2);
    int a = (x2 - x1)*(x2 - x1) + (y2 - y1)*(y2 - y1);
    return sqrt(a);
}