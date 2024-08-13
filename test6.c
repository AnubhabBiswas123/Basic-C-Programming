#include <string.h>
#include <stdio.h>
int main()
{
 int n,i,j,p,c,m,r;
 float gr;
 char n1[10];
 printf("Enter the number of students:");
 scanf("%d",&n);
 struct student
 {
  char name[10];
  int rollno;
  int phy,chem,maths;
  float total;
 };
struct student a[10];
printf("Enter the database of the students:");
for(i=0;i<n;i++)
{
scanf("%d %d %d %d %s",&a[i].rollno,&a[i].phy,&a[i].chem,&a[i].maths,a[i].name);
a[i].total=a[i].phy+a[i].chem+a[i].maths;
}
 for(i=0;i<n;i++)
 {
  gr=a[0].total;
  for(j=0;j<n-i;j++)
  {
   if(a[j].total>gr)
   {
    gr=a[j].total;
    p=a[j].phy;
    c=a[j].chem;
    m=a[j].maths;
    r=a[i].rollno;
    a[j].total=a[n-j-1].total;
    a[j].phy=a[n-j-1].phy;
    a[j].chem=a[n-j-1].chem;
    a[j].maths=a[n-j-1].maths;
    a[j].rollno=a[n-j-1].rollno;
    a[n-j-1].total=gr;
    a[n-j-1].phy=p;
    a[n-j-1].chem=c;
    a[n-j-1].maths=m;
    a[n-j-1].rollno=r;
    strcpy(n1,a[j].name);
    strcpy(a[j].name,a[n-j-1].name);
    strcpy(a[n-j-1].name,n1);
    }
    }
    }
    for(i=n-1;i>=0;i--)
    {
    printf("\n%d %d %d %d %f %s",a[i].rollno,a[i].phy,a[i].chem,a[i].maths,a[i].total,a[i].name);
     }
     return 0;
     }  
    
    
    
    
    
    
    
    
