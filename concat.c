#include <stdio.h>
int main()
{
 char a[100],b[100];
 printf("Enter the first and the second string:");
 scanf("%s %s",a,b);
 int count1=0;
 int count2=0;
 int i=0;
 int s=0;
 while(a[i]!='\0')
 {
  count1++;
  i++;
 } 
 i=0;
 while(b[i]!='\0')
 {
  count2++;
  i++;
 }
 printf("The strings after getting concatenated are:");
 for(i=0;i<(count1+count2);i++)
 {
  if(i<count1)
  printf("%c",a[i]);
  else
  {
   a[i]=b[s];
   s++;
   printf("%c",a[i]);
  }
 }
 return 0;
}    
