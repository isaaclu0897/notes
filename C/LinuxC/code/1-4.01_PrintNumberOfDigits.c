// Print the Number of digits
#include <stdio.h>

void printTheNumberOfDigits(int number){
	int digit = 0, tenDigit = 0;
	
	digit = number % 10;
	tenDigit = number / 10;

	printf("the digit is %d\n", digit);
	printf("ths ten of digit is %d\n", tenDigit);
	
}


int main(void) {
    	int x = 16;
	
	printTheNumberOfDigits(x);

	return 0;
}
