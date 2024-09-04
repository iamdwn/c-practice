#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int sumDivisors (int N) {
	int i, S = 0;
	
	for (i = 1; i <= N/2; i++) {
		if (N % i == 0) {
			S += i;
		}
	}
	
	return S;
}

int main(int argc, char *argv[]) {
	int n, sum;
	
	do {
		printf("Input n = ");
		scanf("%d", &n);
	} while (n <= 0);
	
	sum = sumDivisors(n);
	
	printf("Result: %d\n", sum);
	
	getchar();
	getchar();
	return 0;
}
