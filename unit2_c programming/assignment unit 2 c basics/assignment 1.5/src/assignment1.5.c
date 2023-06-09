#include <stdio.h>

int main() {
	char c;
		printf("Enter a character.\n");
		fflush(stdin);fflush(stdout);
		scanf("%c",&c);
		printf("ASCII value of %c is %d\n",c,c);

  return 0;
}
