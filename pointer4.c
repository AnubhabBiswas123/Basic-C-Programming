#include <stdio.h>
void sum(int a, int b);
void product(int a, int b);
float average(float *a, float *b);
int main()
{
 float a,b;
 printf("Enter the values of a and b:");
 scanf("%f %f",&a,&b);
 sum(a,b);
 product(a,b);
 float c=average(&a,&b);
 printf("The average of a and b is %f",c);
 return 0;
 }
 void sum(int a, int b)
 {
 printf("The sum of and b is %d",(a+b));
 }
 void product(int a, int b)
 {
 printf("The product of a and b is %d",(a*b));
 }
 float average(float *a, float *b)
 {
 float avg=((*a)+(*b))/2.0;
 return avg;
 }
