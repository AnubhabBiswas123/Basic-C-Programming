#include <stdio.h>
int fibonacci(int n);
int main()
{
 int n;
 printf("Enter the number:");
 scanf("%d",&n);
 int c=fibonacci(n);
 printf("\nThe %d term of the fibonacci series is %d",n,c);
 return 0;
}
int fibonacci(int n)
{

 if(n==0){
  return 0;}
 if(n==1){
 return 1;}
 int fibonacciN=fibonacci(n-1)+fibonacci(n-2);
 printf("%d ",fibonacciN);
 return fibonacciN;
 }  
