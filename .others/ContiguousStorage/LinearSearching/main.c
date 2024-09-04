#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int firstLinearSearch(int x, int* a, int n);
int lastLinearSearch(int x, int* a, int n);

int main(int argc, char *argv[]) {
	int a[] = {3, 34,  5, 1, 2, 8, 9, 2, 90}, x = 2;
	int pos1 = firstLinearSearch(x, a, 9);
	
	if (pos1 >= 0) {
		int pos2 = lastLinearSearch(x, a, 9);
		printf("First existence: %d, last existence: %d\n", pos1, pos2);
	}
	else {
		printf("First existence not exit!\n", x);
	}
	
	return 0;
}

int lastLinearSearch(int x, int* a, int n) {
	for (int i = n - 1; i >= 0; i--) {
		if (x == a[i]) {
			return i;
		}
	}
       
   return -1;
}

int  firstLinearSearch ( int x, int a[], int n) {  
	for (int i = 0; i < n; i++) {
		if (x == a[i]) {
			return i;
		}
	}
       
   return -1;
}
