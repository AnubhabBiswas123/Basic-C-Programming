#include <stdio.h>
#include <stdlib.h>
struct node
{
 char data;
 struct node* next;
}; 
void display(struct node *head);
int isPalindrome(struct node* head);
int compare(struct node* head, struct node* second_half);
struct node* push(struct node* head, char data);
struct node* reverse(struct node* head);
int main()
{
 struct node *head=NULL;
 char ch[]="abacaba";
 for(int i=0;ch[i]!='\0';i++)
 {
  head=push(head,ch[i]);
  display(head);
  printf(isPalindrome(head)?"Palindrome":"Not Palindrome");
 }
 return 0;
}
 void display(struct node *head)
 {
  while(head!=NULL)
  {
   printf("%c ",head->data);
   head=head->next;
  }
 }
  int isPalindrome(struct node* head)
  {
     struct node* fast=head;
     struct node* slow=head;
     struct node* prev_slow=NULL;
     struct node* second_half=NULL;
     struct node* midnode=NULL;
     //Finding the middle node
     while(fast!=NULL&&fast->next!=NULL)
     {
      prev_slow=slow;
      slow=slow->next;
      fast=fast->next->next;
     }
     //If the no. of nodes is odd, store the midnode somewhere
     if(fast!=NULL)
     {
      midnode=slow;
      slow=slow->next;
     }
     second_half=slow;
     prev_slow->next=NULL;
     //Reversing the second half of the list
     second_half=reverse(second_half); 
     int res=compare(head,second_half);
     return res;
    } 
    
    struct node* reverse(struct node* head)
    {
     struct node* current=head;
     struct node* prev=NULL;
     struct node* newnode=NULL;
     while(current!=NULL)
     {
      newnode=current->next;
      current->next=prev;
      newnode->next=current;
      prev=current;
      current=current->next;
     }
    return prev;
    }
        
     int compare(struct node* head, struct node* second_half)
     {
      while(head!=NULL&&second_half!=NULL)
      {
       if(head->data==second_half->data)
       {
       head=head->next;
       second_half=second_half->next;
      }
      else
      return 0;
     }
     if(head==NULL&&second_half==NULL)
     return 1;
     
     //will reach here if one is null and the other is not
     return 0;
      }   
     struct node* push(struct node* head, char data)
     {
      struct node* newnode=(struct node*)malloc(sizeof(struct node));
      newnode->data=data;
      newnode->next=head;
      head=newnode;
      return head;
     } 
     
     
     
     
     
      
      
      
     
     
      
     
     
     
     
     
     
