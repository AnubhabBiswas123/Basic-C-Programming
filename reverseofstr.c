#include <stdio.h>
int main()
{
 char a[100];
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
 s=count-1;
 printf("The reverse of the string is:");
 for(i=0;i<(count/2);i++)
 {
  temp=a[s];
  a[s]=a[i];
  a[i]=temp;
  s--;
}
for(i=0;i<count;i++)
{
 printf("%c",a[i]);
} 
 return 0;
 }
  
