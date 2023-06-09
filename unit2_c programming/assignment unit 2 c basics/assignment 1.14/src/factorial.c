#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int x=0,y=0,z=1;
	printf("enter a number: \r\n");
	fflush(stdin);fflush(stdout);

	scanf("%d",&x);

	if (x>0)
	{
		for(y=2;y<=x;y++)
		{
			z*=y;
		}
	}
	else if(x==0)
	{
		z=1;
	}
	else
	{
        printf("Error!!! Factorial of negative number doesn't exist.");
	}
	printf("factorial %d",z);

	return EXIT_SUCCESS;
}
