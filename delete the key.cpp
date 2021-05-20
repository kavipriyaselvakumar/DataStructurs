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
	temp=head;
	int target;
	cout<<"Enter the target element to be deleted";
	cin>>target;
	while(temp!=NULL)
	{
		if(head->data==target)
		{
			if(head->next==NULL)
			{
				head=NULL;
			}
			else{
				head=head->next;
				break;
			}
		}
		else if(temp->next->data==target)
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
