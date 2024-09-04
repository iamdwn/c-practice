#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int x, sum;
	
	do 
	{
		printf("Enter the integers inputted: ");
	    scanf("%d", &x);
	    sum += x;
	    printf("%d\n", sum);
	} while (x != 0);
	
	printf("Sum = %d", sum);
	
	return 0;
}
