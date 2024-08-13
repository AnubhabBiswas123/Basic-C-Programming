#include <stdio.h>
#include <stdlib.h>
struct node
{
 int data;
 struct node* next;
}; 
int count(struct node* head,int x);
void display(struct node* head);
int main()
{
 int x,n,data;
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
  printf("\nEnter the element you want to search:");
  scanf("%d",&x);
  int c=count(head,x);
  if(c!=-1)
  printf("The given element is present %d times",c);
  else
  printf("No such element found in the linked list");
  return 0;
}
int count(struct node* head,int x)
{
 struct node* ptr=head;
 int c=0;
 while(ptr!=NULL)
 {
  if(ptr->data==x)
  c++;
  ptr=ptr->next;
 }
 return c; 
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





 
  
  
  
  
  
