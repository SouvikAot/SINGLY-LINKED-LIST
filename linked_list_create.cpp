#include<stdio.h>
#include<stdlib.h>	
int display();
int main(){
	
	struct node{
		int data;
		struct node *next;
	};
	struct node *head, *newnode,*temp;
	head=0;
	int count,pos;
////-------------------------creation of linked list----------------------------------------------------------------------------------------------------------///
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
	}
	printf("do you want to continue\n");
	scanf("%d", &choice);
   }
/////////////----------------traversal of linked list------------------------------------------------------------------------////////////////////////////////////

	temp=head;
	while(temp!=0)
	{
		printf("%d\t",temp->data);
		temp=temp->next;
	}
	

/////////---------------------------Insertion in linked list-----------------------------------------------------------------///////////////////////////////////
////////////////--------------------insert  at begining--------------------------------------------------------------------////////////////////////////////////
	struct node *newnode1;
	newnode1=(struct node*)malloc(sizeof(struct node));
	printf("ENTER A DATA A NEW DATA WHICH YOU WANt To INSERT AT BEGIN\n");
	scanf("%d",&newnode1->data);
	newnode1->next=head;
	head=newnode1;     
	temp=head;
/////////////////-----------------------insertion at the end------------------------------------------------------------------////////////////////////////////
	struct node *newnode2,*newnode3;
	newnode2= (struct node*)malloc(sizeof(struct node));	
	printf("ENTER A DATA A NEW DATA WHICH YOU WANt To INSERT AT END\n");
	scanf("%d",&newnode2->data);
	while(temp->next!=0)
	{
		temp=temp->next;
	}
	temp->next=newnode2;
	newnode2->next=0;
	temp=head;
	while(temp!=0)
	{
		printf("%d\t",temp->data);
		temp=temp->next;
		count++;
	}
	printf("\n");
	printf("ENTER POSITION WHERE YOU WANT TO INSERT\n");
	scanf("%d",&pos);
	newnode3=(struct node*)malloc(sizeof(struct node));
	if(pos>count)
	{
		printf("INVALID POSTION|\n");
	}
	else
	{
		printf("ENTER DATA WHICH YOU WANT TO INSERT");
		scanf("%d",&newnode3->data);
	}
	struct node *ptr;
	ptr=head;
	for(int i=1; i<pos; i++)
	{
		ptr=ptr->next;
	}
	newnode->next=ptr->next;
	ptr->next=newnode3;
	temp=head;
	while(temp!=0)
	{
		printf("%d\t",temp->data);
		temp=temp->next;

	}
}
