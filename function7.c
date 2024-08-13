//To find the product of two numbers by recursion
#include <stdio.h>
int product(int n1, int n2);
int main()
{
 int n1,n2;
 printf("Enter the first and the second number:");
 scanf("%d %d",&n1,&n2);
 int c=product(n1,n2);
 printf("The product of the two numbers is %d",c);
 return 0;
 }
 int product(int n1, int n2)
 {
  if(n2==1)
  return n1;
  int productmn1=product(n1,n2-1);
  int productn=n1+productmn1;
  return productn;
 } 
