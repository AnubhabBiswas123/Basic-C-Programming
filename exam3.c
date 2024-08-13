#include <stdio.h>
int main()
{
 FILE *f1;
 f1=fopen("result1.c","a");
 struct student
 {
  int a[4];
  };
  struct student x={1,5,0,4};
  int i,temp,flag,j;
  for(i=0;i<4;i++)
  {
  flag=0;
  for(j=0;j<3;j++)
  {
   if(x.a[j]>x.a[j+1])
   {
    flag=1;
    temp=x.a[j];
    x.a[j]=x.a[j+1];
    x.a[j+1]=temp;
    }
    }
    if(flag==0)
    break;
    }
    printf("The array after getting sorted is:");
    for(i=0;i<4;i++)
    {
    printf("%d",x.a[i]);
    fprintf(f1,"\n%d",x.a[i]);
    }
    fclose(f1);
    return 0;
    
    }
    
    
