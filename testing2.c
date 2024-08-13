#include <stdio.h>
#include <math.h>
int main()
{
 int i,j,n,s,q,count;
 int rev;
 rev=0;
 printf("Enter a number:");
 scanf("%d",&n);
 q=n;
 while(q!=0)
 {
 s=q%10;
 q=q/10;
 count++;
 }
 count--;
 while(n!=0)
 {
  s=n%10;
  n=n/10;
  rev=rev+pow(10,count)*s;
  count--;
 }
 printf("The reverse of the number is %d",rev);
 return 0;
 }
