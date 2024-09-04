#include <stdio.h>

int main() {  
	int n2= 10, n1= 6, n0= 5;
	int* p;
	
	printf("address n2=%u \n", &n2);
	printf("address n1=%u \n", &n1);
	printf("address n0=%u \n", &n0);
	printf("address *p=%u \n", &p);
	printf("n2=%d, n1=%d, n0=%d\n", n2, n1, n0);
	
	p= &n1; 
	*p=9; // n1 = 9
	p++; // n2
	*p=15; // n2 = 15
	p--; // n1
	p--; // n0
	*p=-3; // n0 = -3
	
	printf("n2=%d, n1=%d, n0=%d\n", n2, n1, n0);
	
	getchar();
	return 0;
}

