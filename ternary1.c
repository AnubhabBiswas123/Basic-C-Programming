#include <stdio.h>
int main()
{
int a,b,c,gr;
printf("Enter the values of a,b and c:");
scanf("%d %d %d",&a,&b,&c);
gr=(a>b)?(a>c)?a:c:(b>c)?b:c;
printf("The greatest number among three is %d",gr);
return 0;
}

