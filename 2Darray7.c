//To display the major and the minor diagonal of the matrix
#include <stdio.h>
int main()
{
 int a[100][100];
 int i,j,row,column,s;
 printf("Enter the row and column of the matrix:");
 scanf("%d %d",&row,&column);
 s=row-1;
 if(row==column)
 {
 printf("Enter the elements of the matrix:");
 for(i=0;i<row;i++)
 {
  for(j=0;j<column;j++)
  {
   scanf("%d",&a[i][j]);
  }
 }
  printf("The major diagonal of the matrix is:");
  printf("[ ");
  for(i=0;i<row;i++)
 {
  for(j=0;j<column;j++)
  {
   if(i==j)
   {
   printf("%d ",a[i][j]);
   }
  }
 }
 printf("]");
 printf("\nThe minor diagonal of the matrix is:");
 printf("[ ");
 for(i=0;i<row;i++)
 {
  printf("%d ",a[i][s]);
  s--;
 }  
 printf("]");
 }
 else
 {
 printf("It is not possible to find the diagonal of a non square matrix");
 }
 return 0;
} 
