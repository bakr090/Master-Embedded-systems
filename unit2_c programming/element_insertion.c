#include<stdio.h>
int main()
{
    int nums , array[40] , i , location , element;
	printf("Enter no of elements: ");
	scanf("%d",&nums);

	printf("Enter the array:\n");
	for(i=0 ; i<nums ; i++)
	{
		scanf("%d",&array[i]);
	}

	printf("Enter the element to be inserted: ");
	scanf("%d",&element);

	printf("Enter the location: ");
	scanf("%d",&location);

	for(i = nums-1 ; i>=location-1 ; i--)
	{
		array[i+1] = array[i];
	}
	array[location-1] = element;

	printf("Enter the array after inserting element %d at location %d\n",element,location);
	for(i=0 ; i < nums+1 ; i++)
	{
		printf("%d ",array[i]);
	}
}