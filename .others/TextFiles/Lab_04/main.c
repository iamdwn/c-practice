#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void WriteFile(char* fileName) {
	int n;
	FILE* f = fopen(fileName, "wt");
	printf("Enter data:\n");
	scanf("%d", &n);
	
	while (n != 0) {
		fprintf(f, "%5d", n);
		scanf("%d", &n);
	}
	
	fclose(f);
}

void ReadFile(char* fileName) {
	FILE* f = fopen(fileName, "rt");
	int n = 0, s = 0;
	int a[100];
	
	while (!feof(f)) {
		fscanf(f, "%d", &a[n++]);
	}
	
	fclose(f);
	
	// xuat mang a
	printf("Du lieu doc tu tap tin:\n");
	for (int i = 0; i < n; i++) {
		printf("%3d", a[i]);
		s += a[i];
	}
	printf("\nTong cac so nguyen: %d", s);
}

int main(int argc, char *argv[]) {
	char fileName[] = "text.txt";
	WriteFile(fileName);
	ReadFile(fileName);
	return 0;
}