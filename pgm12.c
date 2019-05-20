#include<stdio.h>
void main()
{
int i,n,n1,rem,rev=0;
scanf("%d",&n);
n1=n;
for(i=0;n>0;i++)
{
rem=n%10;
rev=rev*10+rem;
n=n/10;
}
if(n1==rev)
printf("yes");
else
printf("no");
}
}
