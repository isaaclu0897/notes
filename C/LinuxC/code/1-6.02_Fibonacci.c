// Fibonacci using while loop
#include <stdio.h>

int fibonacci(int n) {
        // base case
        int result = 1, term1 = 0, term2 = 1;
        int i = 0;
        while (i < n) {
            // ALG
            result = term1 + term2;
           
            // swap 
            term1 = term2;
            term2 = result;
            i++;
        }

        return result;

}


int main(void) {
	    for (int i = 0; i < 9; i++){
	            printf("input: %d\t", i+1); // sequence
                printf("output: fibonacciNumber is %d\n", fibonacci(i));
        }
	    return 0;
}
