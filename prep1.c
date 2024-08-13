//Polynomial addition using arrays
#include <stdio.h>
int main()
{
 int gr,arr[10],arr1[10],c[10],n,m,i,e;
 printf("Enter the highest degree of the first polynomial:");
 scanf("%d",&n);
 printf("\nEnter the coefficients from lowest to the highest degree:");
 for(i=0;i<=n;i++)
 {
  scanf("%d",&arr[i]);
 }
 printf("Enter the highest degree of the second polynomial:");
 scanf("%d",&m);
 printf("\nEnter the coefficients from lowest to the highest degree:");
 for(i=0;i<=m;i++)
 {
  scanf("%d",&arr1[i]);
 }
 printf("\nThe sum of the two polynomials is:");
 if(m>n)
 gr=m;
 else
 gr=n;
 for(i=0;i<=gr;i++)
 {
  if(i<=n&&i<=m)
  c[i]=arr[i]+arr1[i];
  else if(i>m)
 c[i]=arr[i];
 else if(i>n)
 c[i]=arr1[i];
 }
 for(i=gr;i>=0;i--)
 {
 if(i!=0)
  printf("%dX^%d+",c[i],i);
  else
  printf("%dX^%d",c[i],i);
 }
 return 0;
 } 
  
  
  
 
 
 
  
