#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void ascBubbleSort(int* a, int n);
void print(int* a, int n);

int main(int argc, char *argv[]) {
	int a[] = {1, 3, 5, 7, 9, 2, 4, 6, 8, 0};
	
	ascBubbleSort(a, 10);
	print(a, 10);
	
	getchar();
	return 0;
}

void print(int* a, int n) {
	for (int i = 0; i < n; i++) {
		printf("%d ", a[i]);
	} 
}

void ascBubbleSort(int* a, int n) {
	int i, j;
	
	for (i = 0; i < n - 1; i++) {
		for (j = n - 1; j > i; j--) {
			if (a[j] < a[j - 1]) {
				int t = a[j];
				a[j] = a[j - 1];
				a[j - 1] = t;
			}
		}
	}
}
