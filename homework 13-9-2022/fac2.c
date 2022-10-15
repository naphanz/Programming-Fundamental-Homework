#include<stdio.h>
int main(){
  int i=1,fac=1,num;
 
  printf("Enter a num: ");
  scanf("%d",&num);
 
  while(i<=num){
      fac=fac*i;
      i++;
  }
 
  printf("Factorial of %d is: %d",num,fac);
  return 0;
}
