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
	node *ptr1,*ptr2;
	ptr1=head;
	while(ptr1!=NULL && ptr1->next!=NULL)
	{
		ptr2=ptr1;
		while(ptr2->next!=NULL)
		{
			if(ptr1->data==ptr2->next->data)
			{
				ptr2->next=ptr2->next->next;
			}
			else{
				ptr2=ptr2->next;
			}
		}
		ptr1=ptr1->next;
	}
	temp=head;
	while(temp!=NULL)
	{
		cout<<temp->data;
		temp=temp->next;
	}
}
