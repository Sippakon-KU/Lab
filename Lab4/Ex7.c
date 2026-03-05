#include <stdio.h>
#include <stdlib.h>

int main() {
    char n_str[4];
    int n;

    fgets(n_str, 4, stdin);
    n = atoi(n_str);

    for (int row = 0; row < n; row++) {
        for (int col = 0; col < row + 1; col++) {
            printf("*");
        }
        printf("\n");
    }

    for (int row = n-1; row > 0; row--) {
        for (int col = 0; col < row; col++) {
            printf("*");
        }
        printf("\n");
    }
}