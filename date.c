#include <stdio.h>
int main()
{
  int j,i,days,month,year,no;
  long int rday,rmon,ryear,totdays;
 printf("Enter the day:");
 scanf("%d",&days);
 printf("Enter the month:");
 scanf("%d",&month);
 printf("Enter the year:");
 scanf("%d",&year);
 printf("Enter the no.of days:");
 scanf("%d",&no);
 if((year%100==0)&&(year%400==0))
 totdays=year*366+days+no;
 else if(year%4==0)
 totdays=year*366+days+no;
 else
 totdays=year*365+days+no;
 for(j=1;j<=month;j++){
 if((j==1)||(j==3)||(j==5)||(j==7)||(j==8)||(j==10)||(j==12))
 totdays=totdays+31;
 else if((j==4)||(j==6)||(j==9)||(j==11))
 totdays=totdays+30;
 else{
 if(j==2){
 if((year%100==0)&&(year%400==0))
 totdays=totdays+29;
 else if(year%4==0)
 totdays=totdays+29;
 else
 totdays=totdays+28;}
 }
 } 
  
 ryear=totdays/365;
 totdays=totdays+1;
 for(i=year;i<=ryear;i++){
 if((i%100==0)&&(i%400==0)){
 totdays--;}
 else if(i%4==0){
 totdays--;}
 else if(i==year){
 totdays--;}
 }
 ryear=totdays/365;
 rmon=(totdays%365)/30;
 rday=(totdays%365)%30;
 if((year%100==0)&&(year%400==0))
 {
  printf("This is a leap year");
  if((days>0 && days<=31)&&(month>0 && month<=12)&&(year>0)){
  
  if(days==31)
  {
   if((month==1)||(month==3)||(month==5)||(month==7)||(month==8)||(month==10)||(month==12))
   {
   printf("\nValid input");
   printf("\n%ld / %ld / %ld",rday,rmon,ryear);
   }
   else
   printf("\nInvalid input");
   }
  else
  {
  if(month==2)
   {
   if(days<=29)
   {
   printf("\nValid input");
   printf("\n%ld / %ld / %ld",rday,rmon,ryear);
   }
   else
   printf("\ninvalid input");
   }
   else{
   printf("\nValid input");
   printf("\n%ld / %ld / %ld",rday,rmon,ryear);
   }
  } 
   }
  else
  printf("\nThis is a invalid input");
  }
  else if(year%4==0)
  {
   printf("\nThis is a leap year");
   if((days>0 && days<=31)&&(month>0 && month<=12)&&(year>0)){
  if(days==31)
  {
   if((month==1)||(month==3)||(month==5)||(month==7)||(month==8)||(month==10)||(month==12))
   {
   printf("\nValid input");
   printf("\n%ld / %ld / %ld",rday,rmon,ryear);
   }
   else
   printf("\nInvalid input");
   }
   else{
   if(month==2)
   {
   if(days<=29){
   printf("\nValid input");
   printf("\n%ld / %ld / %ld",rday,rmon,ryear);
   }
   else
   printf("\ninvalid input");
   }
   else{
   printf("\nValid input");
   printf("\n%ld / %ld / %ld",rday,rmon,ryear);
   }
   }
  }
  else
  printf("\nInvalid input");
  }
  else
  {
    printf("\nThis is not a leap year");
    if((days>0 && days<=31)&&(month>0 && month<=12)&&(year>0)){
  if(days==31)
  {
   if((month==1)||(month==3)||(month==5)||(month==7)||(month==8)||(month==10)||(month==12))
   {
   printf("\nValid input");
   printf("\n%ld / %ld / %ld",rday,rmon,ryear);
   }
   else
   printf("\nInvalid input");
   }
  else
  { 
   if(month==2)
   {
   if(days<=28)
   {
   printf("\nValid input");
   printf("\n%ld / %ld / %ld",rday,rmon,ryear);
   }
   else
   printf("\ninvalid input");
   }
   else
   {
   printf("\nValid input");
   printf("\n%ld / %ld / %ld",rday,rmon,ryear);
   }
   }
  }
  else
  printf("\nInvalid input");}
  return 0;}
   
   
