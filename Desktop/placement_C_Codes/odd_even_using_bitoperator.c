#include<stdio.h>
#include<stdlib.h>

int main()
{
	int i,num;
	printf("enter the number to check\n");
	scanf("%d",&num);

	if(num & 1)// if the last bit is set(1) then the number is odd otherwise even.
	{
		puts("the number is odd\n");
	}
	else
		puts("the number is even\n");

	return 0;


}
