#include<stdio.h>
#include<string.h>

int main(void)
{
    char strg[1000];
    int leng, n;

    printf("input  ");

    scanf( "%s", strg );

    leng = strlen(strg);


    for(n = leng - 1; n >= 0; n--) {
        printf("%c", strg[n]);
    }
    return 0;
}