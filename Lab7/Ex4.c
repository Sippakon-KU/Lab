#include <stdio.h>
#include <stdlib.h>

int countDiff(char* a, char* b, int len) {
    int count = 0;
    for (int j = 0; j < len; j++) {
        if (a[j] != b[j]) {
            count++;
        }
    }

    return count;
}

int main() {
    int word_len, n;
    scanf("%d %d", &word_len, &n);

    char *last_word = (char *)malloc(sizeof(char) * (word_len+1));
    *last_word = '\0';

    for (int i = 0; i < n; i++) {
        char *current_word = (char *)malloc(sizeof(char) * (word_len+1));

        scanf("%s", current_word);

        if (*last_word == '\0') {
            last_word = current_word;
            continue;
        }

        int count = countDiff(last_word, current_word, word_len);

        if (count > 2) {
            break;
        } else {
            last_word = current_word;
        }
    }

    printf("%s", last_word);
}