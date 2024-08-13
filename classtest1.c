#include <stdio.h>
int main()
{
 int no,q,sum,s;
 printf("Enter a number:");
 scanf("%d",&no);
 q=no;
 sum=0;
 while(1)
 {
 sum=0;
 while(q!=0)
 {
  s=q%10;
  q=q/10;
  sum=sum+s;
 } 
 q=sum;
 if(sum/10==0)
 break;
 }
 printf("The sum of digits of the number is %d",sum);
 return 0;
}
 
