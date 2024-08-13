#include <stdio.h>
int main()
{
 int a[10000],i,j,n,s;
 printf("Enter the number:");
 scanf("%d",&n);
 printf("Enter all the values of the array:");
 for(i=0;i<n;i++)
 {
  scanf("%d",&a[i]);
 }
 for(i=0;i<n;i++)
 {
  s=0;
  for(j=0;j<n;j++)
  {
   if(a[i]==a[j])
   s++;
  }
  if(s>1)
  printf("%d ",a[i]);
  } 
  if(s==1)
  printf("\nThere are no duplicate numbers");
  else
  printf("\nAll the duplicate numbers have been displayed");
  return 0;
 } 
