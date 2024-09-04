#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int isPrimes(int n) {
	int i, result = 1;
	
	for (i = 2; i*i <= n && result == 1; i++) {
		if (n % i == 0) {
			return 0;
		}
	}
	
	return result;
}

void print_n_Primes(int n) {
	int count = 0;
	int value = 2;
	
	while (count < n) { 
		if (isPrimes(value) == 1) {
			printf("%d \n", value);
			count++;
		}
		
		value++;
	}
}

void print_sum_n_Primes(int n) {
	int count = 0;
	int value = 2;
	int sum = 0;
	
	while (count < n) { 
		if (isPrimes(value) == 1) {
			sum += value;
			count++;
		}
		
		value++;
	}
	
	printf("Sum = %d\n", sum);
}

int main(int argc, char *argv[]) {
	int n;
	
	printf("Input number of primes: ");
	scanf("%d", &n);
	
	print_n_Primes(n);
	print_sum_n_Primes(n);
	
	getchar();
	return 0;
}
