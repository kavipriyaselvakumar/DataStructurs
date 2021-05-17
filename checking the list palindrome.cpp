#include<iostream>
#include<stack>
using namespace std;
struct node
{
	int data;
	struct node *next;
}*head=NULL;
int main()
{
	int n=5;
	cout<<"Enter the 3 node element:"<<endl;
	int count=0;
	node *temp=new node();
	for(int i=0;i<3;i++)
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
	stack<int> stack;
	temp=head;
	while(temp!=NULL)
	{
		stack.push(temp->data);
		temp=temp->next;
	}
	temp=head;
	int c1=0;
	while(!stack.empty())
	{
		int x=stack.top();
		if(temp->data==x)
		{
			c1++;
		}
		stack.pop();
		temp=temp->next;
	}
	if(c1==count)
	{
		cout<<"Palindrome";
	}
	else
	{
		cout<<"Not palindrome";
	}
}
