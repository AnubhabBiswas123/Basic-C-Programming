//WAP to enter name,roll_no, three subject marks of n no. of students and display their information according to their total marks
#include <stdio.h>
#include <string.h>
int main()
{
 struct Student
 {
  int roll_no;
  int maths,phy,chem;
  int total;
  char name[100];
  };
  struct Student a[100];
  int n,i,j,tempr,s;
  int gr,tempp,tempc,tempm,tempt;
  char s1[100];
  printf("Enter the no. of students:");
  scanf("%d",&n);
  printf("Enter the databases of all the students:");
  for(i=0;i<n;i++){
  scanf("%d %d %d %d %s",&a[i].roll_no,&a[i].maths,&a[i].phy,&a[i].chem,a[i].name);
  a[i].total=a[i].maths+a[i].phy+a[i].chem;
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
  tempp=a[i].phy;
  tempc=a[i].chem;
  tempm=a[i].maths;
  tempt=a[i].total;
  strcpy(s1,a[i].name);
  a[i].roll_no=a[s].roll_no;
  a[i].phy= a[s].phy;
  a[i].chem=a[s].chem;
  a[i].maths=a[s].maths;
  a[i].total=a[s].total;
  strcpy(a[i].name,a[s].name);
  a[s].roll_no=tempr;
  a[s].phy=tempp;
  a[s].chem=tempc;
  a[s].maths=tempm;
  a[s].total=tempt;
  strcpy(a[s].name,s1);
  }
  }
  for(i=0;i<n;i++)
  printf("\n%d %d %d %d %d %s",a[i].roll_no,a[i].maths,a[i].phy,a[i].chem,a[i].total,a[i].name);
  return 0;
  }
  
