#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int x = 10;
	int y = 5;
	
	printf("address x = %u, x = %d\n", &x, x);
	printf("address y = %u, y = %d\n", &y, y);
	
	// khai bao bien con tro
	int *p;
	printf("address p = %u, p = %d\n", &p, p);
	
	// gan dia chi x cho p
	p = &x;
	printf("address p = %u, p = %d\n", &p, p);
	
	*p = 100;
	printf("x = %d\n", x);
	printf("address p = %u, address of p-1 = %u, value of *(p-1) = %d\n", &p, p-1, *(p-1));
	
	p = &y; // p--;
	*p = 200;
	printf("y = %d\n", y);
	
	printf("address p = %u, address of p+1 = %u, value of *(p+1) = %d\n", &p, p+1, *(p+1));
	return 0;
}
