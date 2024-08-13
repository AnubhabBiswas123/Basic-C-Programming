#include <stdio.h>
int main()
{
 char a[100];
 int i=0;
 int count=0;
 printf("Enter the string:");
 scanf("%s",a);
 while(a[i]!='\0')
 {
  count++;
  i++;
 }
 printf("The length of the string is %d",count);
 return 0;
 } 
