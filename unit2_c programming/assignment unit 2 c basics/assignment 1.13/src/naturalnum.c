#include <stdio.h>
int main ()
{
    int sumTO;
    int result  = 0;
    int forCounter = 0 ;
    printf("Enter an number: ");
	fflush(stdin);fflush(stdout);

    scanf("%d",&sumTO);
    for(forCounter = 1 ; forCounter <= sumTO ;forCounter++ )
    {
        result+= forCounter;
    }

    printf("Sum %d",result);
}
