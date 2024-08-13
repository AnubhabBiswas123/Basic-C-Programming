#include <stdio.h>
#include <string.h>
int main()
{
 char a[100];
 int p;
 printf("Enter the string:");
 scanf("%s",a);
 p=strlen(a);
 printf("The length of the string is %d",p);
 return 0;
}
