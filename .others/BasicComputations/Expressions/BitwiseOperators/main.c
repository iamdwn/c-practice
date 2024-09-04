#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	short n = 12, m = 8, t = 2, k = -1;
	
	printf("%d, %d, %d\n", n&m, n|m, n^m);
	printf("%d, %d\n", n << 1, n << t);
	printf("n = %d\n", n);
	printf("%d, %d\n", n >> 1, k >> t);
	printf("%d\n", ~t);
	
	system("pause");
	
	return 0;
}
