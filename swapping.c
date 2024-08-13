#include <stdio.h>
int main(){
float a,b,c;
printf("Enter the value of first and second variable:");
scanf("%f %f",&a,&b);
c=a;
a=b;
b=c;
printf("The value of first variable is %f\n",a);
printf("The value of second variable is %f\n",b);
return 0;}

