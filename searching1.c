#include <stdio.h>
int main()
{
 int a[10],i,j,key,n,flag,mid,low,high;
 printf("Enter the number:");
 scanf("%d",&n);
 printf("Enter the element you want to search:");
 scanf("%d",&key);
 printf("Enter all the elements of the array:");
 for(i=0;i<n;i++)
 scanf("%d",&a[i]);
 low=0;
 high=n-1;
 mid=(low+(high-low))/2;
 flag=0;
 while(low<=high)
 {
  if(key==a[mid])
  {
   printf("We have found the searched element %d",key);
   flag=1;
   break;
  }
  else if(key<a[mid])
  {
   high=mid-1;
  }
  else if(key>a[mid])
  {
   low=mid+1;
  }
   mid=(low+(high-low))/2;
 }   
 if(flag==0)
 printf("The element is not present in the array"); 
  return 0;
  }
  
  
  
   
  
