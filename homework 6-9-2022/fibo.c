#include <stdio.h>
int main (void)
{
    int x,y,z,sum;
    x = y = z =1;
    sum = 0;
    while (z <= 4000000)
    {
        if(z % 2 == 0)
        {
            sum += z;
        }
        z = x + y;
        x = y;
        y = z;
    }
    printf("%d", sum);
}