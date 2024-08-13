#include <stdio.h>
#include <math.h>
int main()
{
 int i,range,res,q,rev,s;
 rev=0;
 printf("Enter the range:");
 scanf("%d",&range);
 printf("All the palindrome numbers within the given range are:");
 for(i=1;i<=range;i++){
 res=i;q=0;rev=0;
 while(res!=0)
 {
  res=res/10;
  q++;}
  q--;
  res=i;
  while(res!=0)
  {
   s=res%10;
   rev=rev+s*(pow(10,q));
   res=res/10;
   q--;
  }
  if(rev==i)
  printf("\n%d",i);}
  return 0;}
  
