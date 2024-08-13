#include <stdio.h>
int main(){
int no,rem;
int sum=0;
printf("Enter any number:");
scanf("%d",&no);
for(;no!=0;){
rem=no%10;
no=no/10;
sum=sum+rem;}
printf("The sum of the digits of the number is %d",sum);
return 0;}

