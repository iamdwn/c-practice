#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

/* Variable:  char c;
                  int numOfDigits=0, numOfAlpha=0, numOfOthers = 0
Algorithm
    While (c=getchar() != ‘\n’)
    {  if  c is a digit then numOfDigits++ ;
       else if  c is an alphabet then numOfAlpha++;
       else numOfOthers++;
    }
    Print out numOfAlpha;
    Print out numOfDigits;
    Print out numOfOthers;
*/

int main(int argc, char *argv[]) {
	char c;
	int numOfDigits = 0, numOfAlpha = 0, numOfOthers = 0;
	
	while ((c = getchar()) != '\n') {
		if (isdigit(c) != 0) {
			numOfDigits++ ;
		}
    	else if (isalpha(c)) {
    		numOfAlpha++;
		}
    	else {
    		numOfOthers++;	
		} 
    }
    
    printf("%d\n", numOfDigits);
    printf("%d\n", numOfAlpha);
    printf("%d\n", numOfOthers);
	return 0;
}
