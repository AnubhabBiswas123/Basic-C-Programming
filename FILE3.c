#include <stdio.h>
int main()
{
 FILE *f1, *f2;
 f1=fopen("structure1.c","r");
 f2=fopen("output1.c","w");
 char ch;
 while(1)
 {
  ch=fgetc(f1);
  if(ch==EOF)
  break;
  else
  fputc(ch,f2);
  }
  fclose(f1);
  fclose(f2);
  return 0;
  }
