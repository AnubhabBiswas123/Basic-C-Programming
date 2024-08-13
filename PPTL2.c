#include <stdio.h>
#include <stdlib.h>
struct node
{
 int data;
 struct node *next;
 };
void traverse(struct node* ptr);
void interchange(struct node* p,int k);
int main()
{
 struct node *head=(struct node*)malloc(sizeof(struct node));
 struct node *temp;
 int i,data,n,k;
 printf("Enter the no. of nodes:");
 scanf("%d",&n);
 printf("\nEnter the data of node 1:");
 scanf("%d",&data);
 head->data=data;
 head->next=NULL;
 temp=head;
 for(i=2;i<=n;i++)
 {
  struct node *fnode=(struct node*)malloc(sizeof(struct node));
  printf("\nEnter the data of node %d:",i);
  scanf("%d",&data);
  fnode->data=data;
  fnode->next=NULL;
  temp->next=fnode;
  temp=fnode;
 }
 printf("\nEnter the value of k:");
 scanf("%d",&k);
 printf("\nThe list before interchanging:");
 traverse(head);
 printf("\nThe list after interchanging:");
 interchange(head,k);
 traverse(head);
 return 0;
 }
 void traverse(struct node* ptr)
 {
  while(ptr!=NULL)
  {
   if(ptr->next!=NULL)
   printf("%d->",ptr->data);
   else
   printf("%d",ptr->data);
   ptr=ptr->next;
  }
 }    
 void interchange(struct node* ptr, int k)
 {
   int data;
   struct node* slow=ptr;
   struct node* fast=ptr->next;
   for(int i=1;i<k;i++)
   {
    fast=fast->next;
    slow=slow->next;
   }
   data=slow->data;
   slow->data=fast->data;
   fast->data=data;
  }
   
 
 
 
 
 
  
  
  
  
