#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

// Function for getting a choice from user - Menu

int getUserChoice() {
	int choice; // choice from user
	
	/* print out the menu */
	printf("\n1-Operation 1");
	printf("\n2-Operation 2");
	printf("\n3-Others-Quit");
	
	// Accept user choice
	printf("\nChoose: ");
	// %*c: Remove the ENTER key but no character variable is needed
	scanf("%d%*c", &choice);
	
	return choice;
}

// Function for operation 1
// user will input 2 integers, the program will print out
// sum of integers between them including them

int sumBetween(int a, int b) {
	int t;
	int S = 0;
	
	if (a > b) {
		t = a;
		a = b;
		b = t;
	}
	
	for (t = a; t <= b; t++) {
		S += t;
	}
	
	return S;
}

void function1() {
	int n1, n2;
	printf("Enter 2 integers: ");
	scanf("%d%d%*c", &n1, &n2);
	printf("Sum = %d\n", sumBetween(n1, n2));
}

// Operation 2: user will input 2 charactes, the program 
// will print out the ASCII table between two inputted
// characters in ascending order.

// Print ASCII table between 2 charactes, ascending order
void printAscii(char c1, char c2) {
	char c;
	
	if (c1 > c2) { // c1 must be less than c2
		c = c1;
		c1 = c2;
		c2 = c;
	}
	
	for (c = c1; c <= c2; c++) {
		printf("%c, %3d, %3oq, %3Xh\n", c, c, c, c);
	}
}

void function2() {
	char c1, c2;
	printf("Enter 2 characters contigunously: ");
	scanf("%c%c", &c1, &c2);
	printAscii(c1, c2);
}

int main(int argc, char *argv[]) {
	int userChoice;
	
	do {
		userChoice = getUserChoice();
		
		switch (userChoice) {
			case 1: 
				function1();
				break;
				
			case 2:
				function2();
				break;
			
			default:
				printf("Bye!\n");
		}
	} while (userChoice > 0 && userChoice < 3);
	
	fflush(stdin);
	getchar();
	
	return 0;
}

