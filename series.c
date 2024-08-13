#include <stdio.h>
int main()
{
  int j,n,s,i;
  printf("Enter the no. of terms:");
  scanf("%d",&n);
  s=0;
  for(i=1;i<=n;i++)
  {
    for(j=1;j<=i;j++)
    {
      s=s+j;
    }
  }
  printf("\nThe sum of the series upto the given no. of terms is %d:",s);
  return 0;      
}   
