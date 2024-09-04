#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void printRange(int* a, int size);
void sortAscending(int* a, int size);

int main(int argc, char *argv[]) {
	int* a;
	int size;
	
	printf("Enter the amount of elements: ");
	scanf("%d", &size);
	
	a = (int*)calloc(size, sizeof(int));
	
	printf("Input: \n");
	for (int i = 0; i < size; i++) {
		printf("a[%d] = ", i);
		scanf("%d", &a[i]);
	}
	
	printf("Output: \n");
	for (int i = 0; i < size; i++) {
		printf("%d\t", a[i]);
	}
	
	printRange(a, size);
	
	// Print out the array in ascending order (positions of elements are preserved)
	
	
	return 0;
}

void sortAscending(int a[], int size) {
	for (int i = 0; i < size - 1; i++) {
		for (int j = i + 1; j < size; j++) {
			if (a[i] > a[j]) {
				int t = a[i];
				a[i] = a[j];
				a[j] = t;
			}
		}
	}
}

void printRange(int* a, int size) {
	int minVal, maxVal;
	
	printf("\nEnter the min value: ");
	scanf("%d", &minVal);
	
	printf("\nEnter the max value: ");
	scanf("%d", &maxVal);
	
	printf("Output: \n");
	for (int i = 0; i < size; i++) {
		sortAscending(a, size);
		if (a[i] <= maxVal && a[i] >= minVal) {
			printf("%d\t", a[i]);
		}
	}
}
