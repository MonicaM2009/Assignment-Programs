#include<stdio.h>
int main()
{
float weight,height,BMI;
printf("\nEnter the weight in kg:");
scanf("%f",&weight);
printf("\nEnter the height in meter:");
scanf("%f",&height);

BMI=weight/(height * height);

printf("\nBMI=%f",BMI);
if(BMI<18.5)
printf("\n the BMI %f is of catagory:under weight",BMI);
else if(BMI>=18.5 && BMI<25)
printf("\n the BMI %f is of catagory:normal",BMI);
else if(BMI>=25 && BMI<30)
printf("\n the BMI %f is of category:over weight",BMI);
else 
printf("\n the BMI %f is of category:obese",BMI);
    return 0;
}