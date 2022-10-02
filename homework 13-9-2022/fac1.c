#include<stdio.h>  
int main()    
{    
 int i,fac=1,num;    
 printf("Enter a num: ");    
  scanf("%d",&num);    
    for(i=1;i<=num;i++){    
      fac=fac*i;    
  }    
  printf("Factorial of is: %d",fac);    
return 0;  
}   