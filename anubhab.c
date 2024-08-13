#include <stdio.h>
int main(){
int days,month,remd;
printf("Enter the number of days:");
scanf("%d",&days);
month=days/30;
remd=days%30;
if(month==1)
printf("%dmonth %ddays",month,remd);
else
printf("%dmonths %ddays",month,remd);
return 0;}

