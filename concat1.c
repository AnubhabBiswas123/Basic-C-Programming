#include <stdio.h>
#include <string.h>
int main()
{
 char a[100],b[100];
 printf("Enter the first and the second string:");
 scanf("%s %s",a,b);
 strcat(a,b);
 printf("The strings after concatenation are %s and %s",a,b);
 return 0;
} 
