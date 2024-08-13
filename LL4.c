//creating a linked list with n no. of nodes, insering an element at the end of the linked list and then printing
#include <stdio.h>
#include <stdlib.h>
struct node
{
 int data;
 struct node *next;
}; 
struct node *insertatend(struct node *ptr);
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
 head=insertatend(head);
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
 struct node *insertatend(struct node *ptr)
 {
  int data;
  struct node *head=ptr;
  struct node *fnode=(struct node*)malloc(sizeof(struct node));
  printf("Enter the data of the new node:");
  scanf("%d",&data);
  while(ptr->next!=NULL)
  {
   ptr=ptr->next;
  }
fnode->data=data;
 fnode->next=NULL;
 ptr->next=fnode;
  return head;
 } 
  
  
  
  
  
 
 
