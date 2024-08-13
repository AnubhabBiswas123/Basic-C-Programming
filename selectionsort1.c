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
 gr=a[i];
 s=0;
 for(j=i;j<n;j++)
 {
   if(a[j]>gr)
  {
   gr=a[j];
   s=j;
   }
   }
   if(s!=0)
  {temp=a[i];
  a[i]=a[s];
  a[s]=temp;
  }}
  printf("The array after getting sorted is:");
  for(i=0;i<n;i++)
  printf("%d",a[i]);
  return 0;
  } 
