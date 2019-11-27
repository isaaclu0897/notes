#include <stdio.h>
#include <stdlib.h>

// struct
struct rational {
    int num, den;
} ;

// method gcd and lcm
// formula: a * b = gcd(a, b) * lcm(a, b)
int gcd(int a, int b) {
    if (a == 0) 
        return b; 
    return gcd(b % a, a); 
}

int lcm(int a, int b) {
    return (a * b) / gcd(a, b); 
}

// instance method of struct
struct rational make_rational (int numerator, int denominator) {
    struct rational f;

    if (denominator < 0) {
        numerator = -numerator;
        denominator = -denominator;
    }

    int gcd_fra = 0;
    gcd_fra = abs(gcd(numerator, denominator));
    f.num = numerator / gcd_fra;
    f.den = denominator / gcd_fra;

    return f;
}

// operation method of struct
void print_rational (struct rational f) {
    if (f.num == 0)
        printf("rational(0)\n");
    else
        printf("rational(%d / %d)\n", f.num, f.den);
}

struct rational add_rational (struct rational f1, struct rational f2) {
    struct rational f;
    int lcm_den = lcm(f1.den, f2.den);
    f1.num *= (lcm_den / f1.den);
    f2.num *= (lcm_den / f2.den);

    return make_rational(f1.num + f2.num, lcm_den);
}

struct rational sub_rational (struct rational f1, struct rational f2) {
    f2.num = -f2.num;   // reverse logic

    return add_rational(f1, f2);
}

struct rational mul_rational (struct rational f1, struct rational f2) {
    
    return make_rational(f1.num * f2.num, f1.den * f2.den);
}

struct rational div_rational (struct rational f1, struct rational f2) {
    // reverse logic
    int tmp = 0;
    tmp = f2.num;
    f2.num = f2.den;
    f2.den = tmp;

    return mul_rational(f1, f2);
}

int main (void) {
    struct rational a = make_rational(1, 6);  /* a= 1/6 */

    struct rational b = make_rational(7, 1); /* b= 7/15*/

    print_rational(add_rational(a, b));

    print_rational(sub_rational(a, b));

    print_rational(mul_rational(a, b));

    print_rational(div_rational(a, b));

    return 0;
}
