#include<stdio.h>
int main()
{
    char string[100];
	int length = 0;
	printf("Enter a string: ");
	gets(string);

	while(string[length] != '\0')
	{
		length++;
	}

	printf("Length of string: %d",length);
}