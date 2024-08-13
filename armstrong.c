#include <math.h>
#include <stdio.h>
int main()
{
  int no,s,res,rev;
  printf("Enter a number:");
  scanf("%d",&no);
  res=no;rev=0;
  while(res!=0)
  {
    s=res%10;
    rev=rev+pow(s,3);
    res=res/10;
  }
  if(rev==no)
  printf("This is a armstrong number");
  else
  printf("This is not a armstrong number");
  return 0;
}    
    
