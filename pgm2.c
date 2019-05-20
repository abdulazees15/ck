#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
int main()
{
   int b;
    scanf("%d",&b);
   if(isdigit(b)==1)
   {
   if(b%2==0)
    {
    printf("Even");
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
