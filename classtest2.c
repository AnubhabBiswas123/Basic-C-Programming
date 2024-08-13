#include <stdio.h>
int main()
{
 int i,j,x,y,n,s;
 printf("Enter the number of rows:");
 scanf("%d",&n);
 s=n;
 for(i=1;i<=n;i++)
 {
   for(j=s;j>=1;j--)
   printf(" ");
   for(x=i;x>=1;x--)
   printf("%d",x);
   if(i!=1)
   {
    for(y=2;y<=i;y++)
    printf("%d",y);
   }
   printf("\n");
   s--;
 }
 return 0;
}
    
