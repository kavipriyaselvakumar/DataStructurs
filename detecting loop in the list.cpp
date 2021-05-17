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
	head->next->next->next->next->next=head->next;
	int flag[5]={0};
	temp=head;
	int i=0;
	while(temp!=NULL)
	{
		if(flag[i]==1)
		{
			cout<<"There is a loop";
			return 0;
		}
		flag[i++]=1;
		temp=temp->next;
	}
	cout<<"There is no loop in the list.";
}
