#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int n = 30, m = 5;
	float x = 13.5F, y = 8.12F;
	
	printf("%d, %d\n", (n < m && x >= y), !(x > y));
	return 0;
}

