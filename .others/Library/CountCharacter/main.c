#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char c1;
	int x = 0, y = 0, z = 0;
	
	while ((c1 = getchar())  != '\n') {
		if (isalpha(c1) != 0) {
			x++;
		}
		else if (isdigit(c1)) {
			y++;
		}
		else {
			z++;
		}
	} 
	
	printf("Alpha: %d, digit: %d, other: %d", x, y, z);
	return 0;
}

