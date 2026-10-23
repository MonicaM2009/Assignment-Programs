#include<stdio.h>
int main()
{
int N;//N denotes number 
printf("Given number:");
scanf("%d",&N);
if(N>0)
printf("%d is positive number",N);
else if(N==0)
printf("%d the number is zero",N);
else
printf("%d is negative number",N);
return 0;
}