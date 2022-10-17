#include <stdio.h> 
#include <stdlib.h> 
 
int fac(int i) 
{ 
    if(i==0) 
    { 
        return 1; 
    } 
    else 
    { 
        return(fac(i-1)*i); 
    } 
} 
 
int main(void) 
{ 
    int i; 
    printf("Enter a num: "); 
    scanf("%d", &i); 
    printf("Factorial is: %d.", fac(i)); 
    return 0;
} 
