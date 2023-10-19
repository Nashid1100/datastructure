#include<stdio.h>
int stack[100],choice,top,i,x,n,f=0,e;
void push(void);
void pop(void);
void display(void);
void search(void);
int main()
{
top=-1;
printf("enter the size of the array");
scanf("%d",&n);
printf("\n stack operation using array");
printf("\n\t 1.push  2.pop  3.display 4.search 5.exit");
do
{
printf("\n enter your choice");
scanf("%d",&choice);
switch(choice)
{
case 1:
 push();
 break;
case 2:
 pop();
 break;
case 3:
 display();
 break;
case 4:
 search();
 break;
case 5:
 printf("exit");
break;
default:
printf("\n enter a valid choice ");
}
}
while(choice!=4);
return 0;
}
void push()
{
if(top>=n-1)
{
printf("stack overflow");
}
else
{
printf(" enter the value to be inserted ");
scanf("%d",&f);
top++;
stack[top]=f;
}
}
void pop()
{
if(top<=-1)
{
printf("stack is empty");
}
else
{
printf("%d is removed ",stack[top]);
top--;
}
}
void display()
{
printf("elements in stack are ");
for(i=top;i>=0;i--)
{
printf("\t %d",stack[i]);
}
}
void search()
{
printf("enter the element to search:");
scanf("%d",&e);
for(i=top;i>=0;i--)
{
if(stack[i]==e)
{
f=1;
break;
}
}
if (f==1)
{
printf("%d is found in stack at location %d",e,i);
}
else
{
printf("element is not found");
}
}



