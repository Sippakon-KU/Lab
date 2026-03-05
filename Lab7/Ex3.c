#include <stdio.h>
#include <stdlib.h>

void stringcat(char src[], char dest[])
{
    int last_dest_index;
    for (int i = 0; dest[i] != '\0'; i++) {
        last_dest_index = i;
    }

    int i = 0;
    for (i; i < src[i] != '\0'; i++) {
        dest[last_dest_index + i] = src[i];
    }

    dest[last_dest_index + i] = '\0';
}

int main()
{
  char in1[100],in2[100];

  printf("Input 1: ");
  fgets(in1, 100, stdin);
  printf("Input 2: ");
  fgets(in2, 100, stdin);
  stringcat(in1,in2);
  printf(" Output: ");
  printf("%s\n",in2);
  return 0;
}