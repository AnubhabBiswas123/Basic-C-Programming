#include <stdio.h>
int main()
{
  int a;
  printf("Enter a number:");
  scanf("%d",&a);
  switch(a)
  {
    default:
    printf("I'm default");
    case 1:
    printf("1st case");
    case 2:
    printf("2nd case");
  }
}    
