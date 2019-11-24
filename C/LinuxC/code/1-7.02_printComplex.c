#include <stdio.h>
#include <math.h>



// struct
struct complex_struct {
    double real, imag;
} ;

// property of struct
double real_part (struct complex_struct z) {
    return z.real;
}

double img_part (struct complex_struct z) {
    return z.imag;
}

static int count = 0;
void print_struct (struct complex_struct z) {
    printf("\n=== %d ===\n", ++count);
    if (real_part(z) == 0.0) {
        printf("%fI\n", img_part(z));
    }
    else if (img_part(z) == 0.0) {
        printf("%f\n", real_part(z));
    }
    else {
        printf("%f + %fI\n", real_part(z), img_part(z));
    }
}

// instance method of struct
struct complex_struct make_from_real_img (double real, double imag) {
    struct complex_struct z;
    z.real = real;
    z.imag = imag;
    return z;
}

int main (void) {
    struct complex_struct z1, z2, z3, z4;
    
    double a = 1.0, b = -1.0, c = 2.0, d = -2.0, zero = 0;

    z1 = make_from_real_img(a, zero);
    print_struct(z1);

    z2 = make_from_real_img(zero, d);
    print_struct(z2);

    z3 = make_from_real_img(b, c);
    print_struct(z3);

    z4 = make_from_real_img(a, d);
    print_struct(z4);

    return 0;
}
