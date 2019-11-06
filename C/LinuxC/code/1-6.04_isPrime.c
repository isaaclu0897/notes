// Is the number prime in range 1 to 100
#include <stdio.h>

int is_prime (int n) {
    int i;
    for (i = 2; i < n; i++)
        if (n % i == 0)
            return 0;
    
    if (n == 1) return 0;

    return 1;
}

int main (void) {
    int i;
    for (i = 1; i <= 100; i++)
        if (is_prime(i))
            printf("%d\t", i);
    
    printf("\n");
    return 0;
}
