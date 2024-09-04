#include <stdio.h>
#include <stdlib.h>
#define ENTER 10

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char c;
	int noDigits = 0, noLetters = 0, noOthers = 0;
	
	printf("Enter a string: "); 
	
	while (c != ENTER)
	{		
		c = getchar(); // scan 1 ky tu tu ban phim
		
		if (c >= '0' && c <= '9') 
		{
			noDigits++;
		}
		else if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		{
			noLetters++;
		}
		else
		{
			noOthers++;
		}
	}
	
	printf("The number of digits: %d\n", noDigits);
	printf("The number of letters: %d\n", noLetters);
	printf("The number of other keys: %d\n", noOthers);
	
	system("pause");
	return 0;
}
