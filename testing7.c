#include <stdio.h>
int factorial(int);
int main()
{
 int n;
 printf("Enter the number:");
 scanf("%d",&n);
 int c=factorial(n);
 printf("The factorial of the number is %d",c);
 return 0;
 }
 int factorial(int n)
 {
  if(n==0)
  return 1;
  return n*factorial(n-1);
 }
 
