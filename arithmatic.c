#include <stdio.h>
int main(){
float a,b,sum,multi,sub,div;
printf("Enter the value of a and b:");
scanf("%f %f",&a,&b);
sum=a+b;
multi=a*b;
sub=a-b;
div=a/b;
printf("The sum of %f and %f is %f\n",a,b,sum);
printf("The difference of %f and %f is %f\n",a,b,sub);
printf("The multiplication of %f and %f is %f\n",a,b,multi);
printf("The division of %f and %f is %f\n",a,b,div);
return 0;}


