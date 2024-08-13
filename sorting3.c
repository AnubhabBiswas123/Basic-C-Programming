#include <stdio.h>
void swap(int a[],int j);
int main()
{
 int a[10],i,j,n,flag;
 printf("Enter the number:");
 scanf("%d",&n);
 printf("Enter all the elements of the array:");
 for(i=0;i<n;i++)
 scanf("%d",&a[i]);

 for(i=0;i<n-1;i++)
 {
  flag=0;
  for(j=0;j<n-i-1;j++)
  {
   if(a[j]>a[j+1])
   {
    swap(a,j);
    flag=1;
   }
   }
   if(flag==0)
   break;
  }
  printf("The array after getting sorted is:");
  for(i=0;i<n;i++)
  printf("  %d",a[i]); 
  return 0;
  }
  void swap(int a[],int j)
  {
   int temp;
   temp=a[j];
   a[j]=a[j+1];
   a[j+1]=temp;
   }
