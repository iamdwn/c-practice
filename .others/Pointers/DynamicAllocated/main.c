#include <stdio.h>
#include <malloc.h>
const int MAXN =100;
int main()
{  int n = 6;   int *p1;   int *p2;   int *p3;
   printf("Address of MAXN: %u\n", &MAXN);
   printf("Main function is allocated at: %u\n", &main);
   printf("Address of n : %u\n", &n);
   printf("Address of p1: %u\n", &p1);
   printf("Address of p2: %u\n", &p2);
   printf("Address of p3: %u\n", &p3);
   printf("\n");
   p1 = (int*)malloc(1000*sizeof(int));   *p1 =  3;  
   p2 = (int*)malloc(sizeof(int));   *p2 = 4; 
   p3 = (int*)malloc(sizeof(int));   *p3 = 5;
   printf("Dynamic allocation (p1) at: %u , %d\n", p1,*p1);
   printf("Dynamic allocation (p2) at: %u, %d\n", p2,*p2);
   printf("Dynamic allocation (p3) at: %u, %d\n", p3,*p3);  
   printf("\n"); 
   free(p3);
   free(p2);
   free(p1);
   printf("Dynamic allocation (p1) at: %u , %d\n", p1,*p1);
   printf("Dynamic allocation (p2) at: %u, %d\n", p2,*p2);
   printf("Dynamic allocation (p3) at: %u, %d\n", p3,*p3); 
   getchar();
   return 0;
}

