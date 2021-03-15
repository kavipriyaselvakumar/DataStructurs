#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *next;
}*head='NULL',*temp,*last,*temp1;
void main()
{
	int max,i,n,data;
	struct node *newnode;
	printf("Enter the number of elements in the list:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("Enter the element to be inserted in the list:");
		scanf("%d",&data);
		newnode=(struct node*)malloc(sizeof(struct node));
		if(newnode!='NULL')
		{
			if(head=='NULL')
			{
				newnode->data=data;
				newnode->next='NULL';
				head=newnode;
			}
			else{
				temp=head;
				while(temp->next!='NULL')
				{
					temp=temp->next;
				}
				newnode->data=data;
				newnode->next='NULL';
				temp->next=newnode;
			}
		}
		else{
			printf("Memory is note allocated");
		}
	}
	max=head->data;
	temp=head;
	for(temp=head;temp!='NULL';temp=temp->next)
	{
		if(temp->data>max)
		{
			max=temp->data;
		}
	}
	printf("%d",max);
}
