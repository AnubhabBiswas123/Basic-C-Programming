//Adding k to each element of the list
#include <stdio.h>
#include <stdlib.h>
struct node
{
 int data;
 struct node *next;
 };
void traverse(struct node* ptr);
void add(struct node* p,int k);
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
 add(head,k);
 traverse(head);
 return 0;
 }
 void add(struct node* ptr, int k)
 {
  while(ptr!=NULL)
  {
   ptr->data=ptr->data+k;
   ptr=ptr->next;
  }
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
 
 
  
  
  
  
