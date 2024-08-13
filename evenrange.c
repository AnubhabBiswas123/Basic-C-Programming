#include <stdio.h>
int main(){
int range1,range2,i;
printf("Enter the range:");
scanf("%d %d",&range1,&range2);
i=range1;
printf("\nAll the even numbers within the range provided are:-");
for(;i>=range1 && i<=range2;i++){
if(i%2==0){
printf("\n%d",i);}}
return 0;}


