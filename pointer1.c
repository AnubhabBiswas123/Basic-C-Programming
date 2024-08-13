#include <stdio.h>
void swap(int *, int *);
int main()
{
 int a,b;
 printf("Enter the values of a and b:");
 scanf("%d %d",&a,&b);
 printf("%d %d",a,b);
 swap(&a,&b);
 printf("\n%d %d",a,b);
 return 0;
 }
 void swap(int *a, int *b)
 {
  int temp=*a;
  *a=*b;
  *b=temp;
 }
  
