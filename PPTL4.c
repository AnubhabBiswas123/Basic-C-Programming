#include <stdio.h>
#include <stdlib.h>
struct node
{
 int data;
 struct node* next;
}; 
void interchange(struct node* head,int k);
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
  printf("\nEnter the value of k:");
  scanf("%d",&k);
  display(head);
  interchange(head,k);
  display(head);
  return 0;
}
void interchange(struct node* head,int k)
{
  int data;
  struct node* ptr=head;
  struct node* fast=head->next;
  for(int i=1;i<k;i++)
  {
   ptr=ptr->next;
   fast=fast->next;
  }
  data=ptr->data;
  ptr->data=fast->data;
  fast->data=data;
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





 
  
  
  
  
  
