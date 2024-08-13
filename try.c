#include <stdio.h>
int main(){
int dt,db,mt,mb,yt,yb;
printf("Enter today's date and the date of your birth\n:");
scanf("%d %d",&dt,&db);
printf("Enter the date of present month and the date of your birth month\n:");
scanf("%d %d",&mt,&mb);
printf("Enter the present year and the year of your birth\n:");
scanf("%d %d",&yt,&yb);
if(yt>yb)
printf("You are %d years",yt-yb);
else
printf("You are %d years",yb-yt);
if(mt>mb)
printf(" %d months",mt-mb);
else
printf(" %d months",mb-mt);
if(dt>db)
printf(" %d days old",dt-db);
else
printf(" %d days old",db-dt);
return 0;}

