#include <stdio.h>
void table(int n);
int main()
{
 int n;
 printf("Enter the value:");
 scanf("%d",&n);
 table(n);
 return 0;
 }
void table(int n)
{
 for(int i=1;i<=n;i++)
 printf("%d\n",n*i);
 }
   

