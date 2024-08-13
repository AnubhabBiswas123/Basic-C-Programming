#include <stdio.h>
int main()
{
 int n;
 printf("Enter the no. of students:");
 scanf("%d",&n);
 struct student
 {
  char name[10];
  int roll;
  int marks;
  };
  struct student a[10];
  struct student *ptr=&a;
  printf("Enter the database of the students:");
  for(int i=0;i<n;i++)
  scanf("%s %d %d",a[i].name,&a[i].roll,&a[i].marks);
  for(int i=0;i<n;i++)
  printf("\n%s %d %d",ptr[i]->name,ptr[i]->roll,ptr[i]->marks);
  return 0;
  }
