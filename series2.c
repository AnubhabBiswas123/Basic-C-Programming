#include <stdio.h>
int main()
{
  int i,n,s;
  s=3;
  printf("Enter the no. of terms:");
  scanf("%d",&n);
  for(i=1;i<=n;i++)
  {
    printf("%d ",s);
    s=s+2;
  }
  return 0;
}    
