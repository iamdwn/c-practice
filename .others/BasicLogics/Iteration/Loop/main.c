#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
//	int n, i;
//	long long s;
//	
//	s = 0;
//	n = 3;
//	i = 1;
	
//	while (i <= n) {
//		s = s + i;
//		i++;
//	}
	
//	i = 1;
//	do {
//		s += i;
//		i++;
//	} while (i <= n);
	
//	for (i = 1; i <= n; i++) {
//		s += i;
//	}
	
//	printf("s = %lld\n\n", s);

    int s = 0;
    int i = 1;
    
    for (i = 1; i <= 10; i++ );
	{
    	if (i % 2 == 0) {
    		s += i;
    		printf("%d\n", s);
		}
	}
	
	printf("%d\n\n", s);
	
	system("pause");
	return 0; 
}
