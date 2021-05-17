#include<iostream>
using namespace std;
struct node
{
	int data;
	struct node *next;
}*head=NULL;
int main()
{
	int n=5;
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
	head->next->next->next->next=head->next;
	node *slow=head;
	node *fast=head;
	node *result;
	while(slow && fast && fast->next)
	{
		slow=slow->next;
		fast=fast->next->next;
		if(slow==fast)
		{
			result=slow;
			break;			
		}
	}
	int count1=1;
	temp=result;
	while(temp->next!=result)
	{
		count1++;
		temp=temp->next;
	}
	cout<<count1;
}
