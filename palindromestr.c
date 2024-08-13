#include <stdio.h>
int main()
{
 char a[100],b[100];
 char temp;
 int i=0;
 int s;
 int count=0;
 printf("Enter the string:");
 scanf("%s",a);
 while(a[i]!='\0')
 {
 count++;
 i++;
 }
 i=0;
 while(a[i]!='\0')
 {
 b[i]=a[i];
 i++;
 }
 s=count-1;
 for(i=0;i<(count/2);i++)
 {
  temp=a[s];
  a[s]=a[i];
  a[i]=temp;
  s--;
}
s=0;
for(i=0;i<count;i++)
{
 if(a[i]!=b[i])
 {
 s++;
 break;
 }
}
if(s==1)
printf("This is not a palindrome string");
else
printf("This is a palindrome string"); 
 return 0;
 }
  
