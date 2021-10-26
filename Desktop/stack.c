#include<stdio.h>
#include<stdlib.h>
#define SIZE 5

int top = -1;
int stack[SIZE];
int element;


void push();
void pop();
void display();

int main()
{
 int choice;

while(1){
 printf("1. Push \n 2. Pop \n 3. Display\n 4. Exit\n");
 scanf("%d\n",&choice);
}
switch (choice)
{ 
    case 1: push();
            break;
    case 2: pop();
            break;
    case 3: display();
            break;
    case 4: exit(0);
    default : printf("wrong choice");
}
}
void push ()
{ 
  if (top== SIZE-1)
{ 
  printf("the stack is full");
 }
else 
{
 
 printf ("enter the element");
 scanf("%d",&element);
  top=top+1;
  stack[top]= element;
}
}

void pop()
{
   if(top == -1)
 {
  printf("the stack is empty");
}
   else
{
 printf("enter the element to delete");
scanf("%d",&element);
stack[top]==0;
top=top-1;

}
}
