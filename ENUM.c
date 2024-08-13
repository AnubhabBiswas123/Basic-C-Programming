#include <stdio.h>
int main()
{
 enum weak{Sunday=1,Monday,Tuesday=99,Wednesday,Thursday=4,Friday,Saturday};
 enum weak day;
 day=Wednesday;
 printf("%d",day);
 day=Saturday;
 printf("%d",day);
 return 0;
 }
