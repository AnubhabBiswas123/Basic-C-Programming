#include <stdio.h>
int main()
{
 int a[100],n,i,j,s,temp,gr;
 printf("Enter the number:");
 scanf("%d",&n);
 for(i=0;i<n;i++)
 scanf("%d",&a[i]);
 for(i=0;i<n;i++)
 {
  gr=a[i];
  s=0;
 for(j=i;j<n;j++)
 {
  if(a[j]>gr){
  gr=a[j];
  s=j;}
 }
 if(s!=0)
 {
 temp=a[i];
 a[i]=gr;
 a[s]=temp;
 }
 }
 printf("The array after getting sorted is:");
 for(i=0;i<n;i++)
 printf("\t%d",a[i]);
 return 0;
 }
