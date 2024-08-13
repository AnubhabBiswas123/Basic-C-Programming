#include <math.h>
#include <stdio.h>
int main()
{
  int a[10000],i,n,s;
  float Max,Min;
  printf("Enter the number:");
  scanf("%d",&n);
  printf("Enter all the values:");
  for(i=0;i<n;i++)
  {
    scanf("%d",&a[i]);
    if(i==1)
    {
   Max=a[0];
   Min=a[0];
    }
    else{
    Max=fmax(Max,a[i]);
    Min=fmin(Min,a[i]);
    }
  }
 printf("\nThe maximum value of the array is %f",Max);
 printf("\nThe minimum value of the array is %f",Min);
 return 0;
} 
