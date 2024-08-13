#include <stdio.h>
void apply(int a, int b, int *sum, int *pro, int *avg); 
int main()
{
int a,b;
int sum, pro, avg;
printf("Enter the values of a and b:");
scanf("%d %d",&a,&b);
apply(a,b,&sum,&pro,&avg);
printf("Sum is %d:\n",sum);
printf("Product is %d:\n",pro);
printf("Average is %d:\n",avg); 
return 0;
}
void apply(int a, int b, int *sum, int *pro, int *avg)
{
 *sum=a+b;
 *pro=a*b;
 *avg=(a+b)/2;
 }
