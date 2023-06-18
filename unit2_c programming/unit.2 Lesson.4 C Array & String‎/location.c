#include<stdio.h>
int main()
{
    int numOfElements , i , element;
	printf("Enter no of elements: ");
	scanf("%d",&numOfElements);

	int array[numOfElements];
	printf("Enter the array:\n");
	for(i=0 ; i<numOfElements ; i++)
	{
		scanf("%d",&array[i]);
	}

	printf("Enter the element to be searched: ");
	scanf("%d",&element);

	for(i=0 ; i<numOfElements ; i++)
	{
		if(array[i] == element)
		{
			printf("Number found at the location = %d",i+1);
			break;
		}
	}

	if(i == numOfElements)
	{
		printf("Number not found");
	}
}