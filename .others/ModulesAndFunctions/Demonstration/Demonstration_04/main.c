#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

double equivalent(double r1, double r2, double r3);

int main(int argc, char *argv[]) {
	double R1, R2, R3;
	
	printf("\nInput 3 resistances: ");
	scanf("%lf%lf%lf", &R1, &R2, &R3);
	
	printf("Thier equivalent: %lf\n", equivalent(R1, R2, R3));
	
	getchar();
	getchar();
	return 0;
}

double equivalent(double r1, double r2, double r3) {
	double Z;
	
	Z = 1 / (1/r1 + 1/r2 + 1/r3);
	
	return Z;
}
