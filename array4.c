#include <stdio.h>
int main()
{
 int a[10000],i,n,max,min;
 printf("Enter the number:");
 scanf("%d",&n);
 printf("\nEnter all the values of the array:");
 for(i=0;i<n;i++)
 {
   scanf("%d",&a[i]);
   if(i==0)
   {
    max=a[0];
    min=a[0];
   }
   else
   {
    if(a[i]>=max)
    max=a[i];
    if(a[i]<min)
    min=a[i];
   }
 }
 printf("\nThe maximum value of the given array is %d",max);
 printf("\nThe minimum value of the given array is %d",min);
 return 0;
}     
