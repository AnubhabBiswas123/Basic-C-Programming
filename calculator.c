#include <stdio.h>
int main()
{
  int a,b;
  char ch;
  printf("Enter the first and the second number:");
  scanf("%d %d",&a,&b);
  printf("Enter the logical operator:");
  scanf("%c",&ch);
  if(ch=='\n')
  scanf("%c",&ch);
  switch(ch)
  {
    case '+':
    printf("The addition of two numbers is %d:",(a+b));
    break;
    case '-':
    printf("The subtraction of two numbers is %d:",(a-b));
    break;
    case '*':
    printf("The multiplicatio of two numbers is %d:",(a*b));
    break;
    case '/':
    printf("The division of two numbers is %d:",(a/b));
    break;
    case '%':
    printf("The modulus is %d:",(a%b));
    break;
    default:
    printf("Invalid operator entered");
   }
   return 0;
 }   
     
