#include<stdio.h>
int main()
{
	int i,n;
	unsigned long long num=1;
	printf("enter the number\n");
	scanf("%d",&n);

	if(num<0)
			{
				puts("wrong input\n");
			
			}
	else{
		for(i=1;i<=n;++i)
		{
			num*=i;
		}
	
		printf("%llu",num);
	}











}
