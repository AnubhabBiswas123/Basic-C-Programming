#include <stdio.h>
int main()
{
  float maths,chem,eng,betc,bee,avg;
  printf("Enter the marks of Mathematics, Chemistry, English, Basic Electronics and Basic Electrical Engineering respectively\n");
  scanf("%f %f %f %f %f",&maths,&chem,&eng,&betc,&bee);
  avg=(maths+chem+eng+betc+bee)/5;
  if(avg>=90 && avg<=100)
  printf("\nCongratulations you have got O grade");
  else if(avg>=80 && avg<90)
  printf("\nExcellent! you have got E grade");
  else if(avg>=70 && avg<80)
  printf("\nVery good you have got A grade");
  else if(avg>=60 && avg<70)
  printf("\n Good you have got B grade");
  else if(avg>=50 && avg<60)
  printf("\nFair you have got C grade");
  else if(avg>=40 && avg<50)
  printf("\nYou have got D grade, you can do better!");
  else if(avg<40)
  printf("\nShame on you, you have got F grade");
  else
  printf("Invalid input");
  return 0;
}  
  
