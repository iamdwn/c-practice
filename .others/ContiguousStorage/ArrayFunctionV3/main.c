#include <stdio.h>
#include <stdlib.h>
#define MAXN 10

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void input(int* a, int *pn);
int max(int a[], int n);
void print(int* a, int n);
void printEven(int* a, int n);

int main(int argc, char *argv[]) {
	int a[MAXN];
	int n;
	int maxVal;
	
	input(a, &n);
	
	maxVal = max(a, n);
	printf("Max value: %d\n", maxVal);
	
	printf("Inputted array: ");
	print(a, n);
	
	printf("\nEnter values in array: ");
	printEven(a, n);
	
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

void input (int* a, int* pn) {
	*pn = 0;
	
	printf("Enter maximum %d number of elements, 0 for termination\n", MAXN);
	
	int x, i = 0; 
	do {
		printf("a[%d] = ", i);
		scanf("%d", &x);
		if (x != 0) {
			a[(*pn)++] = x;
		}
		i++;
	} while (x != 0 && *pn < MAXN);
}
