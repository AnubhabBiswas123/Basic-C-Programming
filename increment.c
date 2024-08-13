#include <stdio.h>
int main(){
int a,b,c;
a=5;
b=a++ + ++a;
c=++a + a++;
printf("The values of a,b and c are %d,%d,%d respectively",a,b,c);
return 0;}

