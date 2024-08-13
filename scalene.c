#include <math.h>
#include <stdio.h>
int main(){
float a,b,c,s,area;
printf("Enter the first,second and the third sides of a scalene triangle:");
scanf("%f %f %f",&a,&b,&c);
s=(a+b+c)/2;
area=sqrt(s*(s-a)*(s-b)*(s-c));
printf("The area of the scalene triangle is %f\n",area);
return 0;}
