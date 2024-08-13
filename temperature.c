#include <stdio.h>
int main(){
float temp,res;
printf("Enter the temperature in fahrenheit:");
scanf("%f",&temp);
res=(temp-32)*(5/9.0);
printf("The temperature in celsius is %f",res);
return 0;}

