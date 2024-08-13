//WAP to create a database of 2 students using scanf
#include <stdio.h>
#include <string.h>
int main()
{
 struct Student
 {
  int roll_no;
  float marks;
  char name[100];
 };
 struct Student a,b;
 printf("Enter the database of 1st student:");
 scanf("%d %f %s",&a.roll_no,&a.marks,a.name);
 printf("Enter the database of 2nd student:");
 scanf("%d %f %s",&b.roll_no,&b.marks,b.name);
 printf("%d %f %s",a.roll_no,a.marks,a.name);
 printf("\n%d %f %s",b.roll_no,b.marks,b.name);
 return 0;
 }
  
