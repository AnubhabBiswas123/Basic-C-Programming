
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
int main()
{
 int n;
 printf("Enter the no. of students:");
 scanf("%d",&n);
 struct Student
 {
  int roll_no;
  int total;
  char name[100];
  };
  struct Student a[100];
  struct Student *ptr;
  int i,j,tempr,s;
  int gr,tempt;
  char s1[100];
  printf("Enter the databases of all the students:");
  for(i=0;i<n;i++){
  scanf("%d %d %s",&a[i].roll_no,&a[i].total,a[i].name);
  }
  for(i=0;i<n;i++)
  {
   s=0;
   gr=a[i].total;
  for(j=i;j<n;j++)
  {
  if(a[j].total>gr)
  {
  gr=a[j].total;
  s=j;
  }
  }
  if(s!=0)
  {
  tempr=a[i].roll_no;
  tempt=a[i].total;
  strcpy(s1,a[i].name);
  a[i].roll_no=a[s].roll_no;
  a[i].total=a[s].total;
  strcpy(a[i].name,a[s].name);
  a[s].roll_no=tempr;
  a[s].total=tempt;
  strcpy(a[s].name,s1);
  }
  }
  for(i=0;i<n;i++)
  printf("\n%d %d %s",a[i].roll_no,a[i].total,a[i].name);
  return 0;
  }
  
