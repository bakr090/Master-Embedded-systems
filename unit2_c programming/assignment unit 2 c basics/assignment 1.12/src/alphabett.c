/*
 * main.c
 *
 *  Created on: Oct 4, 2021
 *      Author: Abnaby
 */
#include <stdio.h>
int main ()
{
    char AlphaChar ;
    printf("Enter a character: ");
	fflush(stdin);fflush(stdout);

    scanf("%c",&AlphaChar);
    if((AlphaChar >= 'a' && AlphaChar <= 'z')||(AlphaChar >= 'A' && AlphaChar <= 'Z'))
        printf("%c is an alphabet",AlphaChar) ;
    else
        printf("%c is not alphabet",AlphaChar);
}
