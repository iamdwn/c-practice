#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char s1[21];
	char s2[21];
	
	printf("Enter string s1: ");
	gets(s1);
	
	printf("Enter string s2: ");
	gets(s2);
	
	printf("Lengths of s1: %d, s2: %d\n", strlen(s1), strlen(s2));
	
	printf("Compare s1 with s2: %d\n", strcmp(s1, s2));
	
	strupr(s1);
	printf("Uppercase s1: %s\n", s1);
	
	strcat(s1, s2);
	printf("After append s2 to s1: %s\n", s1);
	
	char s3[10];
	printf("Enter a sub-string of s1: ");
	gets(s3);
	
	char* ptr = strstr(s1, s3);
	
	printf("Address of s1: %u\n", s1);
	printf("Address of s3: %u\n", s3);
	printf("Address of of substring: %u\n", ptr);
	return 0;
}