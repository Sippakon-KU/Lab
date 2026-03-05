#include <stdio.h>
#include <stdlib.h>

int main() {
    char n_char[14];
    int n;

    printf("Enter n: ");
    fgets(n_char, 14, stdin);
    n = atoi(n_char);

    for (int row = 0; row < n; row++) {
        for (int col = 0; col < row+1; col++) {
            if (col % 2 == 0) {
                printf("-");
            } else {
                printf("x");
            }
        }

        printf("\n");
    }

    for (int row = 0; row < n-1; row++) {
        for (int col = 0; col < n-row-1; col++) {
            if (col % 2 == 0) {
                printf("-");
            } else {
                printf("x");
            }
        }

        printf("\n");
    }
}