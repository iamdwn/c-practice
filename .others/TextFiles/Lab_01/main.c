#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void WriteFile(FILE* f) {
	char c;
	printf("Nhap du lieu:\n");
	do {
		c = getchar();
		fputc(c, f);
	} while (c != '\n');
	
	fclose(f);
}

void ReadFile(FILE* f) {
	char c;
	
	while (feof(f) == 0) {
		c = fgetc(f);
		printf("%c", c);
	}
	
	fclose(f);
}

int main(int argc, char *argv[]) {
	char fileName[] = "./data.txt"; 
	char c;
	FILE* f;
	
	f = fopen(fileName, "wt");
	WriteFile(f);
	getch();
	printf("-----------*****-------------\n");
	
	f = fopen(fileName, "rt");
	ReadFile(f);
	
	return 0;
}