#include <stdio.h>
int main()
{
 int i,j,n,s,rev;
 rev=0;
 printf("Enter a number:");
 scanf("%d",&n);
 while(n!=0)
 {
  s=n%10;
  n=n/10;
  rev=rev*10+s;
 }
 printf("The reverse of the number is %d",rev);
 return 0;
 }
