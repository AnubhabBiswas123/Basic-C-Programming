//Transpose of the matrix
#include <stdio.h>
int main()
{
 int a[20][20];
 int i,j,row,column,temp;
 printf("Enter the no. of rows and columns of the array:");
 scanf("%d %d",&row,&column);
 printf("Enter all the elements of the array:");
 for(i=0;i<row;i++)
 {
  for(j=0;j<column;j++)
  {
   
   scanf("%d",&a[i][j]);
  }
 }
 for(i=0;i<row;i++)
 {
  for(j=0;j<column;j++)
  {
   if(j>i)
   {
   temp=a[i][j];
   a[i][j]=a[j][i];
   a[j][i]=temp;
   }
   }
  }
  printf("The transpose of the matrix is:");
  for(i=0;i<row;i++)
 {
  for(j=0;j<column;j++)
  { 
  printf("%d ",a[i][j]);
  }
 } 
 return 0;
 } 
