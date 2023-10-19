#include<stdio.h>
void main()
{
int i,n,temp,j;
printf("enter the range");
scanf("%d",&n);
int a[n];
printf("enter the numbers");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n-1;i++)
{
for(j=0;j<n-1;j++)
{
if(a[j]>a[j+1])
{
temp=a[j];
a[j]=a[j+1];
a[j+1]=temp;
}
}
}
printf("the sorted array:\t");
for(i=0;i<n;i++)
{
printf("\t%d",a[i]);
}
}
