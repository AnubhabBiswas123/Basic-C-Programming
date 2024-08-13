#include <stdio.h>
int main()
{
 int i,j,n,s;
 printf("Enter the no. of rows:");
 scanf("%d",&n);
 s=n;
 for(i=1;i<=n;i++)
 {
  for(j=1;j<=s;j++)
  printf(" ");
  for(j=1;j<=i;j++)
  printf("*");
  if(i!=1)
  {
  for(j=i-1;j>=1;j--)
  printf("*");
  }
  printf("\n");
  s--;
  }
  return 0;
  }
  
  
