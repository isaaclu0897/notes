// calculate how many 9 are there in range 1 to 100
#include <stdio.h>

int checkTheNumberOfDigits(int number){
	int digit = 0, tenDigit = 0;
	
	digit = number % 10;
	tenDigit = number / 10;
	
    int count = 0;

    if (digit == 9) count++;
    if (tenDigit == 9) count++;

    return acc;
}

int main(void) {
    int endNumber = 100;
    int result = 0;
    for (int i=0; i<=endNumber; i++){
	    result += checkTheNumberOfDigits(i);
        // printf("%d %d\n", i, result);
    }
    
    printf("result is %d\n", result);

	return 0;
}
