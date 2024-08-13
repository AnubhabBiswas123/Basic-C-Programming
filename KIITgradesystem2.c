#include <stdio.h>
int main()
{
  int maths,chem,eng,betc,bee,avg;
  printf("Enter the marks of Mathematics, Chemistry, English, Basic Electronics and Basic Electrical Engineering respectively\n");
  scanf("%d %d %d %d %d",&maths,&chem,&eng,&betc,&bee);
  avg=(maths+chem+eng+betc+bee)/5;
  avg=avg/10;
  switch(avg)
  {
    case 10:
    case 9:
    printf("\nOutstanding! you have got O grade");
    break;
    case 8:
    printf("\nExcellent! you have got E grade");
    break;
    case 7:
    printf("\nVery good! you have got A grade");
    break;
    case 6:
    printf("\nGood! you have got B grade");
    break;
    case 5:
    printf("\nFair! you have got C grade");
    break;
    case 4:
    case 3:
    case 2:
    case 1:
    case 0:
    printf("\nHave a little bit of shame, your father is spending so much money and you're getting F grade");
    break;
    default:
    printf("\nWrong input");
  }
  return 0;
}
    
