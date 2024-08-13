#include <stdio.h>
int main(){
int no,i;
int factorial=1;
printf("Enter any number:");
scanf("%d",&no);
for(i=1;i<=no;i++){
factorial=factorial*i;}
printf("The factorial of the given number is %d",factorial);
return 0;}

