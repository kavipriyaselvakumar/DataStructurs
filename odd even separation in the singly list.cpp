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
	node *oddlisthead=new node();
	oddlisthead=NULL;
	node *oddtemp=new node();
	node *oddtemp1=new node();
	node *evenlisthead=new node();
	evenlisthead=NULL;
	node *eventemp1=new node();
	temp=head;
	while(temp)
	{
		if(temp->data%2==0)
		{
			node *eventemp=new node();
			if(evenlisthead==NULL)
			{
				eventemp->data=temp->data;
				eventemp->next=NULL;
				evenlisthead=eventemp;
			}
			else{
				eventemp->data=temp->data;
				eventemp->next=NULL;
				eventemp1=evenlisthead;
				while(eventemp1->next)
				{
					eventemp1=eventemp1->next;
				}
				eventemp1->next=eventemp;
			}
		}
		else{
			node *oddtemp=new node();
			if(oddlisthead==NULL)
			{
				oddtemp->data=temp->data;
				oddtemp->next=NULL;
				oddlisthead=oddtemp;
			}
			else{
				oddtemp->data=temp->data;
				oddtemp->next=NULL;
				oddtemp1=oddlisthead;
				while(oddtemp1->next)
				{
					oddtemp1=oddtemp1->next;
				}
				oddtemp1->next=oddtemp;
			}
		}
		temp=temp->next;
	}
	temp=evenlisthead;
	while(temp->next)
	{
		temp=temp->next;
	}
	temp->next=oddlisthead;
	temp=evenlisthead;
	while(temp)
	{
		cout<<temp->data;
		temp=temp->next;
	}
}
