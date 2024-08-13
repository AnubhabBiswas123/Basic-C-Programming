#include <math.h>
#include <stdlib.h>
#include <stdio.h>
int main()
{
  int a,b,power,s;
  char ch,choice;
  float A,B,C;
  choice='Y';
  s=0;
  while(choice=='Y')
  {
  printf("Enter the value of a and b:");
  scanf("%d %d",&a,&b);
  if(s<0){
  s++;
  printf("This is a scientific calculator\n");}
  printf("1. Press R to find square root\n");
  printf("2. Press ^ to find power\n");
  printf("3. Press + to find addition\n");
  printf("4. Press - to find subtraction\n");
  printf("5. Press * to find multiplication\n");
  printf("6. Press / to find division\n");
  printf("7. Press the modulus operator to find the modulus\n");
  printf("8. Press S to find the sin value\n");
  printf("9. Press C to find the cosine value\n");
  printf("10. Press T to find the tan value\n");
  printf("11. Press 1 to find sin inverse\n");
  printf("12. Press 2 to find cosine inverse\n");
  printf("13. Press 3 to find tan inverse\n");
  printf("14. Press L to find logarithm\n");
  printf("15. Press Q to find the quadratic equation:");
  printf("Enter the logical operator:");
  scanf("%c",&ch);
  if(ch=='\n')
  scanf("%c",&ch);
  switch(ch)
  { 
    case 'R':
    printf("The square root of both the numbers are %f and %f respectively",sqrt(a),sqrt(b));
    break;
    case'^':
    printf("Enter the power:");
    scanf("%d",&power);
    printf("The power of the entered numbers are");
    printf("\n%f",pow(a,power));
    printf("\n%f",pow(b,power));
    break;
    case '+':
    printf("The addition of two numbers is %d:",(a+b));
    break;
    case '-':
    printf("The subtraction of two numbers is %d:",(abs(a-b)));
    break;
    case '*':
    printf("The multiplicatio of two numbers is %d:",(a*b));
    break;
    case '/':
    A=a;B=b;
    printf("The division of two numbers is %f:",(A/B));
    break;
    case '%':
    printf("The modulus is %d:",(a%b));
    break;
    case 'S':
    printf("The sin of both the numbers are %f and %f",sin(3.14/180*a),sin(3.14/180*b));
    break;
    case 'C':
    printf("The cosine of both the numbers are %f and %f",cos(3.14/180*a),cos(3.14/180*b));
    break;
    case 'T':
    printf("The tan of both the numbers are %f and %f",tan(3.14/180*a),tan(3.14/180*b));
    break;
    case '1':
    printf("The sin inverse of both the numbers are %f and %f",(180.0/3.14)*asin(a),(180/3.14)*asin(b));
    break;
    case '2':
    printf("The cos inverse of both the numbers are %f and %f",(180.0/3.14)*acos(a),(180.0/3.14)*acos(b));
    break;
    case '3':
    printf("The tan inverse of both the numbers are %f and %f",(180.0/3.14)*atan(a),(180.0/3.14)*atan(b));
    break;
    case 'L':
    printf(" log(%d)=%f and log(%d)=%f",a,log(a),b,log(b));
    break;
    case 'Q':
    printf("Enter the value of c:");
    scanf("%f",&C);
    A=a;
    B=b;
    if((B*B-4*A*C)>0)
    {
    printf("The roots are real and unequal\n");
    printf("Both the roots of the equation are %f and %f",(-B+sqrt(B*B-4*A*C))/(2*A),(-B-sqrt(B*B-4*A*C))/(2*A));
    }
    else if((B*B-4*A*C)==0)
    {
    printf("The roots are real and equal\n");
     printf("Both the roots of the equation are %f and %f",(-B)/(2*A),(-B)/(2*A));
    }
    else if((B*B-4*A*C)<0)
    printf("The roots are imaginary");
    break;
    default:
    printf("Invalid operator entered");
   }
   printf("\nDo you want to continue, if yes then press Y if not press N:");
   scanf("%c",&choice);
   if(choice=='\n')
   scanf("%c",&choice);
   
   }
   return 0;
 }   
     
