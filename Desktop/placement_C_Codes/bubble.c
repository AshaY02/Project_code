/*****************************************************************************
 * Author : Asha Yadav
 * Implement : Write a C program for bubble sort algorithm.
*******************************************************************************/
#include<stdio.h>
int main()
{
//====================================Declaration of variables==============================================================
	int arr[10];
	int n;
	int i;
	int j;
	int temp;

	printf("enter the total number of elements \n");			      //taking user input
	scanf("%d",&n);

	printf("Enter %d integers\n",n);					      // displaying the integer 

	for(i=0;i<n;i++)							      // this loop is used for reading the array
		scanf("%d",&arr[i]);
	for(i=0;i<n-1;i++)							      // this loop is used for comparing the two elements
	{									      //here we are taking (n-1)because after sorting the last
										      // will be in its place already we don't need to swap
		for (j=0;j<n;j++)
		{
			if(arr[j]<arr[j+1])
			{
				temp =arr[j];					      // swapping of element is done here
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}

		}
	}

	printf("the sorted list is:\n");						// printing the sorted list i.e in assending order
	
	for (i=0;i<n;i++)
	    printf("%d\n",arr[i]);
	    
	    return 0;	
}
