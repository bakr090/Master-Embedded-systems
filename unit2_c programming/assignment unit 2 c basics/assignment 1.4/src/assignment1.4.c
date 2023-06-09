/*
 ============================================================================
 Name        : 3.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	float x=0,y=0,result=0;
	printf("enter two numbers");
	fflush(stdin); fflush(stdout);
	scanf("%f %f",&x,&y);
	result=x*y;
	printf("product: %f",result);
	return EXIT_SUCCESS;
}
