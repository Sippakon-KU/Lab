#include <stdio.h>

int main() {
    char character[2];
    fgets(character, sizeof(character), stdin);

    char c = character[0];
    if (c >= 48 && c <= 57) {
        printf("Output: digit");
    } else if (c >= 97 && c <= 122) {
        printf("Output: lower case");
    } else if (c >= 65 && c <= 90) {
        printf("Output: upper case");
    } else {
        printf("Output: others");
    }

    return 0;
}