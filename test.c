//To find the multiplication of two matrices
#include <stdio.h>
int main()
{
 int a[100][100], b[100][100], c[100][100];
 int i,j,k,row1,column1,row2,column2;
 printf("Enter the rows and columns of the first matrix:");
 scanf("%d %d",&row1,&column1);
 printf("Enter the rows and columns of the second matrix:");
 scanf("%d %d",&row2,&column2);
 if(column1==row2)
 {
 printf("Enter the elements of the first matrix:");
 for(i=0;i<row1;i++)
 {
  for(j=0;j<column1;j++)
  {
   scanf("%d",&a[i][j]);
  }
 }
 printf("Enter the elements of the second matrix:");
  for(i=0;i<row2;i++)
 {
  for(j=0;j<column2;j++)
  {
   scanf("%d",&b[i][j]);
  }
 }
 printf("The matrix obtained after multiplying both the matrices is:");
 printf("\n[ ");
 for(i=0;i<row1;i++)
 {
 for(j=0;j<column2;j++)
 {
 c[i][j]=0;
 for(k=0;k<column1;k++)
 {
 c[i][j]=c[i][j]+a[i][k]*b[k][j];
 }
 printf("%d ",c[i][j]);
 }
 }
 printf("]");
 }
 else
 {
 printf("The matrix multiplication of these two matrices is not possible");
 }
 return 0;
}
