#include <stdio.h>
int main()
{
int a[100];
int i,j,n,gr,s,temp,flag;
printf("Enter the no. of elements in the array:");
scanf("%d",&n);
printf("Enter all the elements of the array:");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
for(i=0;i<n;i++)
{
 gr=a[0];
 for(j=0;j<n-i;j++)
 {
   if(a[j]>gr)
  {
   gr=a[j];
   s=j;
   }
   }
  temp=a[n-i-1];
  a[n-i-1]=a[s];
  a[s]=temp;
  }
  printf("The array after getting sorted is:");
  for(i=0;i<n;i++)
  printf("%d",a[i]);
  return 0;
  } 
