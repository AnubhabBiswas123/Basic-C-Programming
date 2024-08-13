#include <stdio.h>
#include <stdlib.h>
int main()
{
 FILE *ft,*fs;
 char ch;
 fs=fopen("structure1.c","r");
 if(fs==NULL)
 {
 puts("Cannot oprn source file");
 }
 ft=fopen("structure5.c","w");
 if(ft==NULL)
 {
 puts("Cannot open target file");
 fclose(fs);
 }
 while(1)
 {
  ch=fgetc(fs);
  if(ch==EOF)
  break;
  else
  fputc(ch,ft);
  }
  fclose(fs);
  fclose(ft);
  }
