#include <stdio.h>
#include <string.h>
int main()
{
 char b[10];
 char a[]="KIIT";
 int n,i;
 n=strlen(a);
 for(i=0;i<n;i++)
 {
  b[i]=a[n-i];
 }
 printf("%s",b);
 return 0;
 } 
