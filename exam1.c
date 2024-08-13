#include <stdio.h>
int main()
{
 FILE *f1;
 f1=fopen("result1.c","w");
 char a[100];
 printf("Enter a string:");
 scanf("%[^\n]",a);
 int i=0;
 int count;
 while(a[i]!='\0')
 {
  i++;
  count++;
  }
  printf("The reverse of the string is");
  fprintf(f1,"The reverse of the string is");
  for(i=0;i<count;i++)
  {
   if(a[i]>=65 && a[i]<=90)
   a[i]=a[i]+32;
   else if(a[i]>=97 && a[i]<=122)
   a[i]=a[i]-32;
   printf(" %c",a[i]);
   fprintf(f1," %c",a[i]);
   }
   fclose(f1);
  }
