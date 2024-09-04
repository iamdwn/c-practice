#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int n = 10;
	char s[11] = "Hello";
	int m = 9;
	
	printf("n = %d, s = %s, m = %d\n", n, s, m);
	printf("address: ""n = %u, s = %u, m = %u\n", &n, &s, &m);
	scanf("%[^\n]", s);
	
	printf("n = %d, s = %s, m = %d\n", n, s, m);
	return 0;
}