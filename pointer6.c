#include <stdio.h>
void reverse(int n, int *p);
int main()
{
 int n,a[10],i;
 printf("Enter the number:");
 scanf("%d",&n);
 printf("Enter the values of the array:");
 for(i=0;i<n;i++)
 scanf("%d",&a[i]);
 reverse(n,a);
 return 0;
 }
 void reverse(int n, int *p)
 {
  int i,temp;
  for(i=0;i<n/2;i++)
  {
  temp=p[n-i-1];
  p[n-i-1]=p[i];
  p[i]=temp;
  }
  for(i=0;i<n;i++)
  printf("%d",p[i]);
  }
