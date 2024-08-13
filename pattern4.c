#include <stdio.h>
int main(){
int i,j;
int s=5;
for(i=1;i<=5;i++)
{
  for(j=1;j<=s;j++)
  { 
    printf("*");
   }
  printf("\n");
  s=s-1;
}
return 0;}    
