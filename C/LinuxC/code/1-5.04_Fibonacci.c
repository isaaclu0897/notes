// Recursion Fibonacci
#include <stdio.h>

int fibonacci(int n) {
        // base case
        if (n == 0 || n == 1) {
                return 1;
        } else {
                return fibonacci(n-1) + fibonacci(n-2);
        }

}


int main(void) {
	    for (int i = 0; i < 9; i++){
	            printf("input: %d\t", i+1); // sequence
                printf("output: fibonacciNumber is %d\n", fibonacci(i));
        }
	    return 0;
}
