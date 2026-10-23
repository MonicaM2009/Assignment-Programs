#include<stdio.h>
int main()
{ 
float L,B,A,P;
//l is length,b is brrath,A is area,P is perimeter 
printf("\nGiven length,breadth:");
scanf("%f %f",&L,&B);
A=L*B;
printf("\n%f is the area of rectangle",A);
P=2*(L+B);
printf("\n%f is the perimeter of rectangle",P);

    return 0;
}