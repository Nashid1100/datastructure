#include<stdio.h>
void main()
{
int i,n,avg=0,sum=0;
printf("enter the range");
scanf("%d",&n);
int a[n];
printf("enter the numbers");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
sum=sum+a[i];
}
printf("sum is %d",sum);
avg=sum/n;
printf("average is %d",avg);
}
