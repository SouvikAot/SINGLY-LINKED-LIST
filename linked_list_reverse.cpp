#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next ;
};

 struct node *head;
create()
 {
 	int choice;
 	struct node *newnode, *temp;
 		while(choice)
	{
	newnode=(struct node*)malloc(sizeof(struct node));
	printf("ENTER DATA\n");
	scanf("%d",&newnode->data);
	newnode->next=0;
	if(head==0)
	{
		head=temp=newnode;
	}
	else
	{
		temp->next=newnode;
		temp=newnode;
		newnode->next=0;
	}

	printf("do you want to continue\n");
	scanf("%d", &choice);
   }
 }
reverse()
{
	struct node *current, *prevnode,*nextnode;
	prevnode=0;
	current=nextnode=head;
	while(nextnode!=0)
	{
		nextnode=nextnode->next;
		current->next=prevnode;
		prevnode=current;
		current=nextnode;
		
	}
	head=prevnode;
}
display()
{
	struct node *temp;
	temp=head;
	while(temp!=0)
	{
		printf("%d",temp->data);
		temp=temp->next;
	}
}
int main()
{
	create();
	reverse();
	display();
}
