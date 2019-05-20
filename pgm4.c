#include<stdio.h>
#include<ctype.h>
int main()
{
char c;
scanf("%c",&c);
if(isalpha(c)==0)
{
    printf("Not Alphabet");
}
    else
 {
     printf("Alphabet");
 }   
    return 0;
}
