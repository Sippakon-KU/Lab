#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    char n_str[14];
    int n;

    fgets(n_str, 14, stdin);
    n = atoi(n_str);

    int a, b;
    double c;
    for (a = 3; a < n; a++) {
        for (b = a+1; b < n; b++) {
            c = sqrt(a*a + b*b);

            if (c + a + b == n){
                printf("(%d, %d, %.0lf)", a, b, c);
                return 0;
            }
        }
    }   

    printf("No triple found.");
}