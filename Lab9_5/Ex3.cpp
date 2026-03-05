#include <iostream>
#include <stdlib.h>
#include <string>
using namespace std;

int FindMax(int *nums, int n) {
    int max = 0;
    for (int i = 0; i < n; i++) {
        if (nums[i] > max) {
            max = nums[i];
        }
    }

    return max;
}

int main() {
    int n, biggest;
    cin >> n;

    int *nums = (int *)malloc(sizeof(int) * n);

    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    biggest = FindMax(nums, n);

    string even, odd;
    for (int i = 1; i < biggest; i++) {
        int found = 0;
        for (int j = 0; j < n; j++) {
            if (i == nums[j]) {
                found = 1;
                break;
            }
        }

        if (!found) {
            if (i % 2 == 0) {
                even = (even == "")? to_string(i): even + " " + to_string(i);
            } else {
                odd = (odd == "")? to_string(i): odd + " " + to_string(i);
            }
        }
    }

    cout << odd << endl;
    cout << even << endl;
}