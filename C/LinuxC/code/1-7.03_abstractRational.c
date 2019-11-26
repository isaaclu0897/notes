#include <stdio.h>

// struct
struct rational {
    int num, den;
} ;

// instance method of struct
struct rational make_rational (int numerator,int denominator) {
    struct rational f;
    f.num = numerator;
    f.den = denominator;
    return f;
}

// method gcd and lcm
int gcd(int a, int b) {
    if (a == 0) 
        return b; 
    return gcd(b % a, a); 
}

int lcm(int a, int b) {
        return (a * b) / gcd(a, b); 
}

// operation method of struct
void print_rational (struct rational f) {
    if (f.num == 0) {
        printf("rational(0)\n");
    }
    else {
        printf("rational(%d / %d)\n", f.num, f.den);
    }
}

struct rational add_rational (struct rational f1, struct rational f2) {
    struct rational f;
    int lcd = lcm(f1.den, f2.den);
    f1.num *= (lcd / f1.den);
    f2.num *= (lcd / f2.den);
    return make_rational(f1.num + f2.num, lcd);
}

struct rational sub_rational (struct rational f1, struct rational f2) {
    f2.num = -f2.num;   // reverse logic
    return add_rational(f1, f2);
}

// struct rational mul_rational (struct rational f1, struct rational f2) {
//     
// }

int main (void) {
    struct rational a = make_rational(1, 6);  /* a= 1/6 */
    
    struct rational b = make_rational(7, 15); /* b= 7/15*/
    
    print_rational(add_rational(a, b));
    
    print_rational(sub_rational(a, b));
     
    // print_rational(mul_rational(a, b));
    // 
    // print_rational(div_rational(a, b));
    
    return 0;
}
