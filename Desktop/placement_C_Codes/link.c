/******************************************************************************
Author : Asha yadav
Implement : write a C program for linked list
******************************************************************************/
#include<stdio.h>
#include<stdlib.h>
struct node{
	      int data;
	      struct node *next;
};

void insertEmt(struct node**,int);
void displayhead(struct node*);
void insertAtBeg(struct node**,int);
void deleteFrombeg(struct node**);
void deleteFromEnd(struct node**);
void deleteFrompos(struct node**,int);
int main()
{
	
	struct node *head = NULL;
	int select;
	int element;
	int position;
	while(1)
	{
		puts("----------------------------------------\n\n-----------------------------------------\n");
		printf("1.To Insert      2.To Insert at Begnning      3.To display            \n\n4.TO EXIT        5.To delete from Begnning     6. Delete from end \n\n7.Delete from position         \n");
		puts("----------------------------------------\n\n-----------------------------------------\n");
		scanf("%d",&select);
		
		switch(select)
		{
			case 1: 
				printf("Enter the element to insert \n");
				scanf("%d",&element);
				insertEmt(&head,element);
				break;
			case 2: 
				printf("Enter the element to insert \n");
				scanf("%d",&element);
				insertAtBeg(&head,element);
				break;
				
			case 3:
				displayhead(head);
				break;
			case 4:
				exit(0);
			case 5:
				deleteFrombeg(&head);
				break;
			case 6:
				if(head==NULL)
				{
				  printf("===list doesn't exit===\n");
				  break;
				}
				deleteFromEnd(&head);
				break;
			case 7:
				if(head==NULL){
				printf("===list doesn't exit===\n");
				break;}
				printf("enter the position starting from '1'\n");
				scanf("%d",&position);
				deleteFrompos(&head,position);
				break;
			
			default :
				   puts("Wrong input\n");
				   break;
		}
	}
	


}  
//==================================================================================================
void insertEmt(struct node **a,int element)
{
	struct node *t;
	struct node *temp;// temporary variable
	t=*a;	// *a represent head value										
	
	temp=(struct node*)malloc(sizeof(struct node));// assigning memory dynamically
	temp->data=element;	// user element is given
	temp->next=NULL;
			if(*a==NULL)
			{
				*a=temp;// modifying head value
			}
			else
			{
				while(t->next!=NULL)
				{
					t=t->next;//it will jump to next
				}
				
			   t->next=temp;
			}
}
//====================================================================================================
void displayhead(struct node *a)
{
	if(a==NULL)
	{
		printf("====>list doesn't exist<====\n");
		return;
	}
	puts("\n+++++++++++++YOUR LINKED LIST IS SHOWN BELOW++++++++++++++++\n");
	while(a!=NULL)
	
	{

		printf("==>%d",a->data);// this will print the elements of linked list
		 a=a->next;// it will traverse the whole linked list
	}
		printf("\n");

}
//=========================================================================================================
void insertAtBeg(struct node **a, int element) 
{
	struct node*temp;// temporary variable
	
	temp=(struct node*)malloc(sizeof(struct node));// assigning memory dynamically by type casting it
	
	temp->data=element;// user element is taken
	temp->next=NULL;
	temp->next=*a;// the next value is given to the head 
	*a=temp;// and that head value is given to the temp which will be the first element of the linked list
}
//===========================================================================================================
void deleteFrombeg(struct node **a)
{
	struct node *t;// temporary variable
	if(*a==NULL)
	{
		printf("======list  does not exit======\n");
		return;
		
	}
	t=*a;// head value is given here
	*a=t->next;// this will delete the whole node
	free(t);
	puts("\n*****************DELETION IS DONE***********************\n");
	
}
//==============================================================================================================
void deleteFromEnd(struct node**a)
{
	struct node *t1,*t2;
	t1=*a;
	t2=NULL;
	while(t1->next!=NULL)
		{
			t2=t1;
			t1=t1->next;
		
		}
		
		t2->next=NULL;
		free(t1);
	puts("\n***************************DELETION IS DONE***********************\n");
}
//================================================================================================================
void deleteFrompos(struct node** a,int position)
{
	struct node *temp;
	struct node*t;
	temp=*a;
	t=NULL;
	int i=1;
	if(position==1)
		{
			deleteFrombeg(a);
		}
		while(i<position)
		{
			t=temp;
			temp=temp->next;
			i++;
		}
		t->next=temp->next;
		free(temp);
	puts("\n*****************DELETION IS DONE***********************\n");
}



