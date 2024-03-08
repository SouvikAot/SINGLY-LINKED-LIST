#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next ;
};

 struct node *head;
 deleteFromBegin()
 {
 	struct node *temp;
 	temp =head;
 	head=head->next;
 	free(temp);
 }
 deleteFromend()
 {
 	struct node *temp, *prevnode;
 	temp=head;
 	while(temp->next!=0)
 	{
 		prevnode=temp;
 		temp=temp->next;
	 }
	 if(temp==head)
	 {
	 	head=0;
	 	free(temp);
	 }
	 else
	 {
	 	prevnode->next=0;
	 }
     free(temp);
 }
 deleteatpos(){
 	struct node *temp,*prevnode;
 	int pos,i=1;
 	temp=head;
 	printf("Enter a pos\n");
 	scanf("%d",&pos);
 	while(i<pos-1)
 	{
 		temp=temp->next;
 		i++;
	 }
	 prevnode=temp->next;
	 temp->next=prevnode->next;
	 free(prevnode);
 }
 display()
 {
 	struct node *temp;
 	temp=head;
 	while(temp!=0)
 	{
 		printf("%d\t",temp->data);
 		temp=temp->next;
	 }
	 printf("\n");
 }
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
 int main()
 {
 	int ch;
 	printf("CREATE ONE LINKED LIST TO PERFORM ALL TYPE DELETION OPERATION\n");
 	create();
 	while(1){
 		printf("ENTER 1 TO DELETE FROM END PRESS 2 DELETE FROM BEGIN PRTESS 3 TO DELETE FROM DESIRED position press 4 to display\n");
 	scanf("%d",&ch);
	switch(ch)
	{
		case 1:
			 	deleteFromend();
			 	break;
		case 2:
			deleteFromBegin();
			break;
		case 3:
			deleteatpos();
			break;
		case 4: 
			display();
			break;
	}}
 }
