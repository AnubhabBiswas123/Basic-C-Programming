#include <stdio.h>
#include <stdlib.h>
struct node
{
 int data;
 struct node* next;
}; 
void swap(struct node* head);
void display(struct node* head);
int main()
{
 int k,n,data;
 printf("\nEnter the no. of nodes you want to enter:");
 scanf("%d",&n);
 struct node* head=(struct node*)malloc(sizeof(struct node));
 struct node* temp;
 printf("\nEnter the data of node 1:");
 scanf("%d",&data);
 head->data=data;
 head->next=NULL;
 temp=head;
 for(int i=2;i<=n;i++)
 {
  struct node* fnode=(struct node*)malloc(sizeof(struct node));
  printf("\nEnter the data of node %d:",i);
  scanf("%d",&data);
  fnode->data=data;
  fnode->next=NULL;
  temp->next=fnode;
  temp=fnode;
 }
  display(head);
  swap(head);
  display(head);
  return 0;
}
void swap(struct node* head)
{
  int data;
  struct node* current=head;
  struct node* newnode=NULL;
  struct node* prev=NULL;
  while(current!=NULL&&current->next!=NULL)
  {
   newnode=current->next;
   current->next=newnode->next;
   newnode->next=current;
   if(prev!=NULL)
    prev->next=newnode;
   else
   head=newnode;
   prev=current;
   current=current->next;
  }  
 }    
  void display(struct node* head)
  {
   printf("\n");
   struct node* ptr=head;
   while(ptr!=NULL)
   {
    if(ptr->next!=NULL)
    printf("%d->",ptr->data);
    else
    printf("%d",ptr->data);
    ptr=ptr->next;
   }
  }   





 
  
  
  
  
  
