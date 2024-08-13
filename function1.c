#include <stdio.h>
void NAMASTE();
void BONJOUR();
int main()
{
 char ch;
 printf("Enter the nationality:");
 scanf("%c",&ch);
 if(ch=='I'||ch=='i')
 NAMASTE();
 else if(ch=='F'||ch=='f')
 BONJOUR();
 return 0;
 }
void NAMASTE()
{
 printf("NAMASTE");
}
void BONJOUR()
{
 printf("BONJOUR");
}   
  
