#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int numberOne, numberTwo, numberThree;
	float asv;
	
	scanf("%d%d%d", &numberOne, &numberTwo, &numberThree);
	
	asv = (float)(numberOne + numberTwo + numberThree) / 3;
	
	printf("%f", asv);
	
	return 0;
}
