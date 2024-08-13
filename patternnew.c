#include <stdio.h> 
int main()
{
  int i,j,s,x,q,n,y;
  printf("Enter the no. of rows:");
  scanf("%d",&n);
  q=0;
  for(i=1;i<=n;i++)
  {
    q=0;s=2;
    for(j=1;j<=i;j++)
    {
     while(1)
     {
      q=0;
      for(x=1;x<=s;x++)
      {
       if(s%x==0)
       q++;
      }
      y=s;
      s++;
      if(q==2)
      break;
      }
      printf("%d ",y);
    }  
    printf("\n");
  }
  return 0;
}      
