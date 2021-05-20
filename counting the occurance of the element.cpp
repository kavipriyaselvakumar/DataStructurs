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
	cout<<"Enter the element count to be get:";
	int element;
	cin>>element;
	temp=head;
	int count1=0;
	for(int i=0;i<n;i++)
	{
		if(temp->data==element)
		{
			count1++;
		}
		temp=temp->next;
	}
	cout<<count1;
}
