#include<iostream>
using namespace std;
struct node
{
	int data;
	struct node *next;
}*head=NULL;
int main()
{
	int n=7;
	cout<<"Enter the 5 node element:"<<endl;
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
	node *current=new node();
	current=head;
	node *prev=new node();
	prev=NULL;
	node *nextone=new node();
	nextone=NULL;
	while(current)
	{
		nextone=current->next;
		current->next=prev;
		prev=current;
		current=nextone;
	}
	head=prev;
	temp=head;
	while(temp)
	{
		cout<<temp->data;
		temp=temp->next;
	}
}
