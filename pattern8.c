#include <stdio.h>
int main()
{
  int i,j,n,s;
  printf("Enter the number of rows:");
  scanf("%d",&n);
  for(i=1;i<=n;i++)
  {
    if(i%2==0)
    {
      s=i;
      for(j=1;j<=i;j++)
      {
        printf("%d",s);
        s=s-1;
      }
    }
    else if(i%2==1)
    {
      for(j=1;j<=i;j++)
      {
        printf("%d",j);
      }
    }
    printf("\n");
  }
  return 0;
 }         
        
