#include <stdio.h>
#include <stdlib.h>
#define max 5
struct stack
{
 int data;
 struct stack* next;
};
 
struct stack* head=NULL;
struct stack* push(int);
struct stack* pop(struct stack* head);
int peek(struct stack* head);
void display(struct stack* head);
struct stack* reverse(struct stack* head);
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
  head=push(value);
  break;
  
  case 2:
  head=pop(head);
  break;
  
  case 3:
  head=reverse(head);
  display(head);
  break;
  
  case 5:
  del=peek(head);
  if(del!=-1)
  printf("The element at the top of the stack is %d",del);
  break;
}
}while(choice!=4);
return 0;
}  
struct stack* push(int value)
{
 struct stack* fnode=(struct stack*)malloc(sizeof(struct stack));
 struct stack* temp;
 fnode->data=value;
 fnode->next=NULL;
 temp=head;
 fnode->next=temp;
 head=fnode;
 return head;
}
struct stack* pop(struct stack* head)
{
 int del;
 struct stack* ptr=head;
 del=ptr->data;
 if(ptr!=NULL)
 {
 printf("\nThe data to be deleted is %d",del);
 head=ptr->next;
 free(ptr);
 return head;
 }
 else
 printf("\nSTACK UNDERFLOW");
}
void display(struct stack* head)
{
 struct stack* ptr=head;
 if(ptr==NULL)
 printf("\nSTACK IS EMPTY");
 else
 {
  while(ptr!=NULL)
  {
   printf("%d ",ptr->data);
   ptr=ptr->next;
  }
 }  
}
 int peek(struct stack* head)
 {
  if(head==NULL)
  return -1;
  else
  return head->data;
 }        
struct stack* reverse(struct stack* head)
{
 struct stack* fast=NULL;
 struct stack* slow=NULL;
 struct stack* current=head;
 while(current!=NULL)
 {
 fast=current->next;
 current->next=slow;
 slow=current;
 current=fast;
 }
 return slow;
 }
 
 
 




    
  
  
  
  
   
  
  
  
  
  
  
  
  
  
  
  
  
  
