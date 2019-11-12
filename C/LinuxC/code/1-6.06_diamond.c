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

        for (int i=1; i<=mid; i++) { // print upper triangle
            for (int j=1; j<=mid; j++) { // print upper-right triangle
                if (j > (mid-i)) {
                    printf(" %c", symbol);
                }
                else {
                    printf(" %c", space);
                }
            }
            for (int j=mid+1; j<=length; j++) { // print upper-left triangle

                if (j < (mid+i)) {
                    printf(" %c", symbol);
                }
                else {
                    printf(" %c", space);
                }
            }    
            printf("\n");
        }

        for (int i=mid-1; i>0; i--) { // print upper triangle
            for (int j=1; j<=mid; j++) { // print lowwer-right triangle
                if (j > (mid-i)) {
                    printf(" %c", symbol);
                }
                else {
                    printf(" %c", space);
                }
            }
            for (int j=mid+1; j<=length; j++) { // print lowwer-left triangle

                if (j < (mid+i)) {
                    printf(" %c", symbol);
                }
                else {
                    printf(" %c", space);
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
    diamond('*', 9);

    return 0;
}
