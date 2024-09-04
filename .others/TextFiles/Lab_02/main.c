#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void WriteFile(FILE* f) {
	char str[100];
	
	printf("Enter data : \n");
	gets(str);
	
	while (strcmp(str, "stop") != 0) {
		strcat(str, "\n");
		fputs(str, f);
		gets(str);
	}
	
	fclose(f);
}

void ReadFile(FILE* f) {
	char str[100];
	
	while (fgets(str, 99, f) != NULL) {
		printf("%s", str);
	}
	
	fclose(f);
}

int main(int argc, char *argv[]) {
	char fileName[] = "./data.txt"; 
	char c;
	
	FILE* f;
	
//	f = fopen(fileName, "wt");
//	WriteFile(f);
	
	printf("-----------*****-------------\n");
	
	f = fopen(fileName, "rt");
	ReadFile(f);
	
	return 0;
}