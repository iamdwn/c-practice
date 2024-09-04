#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int triGiaDonHang;
	
	scanf("%d", &triGiaDonHang);
	
	triGiaDonHang = triGiaDonHang + 100;
	
	printf("%d", triGiaDonHang);
	
	getchar();
	return 0;
}
