// calculate how many 9 are there in range 1 to 100
#include <stdio.h>

int checkTheNumberOfDigits(int number){
	int digit = 0, tenDigit = 0;
	
	digit = number % 10;
	tenDigit = number / 10;
	
    int acc = 0;

    if (digit == 9) acc++;
    if (tenDigit == 9) acc++;

    return acc;
}

int main(void) {
    int n = 100;
	int i = 0;
    int result = 0;
    while(i <= n){
	    result += checkTheNumberOfDigits(i);
        // printf("%d %d\n", i, result);
        i++;
    }
    
    printf("result is %d\n", result);

	return 0;
}
