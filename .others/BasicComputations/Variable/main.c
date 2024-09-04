#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char c = 'A';
	int i = 1;
	long l = 1000;
	float f = 0.5f;
	double d = 12.809;
	
	printf("Variable c: at addr: %u, value: %c, size: %d\n", &c, c, sizeof(c));
	printf("Variable i: at addr: %u, value: %d, size: %d\n", &i, i, sizeof(i));
	printf("Variable l: at addr: %u, value: %d, size: %d\n", &l, l, sizeof(l));
	printf("Variable f: at addr: %u, value: %f, size: %d\n", &f, f, sizeof(f));
	printf("Variable d: at addr: %u, value: %lf, size: %d\n", &d, d, sizeof(d));
	
	system("pause");
	
	return 0;
}
