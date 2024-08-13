//To find the sum of all the elements of the 2D array
#include <stdio.h>
int main()
{
 int a[100][100];
 int i,j,row,column,sum;
 sum=0;
 printf("Enter the row and column of the array:");
 scanf("%d %d",&row,&column);
 printf("Enter the elements of the array:");
 for(i=0;i<row;i++)
 {
  for(j=0;j<column;j++)
  {
   scanf("%d",&a[i][j]);
   sum=sum+a[i][j];
  }
 }
 printf("The sum of all the elements of the array is %d",sum);
 return 0;
} 
