#include <stdio.h>
int main(){
char ch;
printf("Enter any alphabet:");
scanf("%c",&ch);
if(ch>='A' && ch<='Z')
printf("The alphabet after converting it into lowercase is %c",(ch+32));
else if(ch>='a' && ch<='z')
printf("The alphabet after converting it into uppercase is %c",(ch-32));
return 0;}

