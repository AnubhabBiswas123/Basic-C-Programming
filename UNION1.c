//WAP to create a database of 5 students using union
#include <stdio.h>
int main()
{
 union Student
 {
  int roll_no;
  int phy,chem,maths;
  char name[10];
 };
 union Student a[10];
 int i;
 for(i=0;i<5;i++)
 {
 printf("Enter the roll no, 3 subject marks and the name:");
 scanf("%d",&a[i].roll_no);
 printf(" %d",a[i].roll_no);
 scanf("%d",&a[i].phy);
 printf(" %d",a[i].phy);
 scanf("%d",&a[i].chem);
 printf(" %d",a[i].chem);
 scanf("%d",&a[i].maths);
 printf(" %d",a[i].maths);
 scanf("%s",a[i].name);
 printf(" %s",a[i].name);
 printf("\n");
}
 return 0;
 } 
