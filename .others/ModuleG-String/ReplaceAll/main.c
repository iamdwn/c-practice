#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

char* replaceAll(char* source, char* subStr, char* repStr) {
	int subL = strlen(subStr);
	int repL = strlen(repStr);
	char tmp[100];
	char* ptr = strstr(source, subStr); // ptr: "coc trong hang con coc nhay ra, coc chet" // ptr: "1"
//	printf("{%s}\n", ptr + 3);
	
	while (ptr != NULL) {
		strcpy(ptr, ptr + subL); // ptr + subL: " trong hang con coc nhay ra, coc chet"
								 // ptr: " trong hang con coc nhay ra, coc chet"
		
		if (repL > 0) {
			strcpy(tmp, ptr); // tmp: " trong hang con coc nhay ra, coc chet"
//			printf("{%s}\n", ptr + 2); // ptr + 2: "rong hang con coc nhay ra, coc chet"
			strcpy(ptr + repL, tmp); // ptr + repL: "rong hang con coc nhay ra, coc chet"
//			printf("{%s}\n", ptr); // ptr: " t trong hang con coc nhay ra, coc chet"
			
			for (int i = 0; i < repL; i++) {
				*(ptr + i) = repStr[i];
			}
		}
		
		ptr = strstr(source, subStr);
	}
	
	return source;
}

int main(int argc, char *argv[]) {
//	char S[80] = "con coc trong hang con coc nhay ra, coc chet";
//	char subStr[21] = "coc";
//	char repStr[21] = "bo";
	char S[10000];
	char subStr[10000];
	char repStr[10000];
	
	gets(S);
	gets(subStr);
	gets(repStr);
	puts(S);
	replaceAll(S, subStr, repStr);
	puts(S);
	
	system("pause");
	return 0;
}
