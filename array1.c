#include <stdio.h>
int main()
{
  int a[10000],n,i;
  float avg,total;
  printf("Enter the number:");
  scanf("%d",&n);
  total=0;
  printf("Enter the marks of a student:");
  for(i=0;i<n;i++)
  {
   scanf("%d",&a[i]);
   total=total+a[i];
  }
   avg=total/n;
   printf("The average of the array is %f",avg);
  return 0;
}   
