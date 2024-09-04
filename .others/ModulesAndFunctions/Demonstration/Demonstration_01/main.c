#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void printDivisors(int N) {
	int i; 
	
	for (i = 1; i <= N/2; i++) {
		if (N % i == 0) printf("%d, ", i);
	}
}

int main(int argc, char *argv[]) {
	int n, i;
	
	printf("Input n = ");
	scanf("%d", &n);
	
	printDivisors(n);
	return 0;
}
