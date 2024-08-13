#include <stdio.h>
int main()
{
 int i,j,n,x,s,q,rem,space;
 printf("Enter the number:");
 scanf("%d",&n);
 s=1;space=n+1;
 for(i=1;i<=n+1;i++)
 {
  q=s;
  for(j=space;j>=1;j--)
  printf(" ");
  for(x=1;x<=i;x++)
  {
    rem=q%10;
    q=q/10;
    printf("%d",rem);
    printf(" ");
  }
  printf("\n");
  s=s*11;
  space--;
 }
 return 0;
}    
 
