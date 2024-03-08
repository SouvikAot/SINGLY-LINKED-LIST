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
 void length()
 {
 	struct node *temp;
 	int count=0;
 	temp=head;
 	while(temp!=0)
 	{
 		count++;
 		temp=temp->next;
	 }
	 printf("LENFGT IS %d", count);
 }
 int main()
 {
 	create();
 	length();
 }
