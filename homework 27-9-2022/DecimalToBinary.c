#include <stdio.h>
#include<stdlib.h>  
 
void main()
{  
int arr[100];
int x,i;    
 
scanf("%d",&x);  
int n= x;
 
for(i=0;x>0;i++)    
{    
arr[i] = x%2;    
x = x/2;    
}   
 
printf("binary : ");
for(i=i-1; i>=0; i--)    
printf("%d", arr[i]);    
}
