//creating a linked list with n no. of nodes, insering an element at the middle position of the linked list and then printing
#include <stdio.h>
#include <stdlib.h>
struct node
{
 int data;
 struct node *next;
}; 
struct node *insertatmiddle(struct node *ptr,int pos);
void traverse(struct node *ptr);
int main()
{
 int data,n,i,pos;
 struct node *head=(struct node*)malloc(sizeof(struct node));
 struct node *temp=(struct node*)malloc(sizeof(struct node));
 printf("Enter the no. of nodes you want to create:\n");
 scanf("%d",&n);
 printf("Enter the data of the 1st node:\n");
 scanf("%d",&data);
 printf("Enter the position where you want to enter:");
  scanf("%d",&pos);
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
 head=insertatmiddle(head,pos);
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
 struct node *insertatmiddle(struct node *ptr, int pos)
 {
  int data,i;
  struct node *head=ptr;
  struct node *p=ptr;
  struct node *fnode=(struct node*)malloc(sizeof(struct node));
  printf("Enter the data of the new node:");
  scanf("%d",&data);
  for(i=1;i<=pos-1;i++)
  {
  if(i>1)
  {
   p=p->next;
  } 
   ptr=ptr->next;
  }
fnode->data=data;
 fnode->next=ptr;
 p->next=fnode;
  return head;
 } 
  
  
  
  
  
 
 
