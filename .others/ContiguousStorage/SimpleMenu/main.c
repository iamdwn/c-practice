#include <stdio.h>
#include <stdlib.h>
#define MAXN 100

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int menu();
int isFull(int* a, int n);
void add(int value, int* a, int* pn);
int isEmpty(int* a, int n);
int search(int value, int* a, int n);
int removeOne(int pos, int* a, int* pn);
int removeAll(int x, int* a, int* pn);
void print(int* a, int n);
void printAsc(int* a, int n);
void printDesc(int* a, int n);
void printDesc(int* a, int n);

int main(int argc, char *argv[]) {
	int a[MAXN]; /* array of intergers */
	int n = 0; /* Initial number of elements */
	int value; /* added/ searched/ removed value */
	int userChoice;
	int pos;
	
	do {
		userChoice = menu();
		switch (userChoice) {
			case 1:
				if (isFull(a, n)) {
					printf("\nSorry! The array is full.\n");
				}
				else {
					printf("Input an added value: ");
					scanf("%d", &value);
					add(value, a, &n);
					printf("Added\n");
				}
				break;
			
			case 2: 
				if (isEmpty(a, n)) {
					printf("\nSorry! The array is empty.\n");
				}
				else {
					printf("Input the searched value: ");
					scanf("%d", &value);
					pos = search(value, a, n);
					if (pos < 0) {
						printf("Not found!\n");
					}
					else {
						printf("Postion is found: %d\n", pos);
					}
				}
				break;
				
			case 3:
				if (isEmpty(a, n)) {
					printf("\nSorry! The array is empty.\n");
				}
				else {
					printf("Input the remove value: ");
					scanf("%d", &value);
					pos = search(value, a, n);
					if (pos < 0) {
						printf("Not found!\n");
					}
					else {
						removeOne(pos, a, &n);
						printf("Removed!\n");
					}
				}
				break;
				
			case 4:
				if (isEmpty(a, n)) {
					printf("\nSorry! The array is empty.\n");
				}
				else {
					printf("Input a value that will be remove all: ");
					scanf("%d", &value);
					if (removeAll(value, a, &n) == 0) {
						printf("Not found!\n");
					}
					else {
						printf("Removed!\n");
					}
				}
				break;
				
			case 5:
				print(a, n);
				break;
				
			case 6:
				printAsc(a, n);
				break;
				
			case 7:
				printDesc(a, n);
				break;
				
			default: 
				printf("\nGoodbye.\n");
		}
	} while (userChoice > 0 && userChoice < 8);
	
	return 0;
}

void printDesc(int* a, int n) {
	/* Get address of elements */
	int** adds = (int**) calloc (n, sizeof(int*));
	int i, j;
	
	for (i = 0; i < n; i++) {
		adds[i] = &a[i];
	}
	/* Asc Sort addresses based on values of elements */
	int* t;
	for (i = 0; i < n - 1; i++) {
		for (j = n - 1; j > i; j--) {
			if (*adds[j] > *adds[j - 1]) {
				t = adds[j];
				adds[j] = adds[j - 1];
				adds[j - 1] = t;
			}
		}
	}
	
	for (int i = 0; i < n; i++) {
		printf("%d ", *adds[i]);
	}
	
	free(adds);
}

void printAsc(int* a, int n) {
	/* Get address of elements */
	int** adds = (int**) calloc (n, sizeof(int*));
	int i, j;
	
	for (i = 0; i < n; i++) {
		adds[i] = &a[i];
	}
	/* Asc Sort addresses based on values of elements */
	int* t;
	for (i = 0; i < n - 1; i++) {
		for (j = n - 1; j > i; j--) {
			if (*adds[j] < *adds[j - 1]) {
				t = adds[j];
				adds[j] = adds[j - 1];
				adds[j - 1] = t;
			}
		}
	}
	
	for (int i = 0; i < n; i++) {
		printf("%d ", *adds[i]);
	}
	
	free(adds);
}

void print(int* a, int n) {
	for (int i = 0; i < n; i++) {
		printf("%d ", a[i]);
	}
}

int removeAll(int x, int* a, int* pn) {
	int result = 0;
	
	/* Remove from the end of the array. So, no value is missed */
	for (int i = (*pn) - 1; i >= 0; i--) {
		if (a[i] == x) {
			/* Shift up all elemets after the position i */
			result = 1;
			for (int j = i; j < (*pn) - 1; j++) {
				a[j] = a[j + 1];
			}
			(*pn)--;
		}
	}
	
	return result;
}

/* Removing the element at a position in an array will decrease number of elements
	return 1: remove successfully, 0: remove fail */
int removeOne(int pos, int* a, int* pn) {
	if (pos < 0 || pos >= *pn) {
		return 0;
	}
	
	for (int i = pos; i < *pn - 1; i++) {
		a[i] = a[i + 1];
	}
	
	(*pn)--;
	
	return 1;
}

/* Find the first existence of x in the array - Linear searching */
int search(int value, int* a, int n) {
	for (int i = 0; i < n; i++) {
		if (a[i] == value) {
			return i;
		}
	}
	
	return -1;
}

int isEmpty(int* a, int n) {
	return n == 0;
}

/* adding an element to the end of array will increase number of elements */
void add(int value, int* a, int* pn) {
	a[*pn] = value; /* add it to the end of the array */
	(*pn)++;	
}

int isFull(int* a, int n) {
	return n == MAXN;
}

int menu() {
	int choice;
	
	printf("\nOne-Dimensional Array of Integers");
	printf("\n1 - Add a value");
	printf("\n2 - Search a value");
	printf("\n3 - Remove the first existence of a value");
	printf("\n4 - Remove all existences of a value");
	printf("\n5 - Print out the array");
	printf("\n6 - Print out the array in ascending order");
	printf("\n7 - Print out the array in descending order");
	printf("\nOthers - Quit");
	printf("\nSelect: ");
	scanf("%d", &choice);
	
	return choice;
}
