#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a, b;
	double x;
	
	//Step 1
	printf("Nhap a and b: ");
	
	//Step 2
	scanf("%d%d", &a, &b);
	
	//Step 3
	if (a != 0) {
		x = -(double)b/a;
		printf("Pt co nghiem x = %.2lf\n", x);
	}
	else if (a = 0) {
		if (b == 0) {
			printf("Pt co vo so nghiem\n");
		}
		else if (b != 0) {
			printf("Pt vo nghiem\n");
		}
	}
	
	system("pause");
	return 0;
}
