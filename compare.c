#include <stdio.h>
int main()
{
 char a[100],b[100];
 printf("Enter the string:");
 scanf("%s %s",a,b);
 int i=0;
 int count1=0;
 int count2=0;
 int max,p,s;
 s=0;
 while(a[i]!=0)
 {
  count1++;
  i++;
 }
 i=0;
 while(b[i]!=0)
 {
  count2++;
  i++;
 }
 if(count1>count2)
 max=count1;
 else
 max=count2;
 for(i=0;i<max;i++)
 {
  
  p=a[i]-b[i];
  if(p!=0)
  {
  printf("\nThe difference is %d",p);
  s++;
  break;
  }
 }
 if(s==0)
 printf("The difference is 0");
 return 0;
} 
