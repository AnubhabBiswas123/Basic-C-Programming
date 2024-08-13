#include <stdio.h>
#include <string.h>
int main()
{
 char a[100],b[100];
 printf("Enter the string:");
 scanf("%s %s",a,b);
 printf("The difference is %d",strcmp(a,b));
 return 0;
 }
