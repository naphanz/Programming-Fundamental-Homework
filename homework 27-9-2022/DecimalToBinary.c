#include <stdio.h>
 
int main()
{
  int x, y, k;
 
  printf("Enter an integer\n");
  scanf("%d", &x);
 
  printf("%d in binary :\n", x);
 
  for (y = 31; y >= 0; y--)
  {
    k = x >> y;
 
    if (k & 1)
      printf("1");
    else
      printf("0");
  }
 
  printf("\n");
 
  return 0;
}