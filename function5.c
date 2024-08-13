//To print all the numbers from 1 to 100
#include <stdio.h>
void number(int n);
int main()
{
 printf("All the numbers from 1 to 100 are:");
 number(100);
 return 0;
}
void number(int n)
{
 
 if(n==0)
 return;
 number(n-1);
 printf("\n%d",n);
 }
