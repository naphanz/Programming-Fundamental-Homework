#include <stdio.h>
#include <stdlib.h>

int main()
{
    int r,i,j;
    printf("Enter the number : ");
    scanf("%d",&r);
     i=1;
     while(i<=r)
     {
            j=1;
     while(j<=r)
     {
        printf("*");
        j++;
     }
    printf("\n");
    i++;
    }
    return 0;
}
