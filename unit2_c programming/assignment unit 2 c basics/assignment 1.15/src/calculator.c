#include <stdio.h>
#include <stdlib.h>

int main(void) {
	float num1=0,num2=0;
	char x;
	printf("enter the operation: ");
	fflush(stdin);fflush(stdout);

	scanf("%c",&x);
	printf("enter the 2 numbers:");
	fflush(stdin);fflush(stdout);

	scanf("%f %f",&num1,&num2);

	switch(x)
	{
	case '+':
		printf("%f %c %f =%0.2f",num1,x,num2,num1+num2);
		break;

	case '-':
		printf("%f %c %f =%0.2f",num1,x,num2,num1-num2);
		break;

	case '*':
		printf("%f %c %f =%0.2f",num1,x,num2,num1*num2);
		break;

	case '/':
		printf("%f %c %f =%f",num1,x,num2,num1/num2);
		break;

	default:
		printf("wrong operation");
		break;



	}

	return EXIT_SUCCESS;
}
