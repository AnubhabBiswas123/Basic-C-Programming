#include <stdio.h>
int main()
{
 int ch=64,s;
 int i,j,n;
 printf("Enter the no. of rows:");
 scanf("%d",&n);
 for(i=1;i<=n;i++)
 {
   s=i+ch; 
   for(j=1;j<=i;j++)
   {
     printf("%c",(char)s);
     s--;
   }
   printf("\n");
 }
 return 0;
}     
     
   
