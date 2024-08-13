//To find the sum of two matrices 
#include <stdio.h>
int main()
{
 int a[100][100], b[100][100];
 int i,j,row,column,temp,sum;
 printf("Enter the no. of rows and columns of the first and second matrix:");
 scanf("%d %d",&row,&column);
 printf("Enter the elements of the first matrix:");
 for(i=0;i<row;i++)
 {
  for(j=0;j<column;j++)
  {
   scanf("%d",&a[i][j]);
  }
 }
 printf("Enter the elements of the second matrix:");
 for(i=0;i<row;i++)
 {
  for(j=0;j<column;j++)
  {
   scanf("%d",&b[i][j]);
  }
 }
 printf("The resultant matrix after adding the above two matrices is:");
 printf("[ "); 
 for(i=0;i<row;i++)
 {
  for(j=0;j<column;j++)
  {
   sum=a[i][j]+b[i][j];
   printf("%d ",sum);
  }
 }  
 printf("]");
 return 0;
} 
