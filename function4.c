ll#include <stdio.h>
void percentage(int s, int m, int sk);
int main()
{
 int s,m,k;
 printf("Enter the marks in Science, Mathematics and Sanskrit respectively:");
 scanf("%d %d %d",&s,&m,&k);
 percentage(s,m,k);
 return 0;
}
void percentage(int s, int m, int sk)
{
 printf("The percentage is %f",(s+m+sk)/3.0);
}  
