#include <stdio.h>
#include <stdlib.h>

void DrawRangoli(int n) {
    if (n <=0 || n > 26) {
        printf("-");
        return;
    }

    char start = 96 + n;
    int left_loop_times = 2*n - 1, right_loop_times = 2*n - 2;
    
    // Top
    for (int row = 0; row < n; row++) {
        // Left
        for (int i = 0; i < left_loop_times; i++) {
            if (left_loop_times - i <= 2*(row+1) && i % 2 == 0) {
                printf("%c", start--);
            } else {
                printf("-");
            }
        }
        start++;
    
        // Right
        for (int i = 0; i < right_loop_times; i++) {
            if (i+1 <= 2*row && i % 2 != 0) {
                printf("%c", ++start);
            } else {
                printf("-");
            }
        }

        printf("\n");
    }

    // Bottom
    for (int row = n-1; row > 0; row--) {
        // Left
        for (int i = 0; i < left_loop_times; i++) {
            if (left_loop_times - i <= 2*(row) && i % 2 == 0) {
                printf("%c", start--);
            } else {
                printf("-");
            }
        }
        start++;
    
        // Right
        for (int i = 0; i < right_loop_times; i++) {
            if (i+1 <= 2*row - 1 && i % 2 != 0) {
                printf("%c", ++start);
            } else {
                printf("-");
            }
        }

        printf("\n");
    }
}

int main() {
    char n_str[4];
    int n;

    fgets(n_str, 4, stdin);
    n = atoi(n_str);

    DrawRangoli(n);
}