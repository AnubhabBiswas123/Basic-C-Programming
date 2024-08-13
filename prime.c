#include <stdio.h>
int main()
{
  int i,no,s;
  printf("Enter a number:");
  scanf("%d",&no);
  s=0;
  for(i=1;i<=no;i++)
  {
   if(no%i==0)
   s++;
  }
  if(s==2)
  printf("This is a prime number");
  else
  printf("This is not a prime number");
  return 0;
}
