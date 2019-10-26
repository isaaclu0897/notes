// Use Euclidean algorithm to implement GCD (using while loop)
#include <stdio.h>

int euclidGCD(int x1, int x2) {
        // base case: If A can be divisible by B, then GCD is B
        int tmp;
        while (x2 != 0) {
            // printf("%d, %d\n", x1, x2);
            x1 = x1 % x2;
           
            // swap
            tmp = x1;
            x1 = x2;
            x2 = tmp;
        }

        return x1;

}


int main(void) {
    	int inputs[4][2] = {
                {34, 10},
                {20, 30},
                {30, 20},
                {72, 96}
                };
	
	    for (int i = 0; i < 4; i++){
                int gcd = 0;
                gcd = euclidGCD(inputs[i][0], inputs[i][1]);
	            printf("input: %d, %d\t", inputs[i][0], inputs[i][1]);
                printf("output: gcd is %d\n", gcd);
        }
	    return 0;
}
