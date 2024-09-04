#include <stdio.h>
#include <stdlib.h>
#define MAXN 100

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void input(int* a, int n);
int max(int a[], int n);
void print(int* a, int n);
void printEven(int* a, int n);

int main(int argc, char *argv[]) {
	int* a; // int a[MAXN];
	int n;
	int maxVal;
	
	do {
		printf("How many elements which will be used 1..%d: ", MAXN);
		scanf("%d", &n); // n = 12
	} while (n < 1 || n > MAXN);
	
	a = (int*) calloc(n, sizeof(int)); // cap phat 12 o nho, 48 byte
	printf("Enter %d value of the arrays:\n", n);
	input(a, n);
	
	maxVal = max(a, n);
	printf("Max value: %d\n", maxVal);
	
	printf("Inputted array: ");
	print(a, n);
	
	printf("\nEnter values in array: ");
	printEven(a, n);
	
//	while (getchar() != '\n') {
//		getchar();
//	}
	
	printf("\n");
	system("pause");
	return 0;
}

void printEven(int* a, int n) {
	for (int i = 0; i < n; i++) {
		if (a[i] % 2 == 0) {
			printf("%d ", a[i]);
		}
	}
}

void print(int* a, int n) {
	for (int i = 0; i < n; i++) {
		printf("%d ", a[i]);
	}	
}

int max(int a[], int n) {
	int result = a[0];
	
	for (int i = 0; i < n; i++) {
		if (result < a[i]) {
			result = a[i];
		}
	}
	
	return result;
}

void input (int* a, int n) {
	for (int i = 0; i < n; i++) {
		printf("a[%d] = ", i);
		scanf("%d", &a[i]);
	}
}
