#include <stdio.h>
void main()
{
   int a,b,r=1;
  scanf("%d %d", &a,&b);
   while(b!=0)
    {
    r=r*a;
    b--;
    }
    printf("%d", r);
}
