#include <stdio.h>
#define max 5
int stack[max];
int top=-1;
void push(int);
int pop();
void display();
int peek();
int main()
{
 int del,choice,value;
 do
 {
 printf("\n1.PUSH");
 printf("\n2.POP");
 printf("\n3.DISPLAY");
 printf("\n4.EXIT");
 printf("\n5.PEEK");
 printf("\nEnter your choice:");
 scanf("%d",&choice);
 switch(choice)
 {
  case 1:
  printf("\nEnter the value you want to push:");
  scanf("%d",&value);
  push(value);
  break;
  
  case 2:
  del=pop();
  if(del!=-999)
  {
   printf("\nThe element deleted from the stack is %d",del);
  }
  break;
  
  case 3:
  display();
  break;
  
  case 5:
  del=peek();
  if(del!=-1)
  printf("The element at the top of the stack is %d",del);
  break;
}
}while(choice!=4);
return 0;
}  
void push(int value)
{
 if(top==max-1)
 {
  printf("The stack is full");
  return;
 }
 else
 {
  top=top+1;
  stack[top]=value;
 }
}
int pop()
{
 int del;
 if(top==-1)
 {
  printf("The stack is empty");
  return -999;
 }
 else
 {
  del=stack[top];
  top=top-1;
  return del;
 }
}
void display()
{
 for(int i=0;i<=top;i++)
 {
  printf("%d ",stack[i]);
 }
}
  
  int peek()
  {
   if(top==-1)
   {
   printf("STACK UNDERFLOW");
   return -1;
   }
   else
   {
    return stack[top];
   }
  }       





    
  
  
  
  
   
  
  
  
  
  
  
  
  
  
  
  
  
  
