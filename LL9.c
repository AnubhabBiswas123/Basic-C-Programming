//creating a linked list with n no. of nodes, deleting an element at the value of the linked list and then printing
#include <stdio.h>
#include <stdlib.h>
struct node
{
 int data;
 struct node *next;
}; 
struct node *deleteatvalue(struct node *ptr,int val);
void traverse(struct node *ptr);
int main()
{
 int data,n,i,val;
 struct node *head=(struct node*)malloc(sizeof(struct node));
 struct node *temp=(struct node*)malloc(sizeof(struct node));
 printf("Enter the no. of nodes you want to create:\n");
 scanf("%d",&n);
 printf("Enter the value where you want to delete:");
 scanf("%d",&val);
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
 head=deleteatvalue(head,val);
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
 struct node *deleteatvalue(struct node *ptr, int val)
 {
  int data,i=0;
  struct node *head=ptr;
  struct node *p=ptr;
  while(ptr->data!=val&&ptr->next!=NULL)
  {
   if(i!=0)
   {
    p=p->next;
   }
   i=1;
   ptr=ptr->next;
  }
  if(i==1&&ptr->data==val)
  {
  p->next=ptr->next;
  free(ptr);
  }
  else if(i==0)
  {
  p=p->next;
  head=p;
  free(ptr);
  }  
 
  return head;
 } 
  
  
  
  
  
 
 
