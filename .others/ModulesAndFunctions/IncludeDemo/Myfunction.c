#include <stdio.h>
#include <myFunction.h>

int main() {
	int n;
	printf("Input a positive integer: ");
	scanf("%d", &n);
	
	if (isPrime(n) == 1) printf("%d is a prime.\n", n);
	else printf("%d is not a prime.\n");
	
	system("pause");
	return 0;
}
