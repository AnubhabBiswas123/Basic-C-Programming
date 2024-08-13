//WAP to create a database of n no. of students and print them
#include <stdio.h>
int main()
{
 struct Student
 {
  int roll_no;
  float marks;
  char name[100];
  };
  struct Student a[100];
  int n,i;
  printf("Enter the no. of students:");
  scanf("%d",&n);
  printf("Enter the databases of all the students:");
  for(i=0;i<n;i++)
  scanf("%d %f %s",&a[i].roll_no,&a[i].marks,a[i].name);
  for(i=0;i<n;i++)
  printf("\n%d %f %s",a[i].roll_no,a[i].marks,a[i].name);
  return 0;
  }
  
