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
	int x=0,y=0,result=0;
	printf("enter two numbers to add");
	fflush(stdin); fflush(stdout);
	scanf("%d %d",&x,&y);
	result=x+y;
	printf("sum: %d",result);
	return EXIT_SUCCESS;
}
