#include <stdio.h>
int binary(int a[],int low, int high, int x);
int main()
{
 int a[100];
 int i,j,n,x;
 printf("Enter the no. of elements in the array:");
 scanf("%d",&n);
 printf("Enter all the elements of the array:");
 for(i=0;i<n;i++)
 scanf("%d",&a[i]);
 printf("Enter the element which you want to search:");
 scanf("%d",&x);
 j=binary(a,0,n-1,x);
 (j==-1)?(printf("No such element in the array")):(printf("Element successfully found at %d index",j));
 return 0;
 }
 int binary(int a[], int low, int high, int x)
 {
  if(low<=high)
  {
   int mid=(low+high)/2;
   if(a[mid]==x)
   return mid;
   if(a[mid]<x)
   return binary(a,mid+1,high,x);
   else
   return binary(a,low,mid-1,x);
   }
   else
   return -1;
   } 
