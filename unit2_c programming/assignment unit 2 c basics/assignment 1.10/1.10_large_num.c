#include <stdio.h>
#include <stdlib.h>

int main(void) {
	float x=0,y=0,z=0;
	printf("enter three numbers: \n");
	fflush(stdin);fflush(stdout);
	scanf("%f%f%f: ",&x,&y,&z);

	if (x>y)
	{
		if(x>z)
		{
			printf("%f is the biggest number\r\n",x);
		}
		else
		{
			printf("%f is the biggest number\r\n",z);

		}
	}
	else if (y>x)
	{
		if (y>z)
		{
			printf("%f is the biggest number\r\n",y);
		}
		else
		{
			printf("%f is the biggest number\r\n",z);

		}
	}
	return EXIT_SUCCESS;
}
