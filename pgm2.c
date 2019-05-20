#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
int main()
{
   int b;
   scanf("%d",&b);
if(isdigit(b)==0)
{
    if(b%2==0)
    {
    printf("even");
    }
    else
    {
        printf("Odd");
    }
}
else
printf("invalid");
    return 0;
}
