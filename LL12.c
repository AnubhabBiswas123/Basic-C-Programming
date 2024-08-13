//creating a linked list with n no. of nodes, deleting the node if the data presenr in the node is smaller than the next node and then printing
#include <stdio.h>
#include <stdlib.h>
struct node
{
 int data;
 struct node *next;
}; 
void delete(struct node *ptr);
void traverse(struct node *ptr);
int main()
{
 int data,n,i;
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
 delete(head);
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
 void delete(struct node* head)
{
    struct node* current = head;
 
    /* Initialize max */
    struct node* maxnode = head;
    struct node* temp;
 
    while (current != NULL && current->next != NULL) {
        /* If current is smaller than max, then delete current */
        if (current->next->data > maxnode->data) {
            temp = current;
            current=current->next;
            maxnode=current;
            free(temp);
        }
 
        /* If current is greater than max, then update max and
            move current */
        else {
            current = current->next;
            maxnode = current;
        }
    }
}





  
  
  
  
 
 
