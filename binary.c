#include <stdio.h>
int main()
{
 int a[100];
 int i,j,n,mid,low,high,flag;
 printf("Enter the number of elements in the array:");
 scanf("%d",&n);
 printf("Enter all the elements of the array:");
 for(i=0;i<n;i++)
 {
  scanf("%d",&a[i]);
 }
 printf("Enter the element you want to search:");
 scanf("%d",&j);
 flag=0;
 low=0;
 high=n-1;
 mid=(low+(high-low))/2;
 for(i=0;i<n;i++)
 {
  if(a[mid]==j)
  {
   flag=1; 
   printf("Element was found successfully at %d index",mid);
   break;
  }
  if(a[mid]>j)
  low=mid+1;
  if(a[mid]<j)
  high=mid-1;
  mid=(low+high)/2;
  if(low>high)
  break;
  }
  if(flag==0)
  printf("Element was not found in the array");
  return 0;
  } 
