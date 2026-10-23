#include<stdio.h>
int main()
{
int A;
    printf("Given age of person:");
    scanf("%d",&A);
if(A>=18)
printf("\n%d aged person is eligible to vote",A); 
else
printf("\n%d aged person is not eligible to vote",A);   
    return 0;
}