#include <stdio.h>
int main()
{
 FILE *ptr;
 ptr=fopen("output3.c","a");
 int a=67;
 int b=90;
 int c=40;
 int d=a*b*c;
 fprintf(ptr,"OUTPUT2\n");
 fprintf(ptr,"The product of the three numbers is %d:",d);
 fclose(ptr);
 return 0;
 }
