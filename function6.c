//To find the power of a number by recursion
#include <stdio.h>
int power(int n,int p);
int main()
{
 int n,p;
 printf("Enter the number and the power:");
 scanf("%d %d",&n,&p);
 int c=power(n,p);
 printf("The power of the number is %d",c);
 return 0;
 }
 int power(int n,int p)
 {
  if(p==0)
  return 1;
  int powernm1=power(n,p-1);
  int powern=n*powernm1;
  return powern;
 }
  
