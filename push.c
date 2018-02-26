#include<stdio.h>
int main()
{
int ar[100],max,top=-1,choice=1,option,num;
printf("Enter the no of elements : ");
scanf("%d",&max);
while(choice)
{
printf("-----------stack options-----------------\n\npress 1. push \n  press 2.pop \n press 3.display \n press 0.quit stack\n\n enter your option : ");
scanf("%d",&option);
switch(option)
{
case 1: 
{

if(top==max-1)
{
printf("Oops...stack was full ! cant do this operation\n");
}
else
{
printf("Enter your number : ");
scanf("%d",&num);
top++;
ar[top]=num;
}
break;
}
case 2:
{
int num;
if ( top==-1)
{
printf("Oops...There's nothing in the stack to pop");
}
else
{
num=ar[top];
top--;
}
break;
}
case 3:
{
int i;
if(top==-1)
{
printf("Oops...There Nothing in stack to show up ");
}
else
{
for(i=top;i>=0;i--)
{
printf("the elements are \n %d \n",ar[i]);
}
}
break;
}
case 0 :
{
return 0;
break;
}
default :
{
printf ("Please enter valid input");
break;
}
}
printf("Do you want to continue stack\n press 1. continue\n press 0. Confirm quit\n\nenter your command:");
scanf("%d",&choice);
}
}

