#include <stdio.h>
#include <stdlib.h>

int main() {
    char n_str[4], start_char;
    int n;

    fgets(n_str, sizeof(n_str), stdin);
    n = atoi(n_str);

    if (n <= 0 || n > 26) {
        printf("-");
        return 0;
    }

    start_char = 'a' + n - 1;

    for (int i = 0; i < n; i++) {
        printf("%c", start_char--);

        if (n > 1) {
            printf("-");
        }
    }

    start_char += 2;

    for (int i = 0; i < n-1; i++) {
        printf("%c", start_char++);

        if (i+1 < n-1) {
            printf("-");
        }
    }
}
