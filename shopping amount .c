#include<stdio.h>


int main()
{ 
int Membership;
float order,discount=0,delivery=0,payable;
    printf("\nEnter order amount:");
    scanf("%f",&order);
    printf("\nEnter membership(1 for permium,0 for regular): ");
    scanf("%d",&Membership);
 if(order>=500)
 {
  delivery=0;
  if(Membership==1)
  discount=order*0.10;
   else 
   discount=0;
   
   }
   else
   {delivery=50;
   discount=0;}
   payable=order-discount+delivery;
   printf("\n%f is the order amount",payable);
   
    return 0;
}