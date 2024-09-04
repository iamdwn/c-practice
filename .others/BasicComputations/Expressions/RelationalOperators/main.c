#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int n = 30;
	int x = 5;
	
	printf("%d, %d, %d\n", n < x, n == x, n != x);
	
	system("pause");
	return 0;
}
