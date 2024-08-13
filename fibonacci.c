#include <stdio.h>
int main()
{
  int a,s,res,i,n;
  printf("Enter the number of terms:");
  scanf("%d",&n);
  a=0,s=1;
  printf("The fibonacci series upto the given no. of terms is:");
  for(i=1;i<=n;i++)
  {
    if(i==1)
    printf("\n%d,",a);
    else if(i==2)
    printf("%d,",s);
    else
    {
      res=a+s;
      if(i==n)
      printf("%d",res);
      else
      printf("%d,",res);
      a=s;
      s=res;
    }
  }
  return 0;
}  
  
      
