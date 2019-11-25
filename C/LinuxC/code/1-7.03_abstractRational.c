#include <stdio.h>

// struct
struct rational {
    int numerator, denominator;
} ;

// instance method of struct
struct rational make_rational (int numerator,int denominator) {
    struct rational f;
    f.numerator = numerator;
    f.denominator = denominator;
    return f;
}

// operation method of struct

int main (void) {
    struct rational a = make_rational(1, 8);  /* a= 1/8 */
    
    struct rational b = make_rational(-1, 8); /* b=-1/8*/
    
    // print_rational(add_rational(a, b));
    // 
    // print_rational(sub_rational(a, b));
    // 
    // print_rational(mul_rational(a, b));
    // 
    // print_rational(div_rational(a, b));
    
    return 0;
}
