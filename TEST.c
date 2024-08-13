#include <stdio.h>
#include <stdlib.h>
struct node
{
 int data;
 struct node *next;
}; 
void traverse(struct node *ptr, int n);
struct node *reverse(struct node *ptr);
int main()
{
 int res,data,n,i;
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
 printf("Enter the value of n:");
 scanf("%d",&n);
 traverse(head,n-1);
 return 0;
 }
 void traverse(struct node *ptr,int n)
 {
  struct node *p=ptr;
  int i=1;
  for(i=1;i<n;i++)
  {
   p=p->next;
 }
 int data=p->data;
 printf("The value is %d",data);
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
 
 
