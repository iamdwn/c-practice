#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void Input(int a[], int n) {
	for (int i  = 0; i < n; i++) {
		printf("a[%d] = ", i);
		scanf("%d", a + i);
	}
}

void PrintArray(int* a, int n) {
	for (int i = 0; i < n; i++) {
		printf("%5d", a[i]);
	}
	
	printf("\n");
}

int SumArray(int* a, int n) {
	int s = 0;
	
	for (int i = 0; i < n; i++) {
		s += a[i];
	}
	
	return s;
}

int main(int argc, char *argv[]) {
	int a[50];
	int n, s;
//	int a[] = {2, 1, 4, 6, 5};
	printf("Enter number of elements: ");
	scanf("%d", &n);
	
	Input(a, n);
	
	printf("Array a: \n");
	PrintArray(a, n);
	
	s = SumArray(a, n);
	printf("Sum of elements = %d", s);
	return 0;
}
