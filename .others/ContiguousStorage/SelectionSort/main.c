#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void ascSelectionSort(int* a, int n);
void print(int* a, int n);

int main(int argc, char *argv[]) {
	int a[] = {1, 3, 5, 7, 9, 2, 4, 6, 8, 0};
	
	ascSelectionSort(a, 10);
	print(a, 10);
	
	getchar();
	return 0;
}

void print(int* a, int n) {
	for (int i = 0; i < n; i++) {
		printf("%d ", a[i]);
	} 
}

void ascSelectionSort(int* a, int n) {
	int minIndex;
	int i, j;
	
	for (i = 0; i < n - 1; i++) {
		minIndex = i;
		
		for (j = i + 1; j < n; j++) {
			if (a[minIndex] > a[j]) {
				minIndex = j;
			}
		}
		if (minIndex > i) {
			int t = a[minIndex];
			a[minIndex] = a[i];
			a[i] = t;
		}
	}
}
