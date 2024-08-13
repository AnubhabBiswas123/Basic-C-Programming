#include <stdio.h>
int main()
{
  int i,j,n,s;
  printf("Enter the number of rows:");
  scanf("%d",&n);
  s=n-1;
  for(i=0;i<n;i++)
  {
    for(j=s;j>=0;j--)
    {
      printf("%d",j);
    }
    printf("\n");
    s--;
  }
  return 0;
}      

