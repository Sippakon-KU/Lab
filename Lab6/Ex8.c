#include <stdio.h>
#include <stdlib.h>

unsigned long *fibo_array(unsigned int n, double *golden_ratio);

int main() {
    // เขียนฟังก์ชัน main เพื่อทดสอบฟังก์ชัน fibo_array เอง
    int n;
    double gloden_ratio;
    scanf("%d", &n);

    unsigned long *arr = fibo_array(n, &gloden_ratio);

    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    printf("%lf", gloden_ratio);

    return 0;
}

unsigned long *fibo_array(unsigned int n, double *golden_ratio) {
    unsigned long *arr = (unsigned long *)malloc(sizeof(unsigned long) * n);
    arr[0] = 0;
    arr[1] = 1;

    for (int i = 2; i < n; i++) {
        arr[i] = arr[i-1] + arr[i-2];
    }

    double fibo_n = arr[n-1] + arr[n-2];
    double fibo_n1 = fibo_n + arr[n-1];
    *golden_ratio = fibo_n1 / fibo_n;

    return arr;
}