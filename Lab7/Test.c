#include <stdio.h>
#include <stdlib.h>

int main() {
    int min = INT_MAX;
    int total = 0;
    for (int i = 0; i < 6; i++) {
        int current_price;
        scanf("%d", &current_price);

        total += current_price;

        if (current_price < min) {
            min = current_price;
        }
    }

    total -= min;

    printf("%d", total);
}