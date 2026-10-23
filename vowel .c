#include<stdio.h>
int main()
{ 
char A;
    printf("\nGiven character letter:");
    scanf("%c",&A);
 if(A=='a'||A=='e'||A=='i'||A=='o'||A=='u'||A=='A'||A=='E'||A=='I'||A=='O'||A=='U')
 printf("\n%c is a vowel",A);
 else 
 printf("\n%c is a consonent",A);
    return 0;
}