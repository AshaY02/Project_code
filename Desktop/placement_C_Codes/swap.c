#include<stdio.h>
int main()
{
	int a;
	int b;
	printf("enter the number a  ");
	scanf("%d",&a);
	printf("enter the number b ");
	scanf("%d",&b);
	int result;

	a^=b;
	b^=a;
	a^=b;
	printf("swap of two number  is a %d", a);
	printf("swap of two number is b %d",b);





}
