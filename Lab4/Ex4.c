#include <stdio.h>
#include <stdlib.h>

void DrawSqure(int x, int y) {
    for (int row = 0; row < y; row++) {
        for (int col = 0; col < x; col++) {
            if (row == 0 || row == y-1 || (col == 0 || col == x-1)) {
                printf("*");
            } else {
                printf(" ");
            }

            if (col == x-1) {
                printf("\n");
                for (int k = 0; k < row + 1; k++) {
                    printf(" ");
                }
            }
        }
    }
}

int main() {
    char x_char[14], y_char[14];
    int x, y;

    fgets(x_char, 14, stdin);
    x = atoi(x_char);

    fgets(y_char, 14, stdin);
    y = atoi(y_char);

    DrawSqure(x, y);
}