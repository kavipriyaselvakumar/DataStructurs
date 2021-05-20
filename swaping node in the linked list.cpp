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
	for(int i=0;i<10;i++)
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
	int k;
	cin>>k;
        node *prevx,*nextx;
    	node *prevy,*nexty;
        temp=head;
        int e=count-(k+k);
        int end=count-e;
        temp=head;
        for(int i=1;i<end;i++)
        {
            if(i==k-1)
            {
                prevx=temp->next;
            }
            temp=temp->next;
        }
        nextx=temp;
        cout<<prevx->data<<" "<<nextx->data;
        swap(prevx->data,nextx->data);

    temp=head;
    while(temp!=NULL)
    {
    	cout<<temp->data;
    	temp=temp->next;
	}
}
