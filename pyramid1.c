#include <stdio.h>
int main()
{
 int i,j,n,s,x,y;
 printf("Enter the number of rows:");
 scanf("%d",&n);
 s=n;
 for(i=1;i<=n;i++){
 y=i-1;
 for(j=s;j>=1;j--)
 printf(" ");
 s--;
 for(x=1;x<=i;x++)
 printf("*");
 if(i>1){
 for(x=y;x>=1;x--)
 printf("*");
 }
 printf("\n");
 }
 return 0;
 }
