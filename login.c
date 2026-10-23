#include<stdio.h>
int main()
{
int id,password;
    printf("Enter user id,password:");
    scanf("%d %d",&id,&password);
if(id==101)
{ 
if(password==4321)
{
printf("login successfully");
}
else
{
printf("\n%dincorrect password",password);
}
}
else
{
printf("\n%d  user not found",id);

}
    return 0;
}