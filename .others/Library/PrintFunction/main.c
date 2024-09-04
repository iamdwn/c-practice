#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	printf("--------------------------------------\n");
	printf("%d|<--                          %%d\n", 4321);
	printf("%10d|<--                        %%10d\n", 4321);
	printf("%010d|<--                       %%010\n", 4321);
	printf("%-10d|<--                       %%-10d\n", 4321);
	return 0;
}
