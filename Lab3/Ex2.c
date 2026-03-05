#include <stdio.h>
#include <stdlib.h>

int main() {
    char n_str[50], m_str[50];
    int n, m;
    long long int gcd, lcm;

    fgets(n_str, sizeof(n_str), stdin);
    n = atoll(n_str);

    fgets(m_str, sizeof(m_str), stdin);
    m = atoll(m_str);
    
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

    lcm = m / gcd * n;

    printf("GCD: %lld\n", gcd);
    printf("LCM: %lld", lcm);
}