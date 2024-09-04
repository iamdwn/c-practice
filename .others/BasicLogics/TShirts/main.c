#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int n, t;
	
	printf("Enter n = ");
	scanf("%d", &n);
	
	if (n <= 3) {
		t = n * 120000;
	}
	else if (n <= 6) {
		t = 3*120000 + (n - 3) * 90000;
	}
	else if (n <= 10) {
		t = 3*120000 + 3*90000 + (n - 6) * 85000;
	}
	else {
		t = 3*120000 + 3*90000 + 4*85000 + (n - 10) * 70000;
	}
	
	printf("Total = %d\n", t);
	
	system("pause");
	return 0;
}
