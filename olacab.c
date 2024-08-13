#include <stdio.h>
int main()
{
int fare, d;
 printf("Enter the distance travelled:");
 scanf("%d",&d);
 if(d==0)
 fare=50;
 else if(d>0 && d<=10)
 fare=100+50;
 else if(d>=11 && d<=15)
 fare=(d-10)*10+150;
 else if(d>=16 && d<=20)
 fare=150+(d-15)*5+5*10;
 else if(d>=21 && d<=25)
 fare=150+5*10+5*5+(d-20)*4;
 else if(d>25)
 fare=150+5*10+5*5+5*4+(d-25)*3;
 printf("The total fare is %d",fare);
 return 0;
} 
