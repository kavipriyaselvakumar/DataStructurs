#include<iostream>
using namespace std;
void delete(node **head,int pos)
{
	
}
struct node
{
	int data;
	struct node *next;
};
int main()
{
	int n;
	cout<<"Enter the number of node:";
	cin>>n;
	node *temp=new node();
	node *head=new node();
	head=NULL;
	for(int i=0;i<n;i++)
	{
		node *newnode =new node();
		int ele;
		cout<<"Enter the element:";
		cin>>ele;
		if(head==NULL)
		{
			newnode->data=ele;
			newnode->next=NULL;
			head=newnode;
		}
		else{
			newnode->data=ele;
			newnode->next=NULL;
			temp=head;
			while(temp->next!=NULL)
			{
				temp=temp->next;
			}
			temp->next=newnode;
		}
	}
	int position;
	cout<<"Enter the position to be deleted:";
	cin>>position;
	delete(&head);
}
