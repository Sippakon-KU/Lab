#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    char n_str[14];
    int n;
    printf("Enter n: ");
    fgets(n_str, 14, stdin);
    n = atoi(n_str);

    double total = 0; 
    for (int i = 0; i < n; i++) {
        total += (4.0 / (2*i + 1)) * pow(-1, i);
    }

    printf("%.10lf", total);
}