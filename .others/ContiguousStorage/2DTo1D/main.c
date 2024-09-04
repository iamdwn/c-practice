#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int* a, r, c;
	
	printf("Enter row: ");
	scanf("%d", &r);
	
	printf("Enter column: ");
	scanf("%d", &c);
	
	
	// cấp phát, dùng mảng 1 chiều để biểu diễn mảng 2 chiều
	// a[i][j] tương ứng là phần tử a[i*n + j]
	a = (int*)malloc(r * c * sizeof(int));
	
	for (int i = 0; i < r; i++) {
		for (int j = 0; j < r; j++) {
			printf("a[%d][%d] = ", i, j);
            scanf("%d", (a + i*r + j));
		}
	}
	
	for (int i = 0; i < r; i++){
        for (int j = 0; j < c; j++){
            printf("%d\t", *(a + i*r + j));
        }
        printf("\n");
    }
    
    free(a);
	return 0;
}