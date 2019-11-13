// print diamond
#include <stdio.h>

int isOdd (int number) {
    if (number % 2 == 0) {
        return 0;
    } else {
        return 1;
    }
}


void printDiamond (char symbol, int length) {
    auto void sol1 (void);    
    
    char space = ' ';
    int mid = length / 2 + 1;

    if (isOdd(length)) {
        sol1();
    }
    else {
        printf("Length is even.\n");
    }

    void sol1 (void) {
        // print upper triangle
        for (int i=1; i<=mid; i++) { 
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

        // print upper triangle
        for (int i=mid-1; i>0; i--) { 
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

}

int main (void) {
    printDiamond('*', 9);

    return 0;
}


