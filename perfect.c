#include <stdio.h>
int main()
{
  int no,i,s;
  printf("Enter a number:");
  scanf("%d",&no);
  s=0;
  for(i=1;i<no;i++)
  {
    if(no%i==0)
    s=s+i;
  }
  if(s==no)
  printf("This is a perfect number");
  else
  printf("This is not a perfect number");
  return 0;
}  
