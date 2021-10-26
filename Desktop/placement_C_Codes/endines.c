#include<stdio.h>
#include<stdlib.h>

int main()
{
	int i=1;
	char*p =(char*)&i;
	/*  A character pointer p is pointing to an integer i. Since size of character is
	 *  1 byte when the character pointer is de-referenced it will contain only first
	 *   byte of integer. If machine is little endian then *p will be 1 (because last
	 *    byte is stored first) and if machine is big endian then *p will be 0.*/
	if(*p)
	{
		printf("the system is little endian\n");
	}
	else
	{
		printf("the system is big endian\n");
	}
return 0;
}
