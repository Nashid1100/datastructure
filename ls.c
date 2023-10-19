#include<stdio.h>
void main()
{
int i,n,key,flag=0;
printf("enter the range");
scanf("%d",&n);
int a[n];
printf("enter the numbers");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
printf("enter the number to be searched");
scanf("%d",&key);
for(i=0;i<n;i++)
{
if(a[i]==key)
{
flag=1;
break;
}
else
{
flag=0;
}
}
if (flag==1)
{
printf("the number is found at%d",i);
}
else
{
printf("the number is not found");
}
}
