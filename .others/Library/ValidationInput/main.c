#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void clear();
int getValue(int min, int max);
int Square(int n);

int main(int argc, char *argv[]) {
	int s, n;
	
	n = getValue(2, 10);
	s = Square(n);
	printf("%d^2 = %d\n", n, s);
	system("pause");
	
	return 0;
}

int Square(int n) {
	return n * n;
}

int getValue(int min, int max) {
	int value, keeptrying = 1, rc;
	char after;
	
	do {
		printf("Enter a whole number in the range [%d, %d] : ", min, max);
				
		rc = scanf("%d%c", &value, &after);
		printf("%d\n\n", rc);
		printf("%d and %c\n\n", value, after);
		
		if (rc == 0) {
			printf("**No input accepted!**\n\n");
			clear();
		}
		else if (after != '\n') {
			printf("**Trailing characters!**\n\n");
			clear();
		}
		else if (value < min || value > max) {
			printf("**Out put of range!**\n\n");
		}
		else {
			keeptrying = 0;
		}
	} while (keeptrying == 1);
	
	return value;
}

void clear() {
	while (getchar() != '\n');
}
