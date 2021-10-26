#include<stdio.h>
int main()
{
	int n,i;
	int t1 = 0,t2 = 1;
	int newterm= t1 + t2;
	printf("enter the number");
	scanf("%d",&n);
	printf("the fibnoccai series is : %d,%d,",t1,t2);
	for(i=3;i <= n;++i)
	{
		printf("%d,",newterm);
		t1 = t2;
		t2 = newterm;
		newterm = t1+t2;
	
	}
		return 0;


}
