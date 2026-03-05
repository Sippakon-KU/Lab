#include <stdio.h>

struct complex {
    float a, b;
};

struct complex add_complex(struct complex C, struct complex D)
{
    struct complex res = {C.a + D.a, C.b + D.b};
    return res;
}

struct complex multiply_complex(struct complex C, struct complex D)
{
    float a = C.a;
    float b = C.b; 
    float c = D.a; 
    float d = D.b;
    struct complex res = {a*c - b*d, a*d + b*c};
    return res;
}

void print_complex(char *word, struct complex A)
{
    char sign = '+';
    if (A.b < 0) {
        A.b = -A.b;
        sign = '-';
    }

    if (A.a != 0 && A.b != 0) {
        printf("%s%.1f %c %.1fi\n", word, A.a, sign, A.b);
    } else if (A.a == 0 && A.b == 0) {
        printf("%s0\n", word);
    } else if (A.a == 0) {
        printf("%s%.1fi\n", word, A.b);
    } else if (A.b == 0) {
        printf("%s%.1f\n", word, A.a);
    } 
}

int main()
{
  
    struct complex C, D, E, F;

    printf("Enter C: ");
    scanf("%f %f", &C.a, &C.b);
    printf("Enter D: ");
    scanf("%f %f", &D.a, &D.b);

    E = add_complex(C, D);
    F = multiply_complex(C, D);

    print_complex("C + D = ", E);
    print_complex("C x D = ", F);

    return 0;
}