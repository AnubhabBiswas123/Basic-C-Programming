#include <stdio.h>
int main()
{
 int a[100];
 int i,j,n,flag,temp;
 printf("Enter the no. of elements in the array:");
 scanf("%d",&n);
 printf("Enter all the elements of the array:");
 for(i=0;i<n;i++)
 scanf("%d",&a[i]);
 for(i=0;i<n;i++)
 {
  flag=0;
  for(j=0;j<n-i-1;j++)
  {
   if(a[j]<a[j+1])
   {
   flag++;
   temp=a[j];
   a[j]=a[j+1];
   a[j+1]=temp;
   }}
   if(flag==0)
   break;
   }
   printf("The array after getting sorted is:");
   for(i=0;i<n;i++)
   printf("%d",a[i]);
   return 0;
   }
   
   
   
   
