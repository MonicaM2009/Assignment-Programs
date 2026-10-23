#include<stdio.h>
int main()
{
    int age,monthly_income,credit_score;
    printf("\nEnter customer age,monthly_income,credit_score:");
    scanf("%d %d %d",&age,&monthly_income,&credit_score);
    if(age>=21 && age<=60 && monthly_income>=25000 && credit_score>=700)
printf("\nthe customer of age %d,monthly_income %d,credit_score %d's loan is approved",age,monthly_income,credit_score);
else
printf("\nthe customer of age %d,monthly_income %d,credit_score %d's loan is rejected",age,monthly_income,credit_score);
    return 0;
}