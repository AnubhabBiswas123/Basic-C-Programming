//Storing the data and retriving it
#include <stdio.h>
int main()
{
 int a[20][20];
 int i,j,row,column;
 printf("Enter the no. of rows:");
 scanf("%d",&row);
 printf("Enter the no. of columns:");
 scanf("%d",&column);
 printf("Enter all the elements of the array:");
 for(i=0;i<row;i++)
 {
  for(j=0;j<column;j++)
  {
   
   scanf("%d",&a[i][j]);
  }
 }
 printf("The 2D array is:");
 for(i=0;i<row;i++)
 {
  for(j=0;j<column;j++)
  {
   printf("%d ",a[i][j]);
  }
 }
 
  
 return 0;
 }  
