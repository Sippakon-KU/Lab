#include <stdio.h>
#include <stdlib.h>

int remove_vowel(char *str)
{
    int count = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        count++;
    }

    int *vowel_index = (int *)malloc(sizeof(char) * (count+1)); 
    int j = 0;
    for (int i = 0; str[i] != '\0'; i++) {
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
            vowel_index[j++] = i;
            break;
        default:
            break;
        }
    }

    j = 0;
    int replace_index = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        if (i != vowel_index[j]) {
            str[replace_index++] = str[i];
        } else {
            j++;
        }
    }

    str[replace_index] = '\0';
}

int main()
{  
    char str[80];

    printf(" Input: ");
    fgets(str, 80, stdin);

    remove_vowel(str);
    printf("Output: %s\n",str);

    return 0;
}