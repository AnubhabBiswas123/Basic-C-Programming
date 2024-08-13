#include <stdio.h>
#include <stdlib.h>
int main()
{
 int n,m,i;
 int *ptr;
 printf("Enter the 1st size:");
 scanf("%d",&n);
 ptr=(int *)calloc(n,sizeof(int));
 printf("Enter the elements:");
 for(i=0;i<n;i++)
 scanf("%d",&ptr[i]);
 printf("Enter the 2nd size:");
 scanf("%d",&m);
 ptr=realloc(ptr,n+m);
 printf("Enter the elements:");
 for(i=n;i<n+m;i++)
 scanf("%d",&ptr[i]);
 for(i=0;i<n+m;i++)
 printf("%d",ptr[i]);
 return 0;
 }
 
