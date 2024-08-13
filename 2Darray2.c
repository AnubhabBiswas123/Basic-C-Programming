//To initialize and retrive the data of a 2D array
#include <stdio.h>
int main()
{
 int a[100][100];
 int i,j,row,column;
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
   printf("%d ",a[i][j]);
  }
 } 
 printf("]");
 return 0;
} 
