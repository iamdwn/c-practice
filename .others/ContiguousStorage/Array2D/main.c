#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a[10][10], n, i, j, s;
	
	printf("Nhap n = ");
	scanf("%d", &n);
	
	for (i = 0; i < n; i++) { // dong
		for (j = 0; j < n; j++) { // cot
			printf("a[%d][%d] = ", i, j);
			scanf("%d", &a[i][j]);
		}
	}
	
	printf("Mang a: \n");
	for (i = 0; i < n; i++) { // dong
		for (j = 0; j < n; j++) { // cot
			printf("%5d", a[i][j]);
		} // het 1 dong
		printf("\n");
	}
	
	// tinh tong cac phan tu trong mang
	s = 0;
	for (i = 0; i < n; i++) { // dong
		for (j = 0; j < n; j++) { // cot
			s += a[i][j];
		}
	}
	printf("s = %d", s);
	return 0;
}
