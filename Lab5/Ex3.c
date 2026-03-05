#include <stdio.h>
#include <stdlib.h>

void shift_left(char str[], int n);

int main()
{
   char str[80], *c;
   char input[20];
   int n;

   printf("String: ");
   fgets(str, sizeof(str), stdin);
   for (c=str; *c && *c != '\n'; c++)
       ;
   *c = 0;

   printf("     n: ");
   fgets(input, 20, stdin);
   n = atoi(input);
   shift_left(str, n);
   printf("Output: >>%s<<\n", str);
   return 0;
}

void shift_left(char str[], int n) {
    int len = 0;
    int d = 0;
    while (str[d] != 0) {
            d++;
            len++;
    }

    if (len == 0) return;

    n = n % len;

    for (int i = 0; i < n; i++) {
        char curr_c = str[0];
        for (int j = 0; j < len-1; j++) {
            str[j] = str[j+1];
        };

        str[len-1] = curr_c;
    }
}