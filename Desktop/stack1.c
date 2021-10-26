#include<stdio.h>
#include<stdlib.h>
#define SIZE 5
void push(int *, int *, int);
int pop(int *, int *);
void displayStack(int *, int);
int main(){

	int arr[SIZE];
	int top=-1; // struct node *head=NULL; initally the stack is empty . hence the value is -1
	int choice, ele;
	int ret;
	while(1){
	printf("enter you choice\n");
	printf("1-->push  2-->pop 3--> exit\n");
	scanf("%d", &choice);
	switch(choice){
		case 1: 
			printf("enter ele to be push\n");
			scanf("%d", &ele);
			push(arr, &top, ele);
			break;
		case 2: 
			ret=pop(arr, &top);
			printf("pop ele=%d\n", ret);
			break;
		case 3:
			exit(0);
		case 4:
			displayStack();
			break;
	}
	}
}

void displayStack(int *a, int top){
	int i=top;
	for( ; i>=0; i--){
		printf("%d ", a[i]);
	}

}
void push(int *a, int *top, int ele){
	if( *top == SIZE-1 ){ // if the stack size is 4 which is its actual size then the stack is full
		printf("stack is full\n");
		return ;
	}
		
	*top=(*top)+1; // we are increasing the top value because it is pointing to the -1 location but we will 
		       // store the element to the zero location.
	a[(*top)]=ele; // here we are storing the given element in the stack at zero location
}

int pop(int *a, int *top){
	if(*top == -1){// if the top value is -1 then the stack is empty
		printf("stack is empty\n");
		return 0;
	}
	
	int temp;   //creating a temporary variable 
	temp=a[(*top)]; // temp=a[0]; // temp=10 giving the top value to variable temp
	a[(*top)]=0; // it will delete that particular and empty that place
	*top=(*top)-1;// here the top value is getting decrease
	return temp;	
}







