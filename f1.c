#include <stdio.h>
void swap(int *a, int *b);
int main()
{
 int a,b;
 printf("Enter the value of a and b:");
 scanf("%d %d",&a,&b);
 swap(&a,&b);
 printf("The values after swapping are %d and %d",a,b);
 return 0;
 }
 void swap(int *a, int *b)
 {
  int temp;
  temp=*a;
  *a=*b;
  *b=temp;
  }
  
