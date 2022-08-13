#include <stdio.h>
void main ()
{
    int n,show,in;
    printf("Enter number");
    scanf("%d",&n);
    for(show=1;show<=n;++show)
    {
        for(in=1;in<=n;++in)
        {
            if(show==1 || show==n || in==1 || in==n)
            printf("*");
            else
            printf(" ");
        }
        printf("\n");
    }
}