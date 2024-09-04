#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int n;
int main(int argc, char *argv[]) {
	int m;
	
	printf("Var. n, add: %u\n", &n);
	printf("Var. m, add: %u\n", &m);
	printf("main code, add: %u\n", &main);
	
	printf("Enter 2 integers: \n");
	scanf("%d%d", &n, &m);
	
	printf("Values entered: n = %d, m = %d\n", n, m);
	
	system("pause");
//	getchar();
//	getchar();
	return 0;
}
