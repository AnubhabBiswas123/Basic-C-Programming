#include <stdio.h>
int main(){
float principal,rate,SI,amt;
int time;
printf("Enter the principal, rate of interest and the no. of years:");
scanf("%f %f %d",&principal,&rate,&time);
SI=(principal*rate*time)/100;
amt=principal+SI;
printf("The simple interest is Rs %f\n ",SI);
printf("The gross amount is Rs %f\n", amt);
return 0;}

