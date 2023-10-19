#include<stdio.h>
void main()
{
int i,j,m,n,p,k,c[50],a[100],b[100];
printf("enter the size of first array");
scanf("%d",&m);
printf("enter the elements of first array");
for(i=0;i<m;i++)
{
scanf("%d",&a[i]);
}
printf("enter the size of second array");
scanf("%d",&n);
printf("enter the elements of second array");
for(j=0;j<n;j++)
{
scanf("%d",&b[j]);
}
i=0;
j=0;
k=0;
while(i<m && j<n)
{
if(a[i]<b[j])
{
c[k]=a[i];
i++;
}
else
{
c[k]=b[j];
j++;
}
k++;
}
if(i>=m)
{
while(j<n)
{
c[k]=b[j];
j++;
k++;
}
}
if(j>=n)
{
while(i<m)
{
c[k]=a[i];
i++;
k++;
}
}
printf("after merging");
for(i=0;i<m+n;i++)
{
printf("\n %d",c[i]);
}
}


