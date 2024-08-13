#include <stdio.h>
#include <string.h>
int main()
{
 char a[100],b[100];
 printf("Enter the string:");
 scanf("%s %s",a,b);
 strcpy(a,b);
 printf("The first and the second string are %s and %s",a,b);
 return 0;
} 
