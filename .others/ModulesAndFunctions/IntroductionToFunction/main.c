#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

// D1: khong tham so va khong tra ve gia tri
void printString() {
	printf("Hello! Welcome to my channel!\n");
}

// D2: khong tham so va tra ve gia tri
int enterInteger() {
	int x;
	
	do {
		printf("Enter an integer: ");
		scanf("%d", &x);
	} while (x > 10);
	
	return x;
}

// D3: có nhan tham so va khong gia ve gia tri
void printSquare(int n) {
	printf("n^2 = %d\n", n * n);
}

// D4: co nhan tham so va co tra ve gia tri
int sumOfEvenNumbers(int n) {
	int i, s;
	
	s = 0;
	for (i = 1; i <= n; i++) {
		if (i % 2 == 0) {
			s += i;
		}
	}
	
	return s;
}

// main function
int main(int argc, char *argv[]) {
	int n, s, x;
	
	// goi ham dang 1
	printString();
	
	// goi ham dang 2
	n = enterInteger();
	
	// goi ham dang 3
	printSquare(n);
	
	// goi ham dang 4
	s = sumOfEvenNumbers(n);
	printf("Sum = %d\n\n", s);
	
	system("pause");
	return 0;
}
