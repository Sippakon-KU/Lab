#include <stdio.h>
#include <stdlib.h>

int GetValidPos(int n, int pos) {
    if (pos < 0) {
        return 0;
    } else if (pos > n-2) {
        return n-2;
    }

    return pos;
}

void Draw(int n, int pos) {
    for (int row = 0; row < n; row++) {
        for (int col = 0; col < 5; col++) {
            if (col == 0 || col == 4) {
                printf("|");
            } else if (row == pos && col == 2) {
                printf("O");
            } else if (row-1 == pos && col == 2) {
                printf("^");
            }
            else {
                printf("-");
            }
        }

        printf("\n");
    }
}

int main() {
    char n_char[14], step_char[14];
    int n, step, pos;

    printf("Input number of stairs: ");
    fgets(n_char, 14, stdin);
    n = atoi(n_char);
    pos = n-2;

    int round = 1;
    while (1) {
        printf("---- round %d ----\n", round);
        round++;

        Draw(n, pos);

        printf("Input step command: ");
        fgets(step_char, 14, stdin);
        step = atoi(step_char);

        if (step == 0) break;

        pos = GetValidPos(n, pos-step);
    }
}