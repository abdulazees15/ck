#include<stdio.h>
void main()
{
    int a,n,d,i,t=0;
    scanf("%d %d %d",&n,&a,&d);
   for(i=0;i<n;i++) 
   {
       t+=a;
        a = a +d;
   }
   printf("%d",t);
}
