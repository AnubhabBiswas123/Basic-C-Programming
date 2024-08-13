#include <stdio.h>
int main()
{
 int a,b;
 printf("Enter the values of a and b:");
 scanf("%d %d",&a,&b);
 printf("\n%d",(a|b));
 printf("\n%d",(a&b));
 printf("\n%d",(~a));
 printf("\n%d",(~b));
 printf("\n%d",(a^b));
 printf("\n%d",(a<<2));
 printf("\n%d",(a>>2));
 return 0;
 }
 
