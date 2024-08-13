//creating a linked list with n no. of nodes, reversing the linked list and then printing
#include <stdio.h>
#include <stdlib.h>
struct node
{
 int data;
 struct node *next;
}; 
struct node *reverse(struct node *ptr);
void traverse(struct node *ptr);
int main()
{
 int data,n,i;
 struct node *head=(struct node*)malloc(sizeof(struct node));
 struct node *temp=(struct node*)malloc(sizeof(struct node));
 printf("Enter the no. of nodes you want to create:\n");
 scanf("%d",&n);
 printf("Enter the data of the 1st node:\n");
 scanf("%d",&data);
 head->data=data;
 head->next=NULL;
 temp=head;
 for(i=2;i<=n;i++)
 {
  printf("Enter the data of the %d node:\n",i);
  scanf("%d",&data);
  struct node *newnode=(struct node*)malloc(sizeof(struct node));
  newnode->data=data;
  newnode->next=NULL;
  temp->next=newnode;  
  temp=newnode;
 }
 head=reverse(head);
 traverse(head);
 }
 void traverse(struct node *ptr)
 {
  while(ptr!=NULL)
  {
   if(ptr->next==NULL)
   printf("%d",ptr->data);
   else
   printf("%d->",ptr->data);
   ptr=ptr->next;
  }
 }  
 struct node *reverse(struct node *ptr)
 {
  int data,i=0;
  struct node *prev=NULL;
  struct node *current=ptr;
  struct node *next=NULL;
  while(current!=NULL)
  {
   next=current->next;
   current->next=prev;
   prev=current;
   current=next;
  } 
 
  return prev;
 } 
  
  
  
  
  
 
 
