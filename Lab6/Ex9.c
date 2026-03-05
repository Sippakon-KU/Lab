#include <stdio.h>
#include <stdlib.h>

void str_extract(char** source, char** vowel);

int main() {
    char* str = malloc(201);
    scanf("%[^\n]s", str);
    char* vowel = NULL;

    str_extract(&str, &vowel);

    printf("Consonants: \"%s\"\n", str);
    printf("    Vowels: \"%s\"\n", vowel);

    free(str);
    free(vowel);
    return 0;
}

void str_extract(char** source, char** vowel) {
    int i = 0;
    int count = 0;
    while (*(*source + i) != '\0') {
        switch (*(*source + i))
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
                count++;
                break;
            default:
                break;
        }

        i++;
    }

    *vowel = (char *)malloc(sizeof(char) * (count+1));

    i = 0;
    int j = 0, wait = 0;
    while (*(*source + i) != '\0') {
        char c = *(*source + i);

        switch (c)
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
                *(*vowel + j) = c;
                j++;
                break;
            default:
                *(*source + wait) = c;
                wait++;
                break;
        }

        i++;
    }

    *(*vowel + j) = '\0';
    *(*source + wait) = '\0';
}