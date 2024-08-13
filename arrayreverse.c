#include <stdio.h>
int main()
{
 int a[10000],i,n,x;
 printf("Enter the number:");
 scanf("%d",&n);
 printf("\nEnter all the values of the array:");
 for(i=0;i<n;i++)
 {
   scanf("%d",&a[i]);
 }
 x=n/2;
 for(i=0;i<x;i++)
 {
    a[i]=a[i]+a[n-(i+1)];
    a[n-(i+1)]=a[i]-a[n-(i+1)];
    a[i]=a[i]-a[n-(i+1)];
    
 }
 printf("\nThe array after getting reversed is:");
 for(i=0;i<n;i++)
 printf("%d ",a[i]);
 return 0;
}    
    
 
