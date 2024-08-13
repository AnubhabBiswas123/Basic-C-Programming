//To find the GCD of two numbers
#include <stdio.h>
int hcf(int n1,int n2);
int main()
{
 int n1,n2;
 printf("Enter the first and the second number:");
 scanf("%d %d",&n1,&n2);
 int c=hcf(n1,n2);
 printf("The HCF of %d and %d is %d",n1,n2,c);
 return 0;
 }
 int hcf(int n1,int n2)
 {
 int max,min;
 if(n1>n2)
 {
 max=n1;
 min=n2;
 }
 if(n2>n1)
 {
 max=n2;
 min=n1;
 }
  n1=0;n2=0;
  if(max%min==0)
  return min;
  int c=hcf(min,max%min);
  }
  
  
   
