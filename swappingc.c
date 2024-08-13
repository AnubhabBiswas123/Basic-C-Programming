#include <stdio.h>
int main(){
int a,b;
printf("Enter the value of a and b:");
scanf("%d %d",&a,&b);
a=a+b;
b=a-b;
a=a-b;
printf("\nThe values of a and b after swapping are %d and %d respectively",a,b);
return 0;}

