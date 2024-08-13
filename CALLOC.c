#include <stdio.h>
#include <stdlib.h>
int main()
{
 int n,i;
 float avg,total;
 total=0.0;
 int *ptr;
 printf("Enter the size of the array:");
 scanf("%d",&n);
 ptr=(int *)calloc(n,sizeof(int));
 printf("Enter all the elements of the array:");
 for(i=0;i<n;i++)
 {
 scanf("%d",&ptr[i]);
 }
 for(i=0;i<n;i++)
 {
  total=total+ptr[i];
 }
 avg=total/n;
 printf("The average of the elements of the array is %f",avg);
 return 0;
 }
