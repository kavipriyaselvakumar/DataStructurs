#include<iostream>
using namespace std;
struct node
{
	int data;
	struct node *next;
}*head=NULL;
int main()
{
	int n;
	cout<<"Enter the number of node:";
	cin>>n;
	int count=0;
	node *temp=new node();
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
			count=1;
		}
		else{
			newnode->data=ele;
			newnode->next=NULL;
			count++;
			temp=head;
			while(temp->next!=NULL)
			{
				temp=temp->next;
			}
			temp->next=newnode;
		}
	}
	cout<<"Enter the position to be deleted:";
	int position;
	cin>>position;
	temp=head;
	for(int i=0;i<n;i++)
	{
		if(position==0)
		{
			head=head->next;
			break;
		}
		if(i==position-2)
		{
			temp->next=temp->next->next;
			break;
		}
		temp=temp->next;
	}
	temp=head;
	while(temp!=NULL)
	{
		cout<<temp->data;
		temp=temp->next;
	}
}
