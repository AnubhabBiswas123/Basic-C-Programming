#include <stdio.h>
#include <math.h>
int main()
{
 int no,res,q,rev,s;
 rev=0;
 printf("Enter a number:");
 scanf("%d",&no);
 res=no;q=0;
 while(res!=0)
 {
  res=res/10;
  q++;}
  q--;
  res=no;
  while(res!=0)
  {
   s=res%10;
   rev=rev+s*(pow(10,q));
   res=res/10;
   q--;
  }
  printf("The number after getting reversed is %d:",rev);
  return 0;} 
