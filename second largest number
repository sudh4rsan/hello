#include<stdio.h>
int main()
{
int a[10],n;
int first,second,i;
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
first=a[0];
for(i=0;i<n;i++)
{
if(a[i]>first)
{
first=a[i];
}}
second=a[0];
for(i=1;i<n;i++)
{
if(a[i]>second && a[i]<first)
second=a[i];
}
printf("%d",second);
}
