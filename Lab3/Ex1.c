#include <stdio.h>
#include <stdlib.h>

int main() {
    char n_str[20];
    int n;

    fgets(n_str, sizeof(n_str), stdin);
    n = atoi(n_str);

    while (n > -1) {
        printf("%d\n", n--);
    }
}