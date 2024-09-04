#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int x, y;
	
	x = 2;
	y = ++x; // neu ++ truoc x thi gia tri x tang len 1 roi moi gan cho y
	
	printf("x = %d, y = %d\n", x, y);
	
	y = x++; // neu ++ sau x thi y duoc gan gia tri cua x truoc, sau do x moi tang len 1
	
	printf("x = %d, y = %d\n", x, y);
	
//	printf("x = %d\n", x);
//	printf("y = %d\n", y);
	return 0;
}
