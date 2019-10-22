// Use Euclidean algorithm to implement GCD
#include <stdio.h>

int swap(int *ap, int *bp) {
        int tmp = *ap;
        *ap = *bp;
        *bp = tmp;
        return 0;
}

int euclidGCD(int x1, int x2) {
        // let Bigger number to be x1
        if (x2 > x1) swap(&x1, &x2);

        int remainder = x1 % x2;

        // base case: If A can be divisible by B, then GCD is B
        if (remainder == 0) {
                return x2;
        } else {
                x1 = remainder;
                return euclidGCD(x1, x2);
        }

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
