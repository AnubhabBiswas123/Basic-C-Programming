#include <stdio.h>
int main(){
float a,b;
printf("Enter the value of first and second variable:");
scanf("%f %f",&a,&b);
printf("The value of the first variable is %f\n",(a+b)-a);
printf("The value of the second variable is %f\n",(a+b)-b);
return 0;}
