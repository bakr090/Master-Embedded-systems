#include<stdio.h>
int main()
{
    char string[100] , temp;
	int i=0 , length;
	printf("Enter a string: ");
	gets(string);

	length = strlen(string)-1;

	for(i=0 ; i<length ; i++)
	{
		temp = string[i];
		string[i] = string[length];
		string[length] = temp;
		length--;
	}

	printf("Reversed string is: %s",string);
}