#include <stdio.h>
#include <stdlib.h>

int main() {
    char n_str[7], m_str[7];
    int n, m;
    int gcd;

    fgets(n_str, sizeof(n_str), stdin);
    n = atoi(n_str);

    fgets(m_str, sizeof(m_str), stdin);
    m = atoi(m_str);

    int min, max;
    if (m > n) {
        min = n;
        max = m;
    } else {
        min = m;
        max = n;
    }

    int res = max % min;
    while (res) {
        int temp = min;
        min = res;
        max = temp;
        res = max % min;
    }

    gcd = min;

    n /= gcd;
    m /= gcd;
    if (m > 1) {
        printf("= %d/%d", n, m);
    } else if (m == 1) {
        printf("= %d", n);
    }
}