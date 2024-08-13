#include <stdio.h>
#include <math.h>
int main(){
float a,b,c,D,root1,root2;
printf("Enter the value of a,b and c of a quadratic equation respectively:");
scanf("%f %f %f",&a,&b,&c);
D=b*b-4*a*c;
if(D>0){
printf("\nThe roots are real and unequal");
root1=(-b+sqrt(D))/(2*a);
root2=(-b-sqrt(D))/(2*a);
printf("\nThe roots of the quadratic equation are %f and %f",root1,root2);}
else if(D==0){
printf("\nThe roots are real and equal");
root1=-b/(2*a);
root2=-b/(2*a);
printf("\nThe roots of the quadratic equation are %f and %f",root1,root2);}
else if(D<0)
printf("\nThe roots are imaginary");
return 0;}

