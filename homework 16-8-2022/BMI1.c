#include <stdio.h>
int main(void)
{
float Weight,Height,BMI;
printf("Enter height (m) :\n");
scanf("%f",&Height);
printf("Enter weight (kg) :\n");
scanf("%f",&Weight);
BMI = Weight / (Height*Height);
printf("BMI = %f\n", BMI);
if(BMI < 18.5)
{
    printf("น้ำหนักต่ำกว่าเกณฑ์");
}
else if(BMI >=18.5 && BMI <=24.9)
{
    printf("ปกติ");
}
else if(BMI >= 25.0 &&BMI <=29.9)
{
    printf("สูงกว่ามาตรฐาน");
}
else if(BMI >=30.0)
{
    printf("อ้วนเกินไป");
}
return 0;
}