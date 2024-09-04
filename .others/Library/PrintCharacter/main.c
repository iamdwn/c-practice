#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void swap(char* x, char* y) {
	int t = *x;
	*x = *y;
	*y = t;
}

void printCharacter(char c1, char c2) {
	int i;
	
	if (c1 > c2) {
		swap(&c1, &c2);
	}
	
	for (i = c1; i <= c2; i++) {
		printf("%d, %x, %c \n", i, i, i);
	}
}

int main(int argc, char *argv[]) {
	char c1, c2;
	
	printf("Enter c1 and c2: ");
	scanf("%c%*c%c", &c1, &c2);
	
	c1 = tolower(c1);
	c2 = tolower(c2);
	
	// neu c1 va c2 la ky tu alphabe va la chu thuong
	
	if (isalpha(c1) == 2 && isalpha(c2) == 2) {
		printCharacter(c1, c2);
	}
	else {
		printf("Input invalid .");
	}
	
	getch();
	return 0;
}
