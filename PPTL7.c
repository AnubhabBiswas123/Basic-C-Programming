#include <stdio.h>
#include <stdlib.h>
struct node
{
 int data;
 struct node* next;
}; 
void traverse(struct node* head);
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
  traverse(head);
  return 0;
}
void traverse(struct node* head)
{
  int count=0;
  struct node* ptr=head;
  while(ptr!=NULL)
  {
   if(count%2==0)
   printf("%d ",ptr->data);
   count++;
   ptr=ptr->next;
 }
}    





 
  
  
  
  
  
