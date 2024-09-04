#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int sumDivisors(int n) {
	int i, S = 0;
	
	for (i = 1; i <= n/2; i++) {
//		if (n % i != 0) S += i;
		if (n % i == 0) S += i;
	}
	
	return S;
}

int main(int argc, char *argv[]) {
	int n;
	
	printf("Input a positive integer: ");
	scanf("%d", &n);
	
	printf("Sum of divisors: %d\n", sumDivisors(n));
	
	getchar();
	getchar();
	return 0;
}
