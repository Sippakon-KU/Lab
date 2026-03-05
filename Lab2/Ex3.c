#include <stdio.h>
#include <stdlib.h>

int main() {
    char salary_str[50];
    float salary, tax;

    fgets(salary_str, sizeof(salary_str), stdin);
    salary = atof(salary_str);

    if (salary < 0) {
        printf("Error: Salary must be greater or equal to 0");
    } else if (salary - 300000 > 0) {
        // printf("Big\n");
        float bigTax = (salary - 300000) * .1;
        printf("%.2f", bigTax + 15000);
    } else {
        // printf("Small\n");
        float bigTax = salary * .05;
        printf("%.2f", bigTax );
    }
}