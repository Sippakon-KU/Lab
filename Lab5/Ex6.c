#include <stdio.h>
#include <stdlib.h>

int main()
{
    char input[20];
    int i, a[5], b[5], c[10] ;

    printf("Enter array a:\n");
    for (int i = 0; i < 5; i++) {
        printf("Please enter an integer: ");
        fgets(input, 20, stdin);
        a[i] = atoi(input);
    }

    printf("Enter array b:\n");
    for (int i = 0; i < 5; i++) {
        printf("Please enter an integer: ");
        fgets(input, 20, stdin);
        b[i] = atoi(input);
    }

    for (int i = 0; i < 5; i++) {
        c[i] = a[i];
    }

    for (int i = 5; i < 10; i++) {
        c[i] = b[i-5];
    }

    printf("Array c: ");
    for (i = 0; i < 10; i++)
        printf("%d ", c[i]);
    
    printf("\n");

    return 0;
}