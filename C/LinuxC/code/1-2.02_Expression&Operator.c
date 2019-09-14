// The example of book, practice how to use operator in the expression

#include <stdio.h>
#include <math.h>

int main() {
    float x, n;

    x = 17;
    n = 4;

    printf("The floor %f/%f is %f\n", x, n, floor(x/n));
    printf("The ceil  %f/%f is %f\n", x, n, ceil(x/n));


    x = 16;
    n = 4;

    printf("The floor %f/%f is %f\n", x, n, floor(x/n));
    printf("The ceil  %f/%f is %f\n", x, n, ceil(x/n));

    return 0;
}
