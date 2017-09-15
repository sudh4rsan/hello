#include<stdio.h>
int main()
{
int a,b,c,n;
scanf("%d",&n);
a=n;
c=n%10;
if(n<=9)
{
printf("%d",n);
}else{
while(n>=10)
{
n/=10;
}
b=n;
printf("%d",b+c);
}return 0;
}
