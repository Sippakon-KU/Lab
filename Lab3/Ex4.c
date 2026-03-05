#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int fibo(int n)
{
    double p1 = pow((1 + pow(5, 0.5)), n);
    double p2 = pow((1 - pow(5, 0.5)), n);
    double p3 = pow(2, n) * pow(5, 0.5);
    int fiboN = (p1 - p2) / p3;

    return fiboN;
}

int main()
{
    char input_n[5];
    fgets(input_n, 5, stdin);
    int n, i;
    n = atoi(input_n);
    for (int i = 0; i <= n; i++) {
        printf("F(%d) = %d\n", i, fibo(i));
    }
    return 0;
}