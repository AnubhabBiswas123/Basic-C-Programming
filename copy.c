#include <stdio.h>
int main()
{
 char a[100],b[100];
 printf("Enter the first and the second string:");
 scanf("%s %s",a,b);
 int i=0;
 int count=0;
 while(b[i]!='\0')
 {
 count++;
 i++;
 }
 i=0;
 while(b[i]!='\0')
 {
  a[i]=b[i];
  i++;
 }
 printf("The strings after getting copied are:"); 
 for(i=0;i<count;i++)
 {
  printf("%c",a[i]);
 } 
 printf(" %s",b);
 return 0;
} 
