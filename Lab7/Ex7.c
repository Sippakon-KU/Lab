#include <stdio.h>

void roman2arabic(char input[], char output[])
{
    int count = 0;
    int i = 0, j = 0;
    for (i; input[i] != '\0'; i++) {
        if (input[i] == 'I') {
            count++;
        } else if (input[i] == 'V') {
            if (count < 5) {
                count = 5-count;
            } else {
                count += 5;
            }
        } else if (input[i] == 'X') {
            count = count - 1 + 9;
        } else if (input[i] != 'I' && input[i] != 'V' && input[i] != 'X' && count != 0) {
            output[j++] = count + '0';
            output[j++] = input[i];
            count = 0;
        } else {
            output[j++] = input[i];
        }
    }

    if (count) {
        output[j++] = count + '0';
    }

    output[j] = '\0';
}

int main(){  
    char input[80],output[80];

   printf(" Input: ");
   fgets(input, 80, stdin);
   char *ch = input;
   while (*ch++ != '\n' || (*(--ch) = 0));

   roman2arabic(input,output);
   printf("Output: %s\n",output);

   return 0;
}