#include <stdio.h>

int main() {
    char str[100];
    printf("String (without a space): ");
    scanf("%s", str);

    int i = 0;
    int count = 0;
    for (i; str[i] != '\0'; i++) {
        switch (str[i])
        {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
            printf("%c ", str[i]);
            count++;
            break;
        
        default:
            break;
        }
    }

    printf("\nThis string contains %d vowel%s", count, count>1 ? "s.": ".");
}