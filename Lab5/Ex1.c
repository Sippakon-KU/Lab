#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    char n_str[10];
    long long int n, n_square;

    printf("Input n = ");
    fgets(n_str, 10, stdin);
    n = atoi(n_str);

    n_square = n*n;
    printf("n^2 = %lld\n", n_square);

    long long int expo = 10;
    long long int check = n_square % expo;
    while (n > check) {
        if (check == n) {
            break;
        }

        expo *= 10;
        check = n_square % expo;
    }

    if (n == check) {
        printf("Yes. %lld is automorphic number.", n);
    } else {
        printf("No. %lld is not automorphic number.", n);
    }
}