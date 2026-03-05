#include <stdio.h>
#include <stdlib.h>

int getBit(int n) {
    int checkInt = 8, binaryInt = 0;
    
    for (int i = 0; i < 4; i++) {
        binaryInt += (checkInt & n) != 0;
        binaryInt *= 10;
        checkInt >>= 1;
    }
    binaryInt /= 10;

    return binaryInt;
}

int main() {
    char n_char[4]; 
    int n;

    fgets(n_char, 4, stdin);
    n = atoi(n_char);

    printf("Binary number of %d is %04d.", n, getBit(n));
}