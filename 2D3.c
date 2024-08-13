//Sum of the two matrix
#include <stdio.h>
int main()
{
 int a[20][20], b[20][20];
 int i,j,row,column,sum;
 sum=0;
 printf("Enter the no. of rows and columns of the array:");
 scanf("%d %d",&row,&column);
 printf("Enter all the elements of the first array:");
 for(i=0;i<row;i++)
 {
  for(j=0;j<column;j++)
  {
   
   scanf("%d",&a[i][j]);
  }
 }
 printf("Enter all the elements of the second array:");
 for(i=0;i<row;i++)
 {
  for(j=0;j<column;j++)
  {
   
   scanf("%d",&b[i][j]);
  }
 }
 printf("The array formed after adding is:");
 for(i=0;i<row;i++)
 {
  sum=0;
  for(j=0;j<column;j++)
  {
   sum=sum+a[i][j]+b[i][j];
   printf("%d ",sum);
   sum=0;
  }
 }
 return 0;
 }  
