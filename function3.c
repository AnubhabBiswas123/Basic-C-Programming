#include <stdio.h>
#include <math.h>
void areasq(int side);
void areatr(float r);
void arearec(float a, float b);
int main()
{
 int side;
 float r,a,b;
 printf("Enter the side of the square:");
 scanf("%d",&side);
 printf("Enter the radius of the triangle:");
 scanf("%f",&r);
 printf("Enter the first and the second side of the rectangle:");
 scanf("%f %f",&a,&b);
 areasq(side);
 areatr(r);
 arearec(a,b);
 return 0;
} 
void areasq(int side)
{
 printf("The area of the square is %f\n",pow(side,2));
}  
void areatr(float r)
{
 printf("The area of the triangle is %f\n",3.14*r*r);
} 
void arearec(float a, float b)
{
 printf("The area of the rectangle is %f",a*b);
} 
