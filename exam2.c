#include <stdio.h>
int sum=0,rem;
int reverse_function(int num){
  if(num){
    rem=num%10;
    sum=sum*10+rem;
    reverse_function(num/10);
  }
  else
    return sum;
  return sum;
}
int main(){
  int num,reverse_number;
FILE *f1;
f1=fopen("result1.c","a");
  printf("Enter any number:");
  scanf("%d",&num);
  reverse_number=reverse_function(num);
  printf("The reverse of entered number is :%d",reverse_number);
  fprintf(f1,"\nThe reverse of entered number is :%d",reverse_number);
  fclose(f1);
  return 0;
}

