//WAP to create a database of two students using hard input
#include <stdio.h>
int main()
{
 struct Student
 {
  int roll_no;
  float marks;
  char name[100];
 };
 struct Student a={22051924,9.6,"Anubhab"};
 struct Student b={22051800,8.5,"Rimi"};
 printf("%d %f %s",a.roll_no,a.marks,a.name);
  printf("\n%d %f %s",b.roll_no,b.marks,b.name);
 return 0;
 } 
