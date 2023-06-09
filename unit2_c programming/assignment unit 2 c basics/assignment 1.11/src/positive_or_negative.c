#include <stdio.h>
#include <stdlib.h>

int main(void) {
	float num1 = 0  ;
		printf("Enter a number: ");
		fflush(stdin);fflush(stdout);
		scanf("%f",&num1);
		if(num1 >0)
		    printf("%f is positve.",num1);
	    else if(num1 < 0)
	        printf("%f is negative.",num1);
	    else
	        printf("You entered zero.");
	return EXIT_SUCCESS;
}
