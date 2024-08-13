#include <stdio.h>
#include <stdlib.h>
struct node
{
 int data;
 struct node* next;
}; 
void swap(struct node* head);
void display(struct node* head);
struct node* delete(struct node* head, int m, int n);
struct node* deleteposition(struct node* head, int pos);
int main()
{
 int M,N,pos,n,data;
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
  printf("\nEnter the value of m and n:");
  scanf("%d %d",&M,&N);
  head=delete(head,M,N);
  display(head);
  return 0;
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
 struct node* delete(struct node* head, int m, int n)
{
    struct node* current = head;
    struct node* prev = NULL;
    
    int m_count = 0;
    int n_count = 0;
    
    while (current != NULL)
    {
        if (m_count < m)
        {
            m_count++;
            prev = current;
            current = current->next;
        }
        else if (n_count < n)
        {
            n_count++;
            struct node* temp = current;
            current = current->next;
            free(temp);
        }
        else
        {
            m_count = 0;
            n_count = 0;
            prev->next = current;
            prev = NULL;
        }
    }
    
    if (prev != NULL)
    {
        prev->next = NULL;
    }
    
    return head;
}
   




  
  
  
  
  
