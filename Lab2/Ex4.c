#include <stdio.h>
#include <stdlib.h>

int main() {
    char a_str[20], b_str[20], c_str[20];
    int a, b, c;

    printf("Enter length of side A: ");
    fgets(a_str, sizeof(a_str), stdin);
    a = atoi(a_str);

    printf("Enter length of side B: ");
    fgets(b_str, sizeof(b_str), stdin);
    b = atoi(b_str);

    printf("Enter length of side C: ");
    fgets(c_str, sizeof(c_str), stdin);
    c = atoi(c_str);

    if ((a + b) <= c || (a + c) <= b || (b + c) <= a || a <= 0 || b <= 0 || c <= 0) {
        printf("Triangle type is invalid.");
    } else if (a == b && a == c) {
        printf("Triangle type is equilateral.");
    } else if (a == b || a == c || b == c) {
        printf("Triangle type is isosceles.");
    } else if (a != b != c) {
        printf("Triangle type is scalene.");
    }
}