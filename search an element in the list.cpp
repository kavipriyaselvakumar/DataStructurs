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
	int count=0;
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
	temp=head;
	cout<<"Enter the number to be searched:";
	int num;
	cin>>num;
	for(int i=0;i<count;i++)
	{
		if(temp->data==num)
		{
			cout<<"The element is found";
			return 0;
		}
		temp=temp->next;
	}
	cout<<"The element is not found";
}
