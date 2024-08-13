#include <stdio.h>
int main(){
int hr1,hr2,min1,min2,sec1,sec2,time1,time2,time3,rhour,rmin,rsec;
printf("Enter the first time in the form of hours,minutes and seconds:");
scanf("%d %d %d",&hr1,&min1,&sec1);
printf("Enter the second time in the form of hours,minutes and seconds:");
scanf("%d %d %d",&hr2,&min2,&sec2);
time1=hr1*60*60+min1*60+sec1;
time2=hr2*60*60+min2*60+sec2;
time3=time1-time2;
rhour=time3/3600;
rmin=(time3%3600)/60;
rsec=(time3%3600)%60;
printf("The difference between the two times is %d:%d:%d",rhour,rmin,rsec);
return 0;}

