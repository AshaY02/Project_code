#include<stdio.h>
#include<stdlib.h>
#define SIZE 5

int top =-1;
int stack[SIZE];

void push();
void pop();
void display();

void main()
{
	int choice;
	while(1)
	{
		printf("\n 1. push \n\n 2. pop \n\n 3. display \n\n 4. exit \n\n");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1: push();
				 break;
			case 2:
				  pop();
				  break;
		 	case 3:
		 		  display();
		 		  break;
		 		  
		 	case 4:   exit(0);
		 	
		 	default : printf("wrong choice");
		
		}
	
	}
}

void push()
{
	int element;
	if (top==SIZE-1)
	{
		printf("stack is full");
	}
	else
	{
		printf("enter the element to insert");
		scanf("%d",&element);
		top = top+1;
		stack[top]=element;
	}

}

void pop()
{
	if(top==-1)
	{
		printf("the stack is empty");
		
	}
	else
	{
		printf("\n deleted element is %d",stack[top]);
		top =top-1;
	}
}

void display()
{
	int i;
	if(top==-1)
	{
		printf("the stack is empty");
	}
	else
	{
		printf("\n stack is \n");
		for(i=top;i>=0;--i)
		printf("%d\n",stack[i]);
	}

}

