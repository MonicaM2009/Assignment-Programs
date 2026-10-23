#include<stdio.h>
int main()
{
int M;//Mis marks
printf("\n Marks of the student:");
scanf("%d",&M);
if(M>=90 && M<=100)

printf("\n The student of %d marks gets a grade O",M);

else if(M>=80 && M<=89)
printf("\n The student with %d marks gets a grade A+",M);
else if(M>=70 && M<=79)
printf("\n The student with %d marks gets a grade A",M);
else if(M>=60 &&M<=69)
printf("\n The student with %d marks gets a grade B",M);
else if(M>=50 && M<=59)
printf("\n The student with %d marks gets a grade C",M);
else if(M<50 && M>=0)
printf("\n The student with %d marks gets fail",M);

else
printf("\n%d isInvalid marks",M);


    return 0;
}