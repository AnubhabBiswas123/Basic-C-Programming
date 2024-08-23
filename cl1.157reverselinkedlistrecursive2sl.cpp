#include <iostream>
using namespace std;

template <typename t>
class LinkedListNode
{
	public:
	t data;
	LinkedListNode<t> *next;
	LinkedListNode(t data)
	{
		this->data=data;
		this->next=NULL;
	}
};
void print(LinkedListNode<int> *head)
{
	cout<<endl;
	LinkedListNode<int> *temp=head;
	while(temp!=NULL)
	{
		cout<<temp->data<<" ";
		temp=temp->next;
	}
	cout<<endl;
}


LinkedListNode<int>* reverse(LinkedListNode<int> *& head)
{
    //Base case
    if(head==NULL || head->next== NULL){
        return head;
    }
    LinkedListNode<int> * chotahead= reverse(head->next);
    head->next->next=head;
    head->next=NULL;
    return chotahead;

}
LinkedListNode<int> *reverseLinkedList(LinkedListNode<int> *head) 
{
	return reverse(head);    

}
void insertAttail(LinkedListNode<int>* &tail,int data)
{
	LinkedListNode<int> *temp= new LinkedListNode<int>(data);
	tail->next=temp;
	tail=temp;
}	
	
int main()
{
	LinkedListNode<int> *head=NULL;
	LinkedListNode<int> *tail=NULL;
	int n, data;
	cout<<"Enter the no. of nodes you want to create:";
	cin>>n;
	cout<<endl;
	if(n==0)
		return 0;
	cout<<"Enter the data of the head node:";
	cin>>data;
	cout<<endl;
	head= new LinkedListNode<int>(data);
	tail=head; 
	if(n>1)
	{
		for(int i=2;i<n+1;i++)
		{
			cout<<"Enter the data of the "<<i<<" th node:";
			cin>>data;
			cout<<endl;
			insertAttail(tail,data);
		}
	}
	print(head);
	head=reverseLinkedList(head);
	print(head);	
	return 0;
}
