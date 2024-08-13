#include <stdio.h>
#include <stdlib.h>
int max;
printf("\nEnter the no. of elements of the stack");
scanf("%d",&max);
int top=-1;
int *stack=(int*)calloc(max,sizeof(int));
void push(int x);
int pop();
int main()
{
 int value,del,choice;
 do
{
 printf("\n1.PUSH");
 printf("\n2.POP");
 printf("\n3.EXIT");
 printf("\nEnter your choice");
 scanf("%d",&choice);
 switch(choice)
 {
  case 1:
  printf("\nEnter the value you want to push");
  scanf("%d",&value);
  push(value);
  break;
  
  case 2:
  del=pop();
  if(del!=-1)
  printf("\nThe value deleted is %d",del);
  break;
 }
 }while(choice!=3);
 return 0;
 }
 void push(int x)
 {
  if(top==max-1)
  {
   printf("\nSTACK OVERFLOW");
   return;
  }
  else
  {
   top=top+1;
   stack[top]=x;
  }
 }   
 
 int pop()
 {
  int del;
  if(top==-1)
  {
   printf("STACK UNDERFLOW");
   return -1;
  }
  else
  {
   del=stack[top];
   top=top-1;
   return del;
  }
 }    
