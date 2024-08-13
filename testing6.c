#include <stdio.h>
int main()
{
 int i,j,n;
 char a='A';
 char p;
 printf("Enter the number of rows:");
 scanf("%d",&n);
 for(i=1;i<=n;i++)
 {
 p=a;
  for(j=1;j<=n;j++)
  {
   printf("%c",p);
   p--;
  }
  a++;
  printf("\n");
   }
   return 0;
   }
