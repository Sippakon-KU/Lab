#include <stdio.h>
#include <stdlib.h>

int charcount(char *s)
{
    int i = 0;
    for (i; s[i] != '\0'; i++);

    return i;
}

void charweave(char *s, char *result)
{
    int n = charcount(s);

    int head = 0;
    int tail = n-1;
    for (int i = 0; i < n; i++) {
        result[i] = (i % 2 == 0) ? s[head++] : s[tail--];
    }

    for (int i = 0; i < n; i++) {
        result[i+n] = result[n-i-1];
    }

    result[2*n] = '\0';
}

int main()
{  
    char str[100],result[200];

    printf("String: ");
    fgets(str, 100, stdin);
    char *ch = str;
    while (*ch++ != '\n' || (*(--ch) = 0));
    charweave(str,result);
    printf("Output: %s\n",result);
    return 0;
}