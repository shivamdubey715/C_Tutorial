#include <stdio.h>
#include <conio.h>
#include <math.h>


int main()
{
  int a, b, c, p, n;
  float area;
  scanf("%d%d%d", &a, &b, &c);
  // scanf("%d", n);
  // for (int i = 1; i <= n; n++)
  // {
  //     scanf("%d%d%d", &a, &b, &c);
  // }
  p = (a + b + c) / 2;
  area = sqrt(p * (p - a) * (p - b) * (p - c));
  printf("%f\n", area);
  // for (int j = 1; j <= n; j++)
  // {
      
  // }
  
  
  return 0;
}