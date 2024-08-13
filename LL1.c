//creating a linked list with 4 nodes and printing
#include <stdio.h>
#include <stdlib.h>
struct node
{
 int data;
 struct node *next;
}; 
void traverse(struct node *ptr);
int main()
{
 struct node *head=(struct node*)malloc(sizeof(struct node));
 struct node *second=(struct node*)malloc(sizeof(struct node));
 struct node *third=(struct node*)malloc(sizeof(struct node));
 head->data=10;
 head->next=second;
 second->data=20;
 second->next=third;
 third->data=30;
 third->next=NULL;
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
 
 
 
