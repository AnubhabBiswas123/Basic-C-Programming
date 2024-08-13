#include <stdio.h>
int main()
{
 int a[10000],i,j,s,q,n,max1,max2;
 printf("Enter the number:");
 scanf("%d",&n);
 printf("Enter all the elements of the array:");
 for(i=0;i<n;i++)
 {
  scanf("%d",&a[i]);
  if(i==0)
  max1=a[i];
  else
  {
   if(a[i]>max1){
   max1=a[i];
   s=i;
   }
  }
 }
 q=a[0];
 a[0]=a[s];
 a[s]=q;
 for(i=1;i<n;i++)
 {
   if(i==1)
   max2=a[i];
   else
   {
    if(a[i]>max2)
    max2=a[i];
   }
 }
   printf("The second largest number of the array is %d",max2);
   return 0;
 }  
  
  
  
    
