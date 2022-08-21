#include<stdio.h>
void main()
{
float weight,height,bmi;
printf("Enter weight (kg) and height (m)");
scanf("%f%f",&weight,&height);
bmi=weight/(height*height);
printf("bmi: %f",bmi);
bmi<18.5?printf("น้ำหนักต่ำกว่าเกณฑ์"):(bmi<25)?printf("ปกติ"):(bmi<30)?printf("สูงกว่ามาตรฐาน"):printf("อ้วนเกินไป");
}