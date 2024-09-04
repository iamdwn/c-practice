#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int mark;
	int reward;
	
	printf("Your mark: ");
	scanf("%d", &mark);
	
//	reward = mark > 8 ? 5000000 : 0
	
//	(mark > 8) ? printf("500000\n") : printf("0\n");
	
	printf(mark > 8 ? "500000\n" : "0\n");
	
//	printf("Reward: %d\n", reward);
	
	system("pause");
	return 0;
}
