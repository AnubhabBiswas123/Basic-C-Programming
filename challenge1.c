#include <stdio.h>
int main()
{
 int p,t,i,j;
 float r,SI,amt;
 printf("Enter the principal, rate of interest and the time respectively:");
 scanf("%d %f %d",&p,&r,&t);
 for(i=1;i<=t;i++)
 {
  SI=(p*r*t)/100;
  amt=p+SI;
  p=amt;
 }
 printf("The required amount is Rs %f",amt); 
 return 0;
} 
