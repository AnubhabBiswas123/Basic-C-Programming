#include <stdio.h>
int main()
{
 enum weak{Sunday,Monday,Tuesday,Wednesday,Thursday,Friday,Saturday};
 enum weak day;
 for(day=Sunday;day<=Saturday;day++)
 printf("%d",day);
 return 0;
 }
