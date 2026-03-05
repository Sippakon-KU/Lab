#include <stdio.h>

int sum(int array[], int size)
{
    int total = 0;
    for (size_t i = 0; i < size; ++i) {
        total += array[i];
    }
    return total;
}

int main() {
    int numbers[5] = {2, 3, 5, 7, 11};
    int total = sum(numbers, 5);
    printf("Summation of elements in numbers is %d\n", total);
    return 0;
}