#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int x=0;
	printf("enter a number: ");
	fflush(stdin); fflush(stdout);
	scanf("%d",&x);

	if (x%2==0)
		printf("%d is even",x);
	else
		printf("%d is odd",x);
	return EXIT_SUCCESS;
}
