#include <stdio.h>
#include <string.h>
int main()
{
 char a[100];
 printf("Enter the string:");
 scanf("%s",a);
 strrev(a);
 printf("The reverse of the string is %s",a);
 return 0;
}
 
