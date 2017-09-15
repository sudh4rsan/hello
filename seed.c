#include<stdio.h>
int main()
{
int n,a,b,sum=0,mul;
scanf("%d", &n);
a=n;
while(a!=0)
{
b=a%10;
sum=sum+b;
a/=10;
}
mul=n*sum;
printf("%d\n",mul);
return 0;
}
