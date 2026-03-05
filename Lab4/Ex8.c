#include <stdio.h>
#include <stdlib.h>

long long int Binary(long long int n) {
    if (n == 1) {
        return 1;
    } else if (n == 0) {
        return 0;
    }

    int curr_bi = n % 2;
    return Binary(n/2) * 10 + curr_bi;
}

int main() {
    char n_str[14];
    long long int n;

    fgets(n_str, 14, stdin);
    n = atoi(n_str);

    printf("%lld", Binary(n));
}