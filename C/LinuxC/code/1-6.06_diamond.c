// print diamond
#include <stdio.h>

int isOdd (int number) {
    if (number % 2 == 0) {
        return 0;
    } else {
        return 1;
    }
}

void diamond (char symbol, int length) {
    if (isOdd(length)) {
        char space = ' ';
        int mid = length / 2 + 1;

        printf("%d\n", mid);
        for (int i=1; i<=mid; i++) {
            for (int j=1; j<=mid; j++) {
                if (j > (mid-i)) {
                    printf("%d%c", j, symbol);
                }
                else {
                    printf("%d%c", j, space);
                }
            }
            for (int j=mid+1; j<=length; j++) {
                if (j < (mid+i)) {
                    printf("%d%c", j, symbol);
                }
                else {
                    printf("%d%c", j, space);
                }
            }
        printf("\n");
        }
    }
    else {
        printf("Length is even.\n");
    }
}

int main (void) {
    diamond('*', 7);

    return 0;
}
