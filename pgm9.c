#include <stdio.h>
void main()
{
int n,k,i,m[50],sum=0;
scanf("%d %d",&n,&k);
for(i=1;i<=5;i++)
scanf("%d",&m[i]);
for(i=1;i<=k;i++)
sum=sum+i;
printf("%d",sum);
}
