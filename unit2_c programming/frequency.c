#include<stdio.h>
int main()
{
    char string[100] , character;
	int i=0 , freq=0;
	printf("Enter a string: ");
	gets(string);

	printf("Enter a character to find frequency: ");
	scanf("%c",&character);

	while(string[i] != '\0')
	{
		if(string[i] == character)
		{
			freq++;
		}
		i++;
	}

	printf("Frequency of %c = %d",character,freq);
}