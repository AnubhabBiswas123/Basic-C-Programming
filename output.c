#include <stdio.h>
int main()
{
 FILE *F1;
 F1=fopen("output3.c","w");
 int a=9;
 int b=9;
 int c=a+b;
 fprintf(F1,"Output1\n");
 fprintf(F1,"The sum of the two numbers is=%d\n",c);
 fclose(F1);
 return 0;
 }
