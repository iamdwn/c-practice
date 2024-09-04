#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void nhap(char names[][31], int n) {
	for (int i = 0; i < n; i++) {
		printf("Nhap ten thu %d/%d: ", i + 1, n);
		fflush(stdin);
		scanf("%30[^\n]", names[i]);
		strupr(names[i]);
	}
}

// bubble sort 
void sapxep(char names[][31], int n) {
	char tmp[31];
	
	for (int i = 0; i < n - 1; i++) {
		for (int j = 0; j < n - 1 - i; j++) {
			if (strcmp(names[j], names[j + 1]) > 0) {
				strcpy(tmp, names[j]);
				strcpy(names[j], names[j + 1]);
				strcpy(names[j + 1], tmp);
			}
		}
	}
}

void xuat(char names[][31], int n) {
	for (int i = 0; i < n; i++) {
		printf("%s\n", names[i]);
	}
}

int main(int argc, char *argv[]) {
	char names[10][31];
	int n = 10;
	
	nhap(names, n);
	sapxep(names, n);
	printf("DS sau khi sap xep:\n");
	xuat(names, n);
	
	return 0;
}
