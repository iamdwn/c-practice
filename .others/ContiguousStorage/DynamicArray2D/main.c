#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int count;
char character;

void inputArray(int** a, int r, int c) {
	for (int i = 0; i < r; i++) {
		for (int j = 0; j < c; j++) {
			do {
				printf("a[%d][%d] = ", i, j);
				count  = scanf("%d%c", &a[i][j], &character);
				fflush(stdin);
			} while (count != 2 || character != '\n');
		}
	}
}

void outputArray(int** a, int r, int c) {
	for (int  i = 0; i < r; i++) {
		for (int j = 0; j < r; j++) {
			printf("%10d\t", a[i][j]);
		}
		printf("\n");
	}
}

int main(int argc, char *argv[]) {
	int **a, r, c;
	
	do {
		printf("Enter the row of array: ");
		count = scanf("%d%c", &r, &character);
		fflush(stdin);
	} while (count != 2 || character != '\n' || r <= 0);
	
	do {
		printf("Enter the column of array: ");
		count = scanf("%d%c", &c, &character);
		fflush(stdin);
	} while (count != 2 || character != '\n' || c <= 0);
	
	a = (int**)malloc(r * sizeof(int*));
	for (int i = 0; i < r; i++) {
		a[i] = (int*)malloc(c * sizeof(int));
	}
	
	inputArray(a, r, c);
	outputArray(a, r, c);
	
	
	//giải phóng từ cot
	for (int i = 0; i < r; i++) {
		free(a[i]);
	}
	
	// giải phóng con trỏ quản lý các dòng
	free(a);
	
	return 0;
}
