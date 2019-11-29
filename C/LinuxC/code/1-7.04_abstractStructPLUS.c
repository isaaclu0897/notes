#include <stdio.h>
#include <math.h>

// struct
enum coordinate_type { RECTANGULAR, POLAR };

struct complex_struct {
    enum coordinate_type t;
    double x, y;
} ;

// property of struct
double real_part (struct complex_struct z) {
    if (z.t == RECTANGULAR)
        return z.x;
    else
        return z.x * cos(z.y);
}

double img_part (struct complex_struct z) {
    if (z.t == RECTANGULAR)
        return z.y;
    else 
        return z.x * sin(z.y);
}

double magnitude (struct complex_struct z) {
    if (z.t == POLAR)
        return z.x;
    else
        return sqrt(z.x*z.x + z.y*z.y);
}

double angle (struct complex_struct z) {
    if (z.t == POLAR)
        return z.y;
    else
        return atan2(z.y, z.x);
}

static int count = 0;
void print_struct (struct complex_struct z) {
    printf("\n=== %d ===\n", ++count);
    if (z.t == 0)
        printf("REC: x:%0.1f, y:%0.1fI\n", real_part(z), img_part(z));
    else
        printf("POL: R:%0.1f, a:%0.1f@\n", magnitude(z), angle(z));
}

// instance method of struct
struct complex_struct make_from_real_img (double x, double y) {
    struct complex_struct z;
    z.t = RECTANGULAR;
    z.x = x;
    z.y = y;
    return z;
}

struct complex_struct make_from_mag_ang (double r, double A) {
    struct complex_struct z;
    z.t = POLAR;
    z.x = r;
    z.y = A;
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
    struct complex_struct z1 = { RECTANGULAR, 1.0, 2.0};        // REC: x:1.0, y:2.0I
    struct complex_struct z2 = { .t = RECTANGULAR, .y = 4.0};   // REC: x:0.0, y:4.0I
    struct complex_struct z3 = { RECTANGULAR, 5.0};             // REC: x:5.0, y:0.0I
    struct complex_struct z4 = { POLAR, 10.0, 0.8};             // POL: R:10.0, a:0.8@
    struct complex_struct z5 = { POLAR, 0.4, 1.1};              // POL: R:0.4, a:1.1@

    count = 0;
    print_struct(z1);
    print_struct(z2);
    print_struct(z3);
    print_struct(z4);
    print_struct(z5);

    count = 0;
    print_struct(add_complex(z1, z3)); // REC: x:6.0, y:2.0I
    print_struct(sub_complex(z1, z2)); // REC: x:1.0, y:-2.0I
    print_struct(mul_complex(z4, z5)); // POL: R:4.0, a:1.9@
    print_struct(div_complex(z2, z5)); // POL: R:10.0, a:0.5@

    return 0;
}
