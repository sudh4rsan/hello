#include <stdio.h>
void main()
{
char s[100],*a;
int i,j,k,l,len=0,len2,flag=1,temp;
scanf("%s",s);
a=s;
while(*a!='\0'){
len++;
a++;
}
len2=len;
for(i=1;i<len2;i++){
a=s;
for(j=1;j<=i;j++){
temp=len/2;
flag=1;
 for(k=0,l=len-1;k<temp;k++,l--) {
  if(a[k]!=a[l])
  {
  flag=0;
  }}
 if(flag==1)
 break;
 a++;
}
if(flag==1)
break;
len--;
}
for(i=0;i<len;i++){
printf("%c",a[i]);
}}
