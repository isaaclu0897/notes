#include <stdio.h>
#include <math.h>



// struct
struct complex_struct {
    double x, y;
} ;

// property of struct
double real_part (struct complex_struct z) {
    return z.x;
}

double img_part (struct complex_struct z) {
    return z.y;
}

double magnitude (struct complex_struct z) {
    return sqrt(z.x * z.x + z.y * z.y);
}

double angle (struct complex_struct z) {
    return atan2(z.y, z.x);
}

static int count = 0;
void print_struct (struct complex_struct z) {
    printf("\n=== %d ===\n", ++count);
    printf("%f %f\n", z.x, z.y);
    printf("%f %f\n", real_part(z), img_part(z));
    printf("%f %f\n", magnitude(z), angle(z));
}

// instance method of struct
struct complex_struct make_from_real_img (double x, double y) {
    struct complex_struct z;
    z.x = x;
    z.y = y;
    return z;
}

struct complex_struct make_from_mag_ang (double r, double A) {
    struct complex_struct z;
    z.x = r * cos(A);
    z.y = r * sin(A);
    return z;
}

// operation method of struct
struct complex_struct add_complex (
        struct complex_struct z1,
        struct complex_struct z2
        ) {
    return make_from_real_img(
            real_part(z1) + real_part(z2),
            img_part(z1) + img_part(z2)
            );
}

struct complex_struct sub_complex (
        struct complex_struct z1,
        struct complex_struct z2
        ) {
    return make_from_real_img(
            real_part(z1) - real_part(z2),
            img_part(z1) - img_part(z2)
            );
}

struct complex_struct mul_complex (
        struct complex_struct z1,
        struct complex_struct z2
        ) {
    return make_from_mag_ang(
            magnitude(z1) * magnitude(z2),
            angle(z1) + angle(z2)
            );
}

struct complex_struct div_complex (
        struct complex_struct z1,
        struct complex_struct z2
        ) {
    return make_from_mag_ang(
            magnitude(z1) / magnitude(z2),
            angle(z1) - angle(z2)
            );
}

int main (void) {
    struct complex_struct z2, z3, z4, z5, z6;
    
    struct complex_struct z1 = { 3.0, 4.0 };
    print_struct(z1);

    double a = 6.0, b = 8.0;
    z2 = make_from_real_img(a, b);
    print_struct(z2);

    z3 = add_complex(z1, z2);
    print_struct(z3);
    
    z4 = sub_complex(z1, z2);
    print_struct(z4);

    z5 = mul_complex(z1, z2);
    print_struct(z5);

    z6 = div_complex(z1, z2);
    print_struct(z6);

    return 0;
}
