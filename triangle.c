#include <stdio.h>
int main(){
float a,b,c;
printf("Enter the first,second and third sides of the triangle:");
scanf("%f %f %f",&a,&b,&c);
if((a+b)>c && (b+c)>a && (a+c)>b)
printf("\nThis triangle is valid");
else
printf("\nThis is not a valid triangle");
return 0;}
