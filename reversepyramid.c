#include <stdio.h>
int main()
{
  int i,j,n,x,y,z;
  printf("Enter the no. of rows:");
  scanf("%d",&n);
  y=1;
  for(i=n;i>=1;i--)
  {
    z=i-1; 
    for(j=1;j<=i;j++)
    {
      printf("%d",j);
    }
    if(z!=0){
    for(;z>=1;z--)
    printf("%d",z);}
    printf("\n");
    for(x=1;x<=y;x++)
    printf(" ");
    y++;
    
  }
  return 0;
 }     
