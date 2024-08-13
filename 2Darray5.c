//To find the transpose of a matrix without using a third variable
#include <stdio.h>
int main()
{
 int a[100][100];
 int i,j,row,column,temp;
 printf("Enter the row and column of the array:");
 scanf("%d %d",&row,&column);
 printf("Enter the elements of the array:");
 for(i=0;i<row;i++)
 {
  for(j=0;j<column;j++)
  {
   scanf("%d",&a[i][j]);
  }
 }
  printf("[ ");
  for(i=0;i<row;i++)
 {
  for(j=0;j<column;j++)
  {
   if(i<j)
   {
   a[i][j]=a[i][j]+a[j][i];
   a[j][i]=a[i][j]-a[j][i];
   a[i][j]=a[i][j]-a[j][i];
   }
  }
 }
 for(i=0;i<row;i++)
 {
  for(j=0;j<column;j++)
  {
   printf("%d ",a[i][j]);
  }
 }  
 printf("]");
 return 0;
} 
