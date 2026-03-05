#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    char size_str[4], pep_str[3], che_str[3], mus_str[3];
    int size, pep, che, mus;

    printf("Welcome to My Pizza Shop!!\n");
    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~\n");

    printf("Enter pizza size (1=s, 2=m, or 3=l): ");
    fgets(size_str, sizeof(size_str), stdin);
    size = atoi(size_str);

    printf("Extra pepperoni? (1=yes, 0=no): ");
    fgets(pep_str, sizeof(pep_str), stdin);
    pep = atoi(pep_str);

    printf("Extra cheese? (1=yes, 0=no): ");
    fgets(che_str, sizeof(che_str), stdin);
    che = atoi(che_str);

    printf("Extra mushroom? (1=yes, 0=no): ");
    fgets(mus_str, sizeof(mus_str), stdin);
    mus = atoi(mus_str);

    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~\n");

    // printf("%d %d %d", pep, che, mus);

    int diameter = 10;
    if (size == 2) {
        diameter = 16;
    } else if (size == 3) {
        diameter = 20;
    }

    float area, cost, price;
    
    area = M_PI * (diameter * diameter) / 4;
    // printf("area: %f\n", area);
    
    float fixedCost = 5, baseCost = 2, extraCost = 0;
    if (pep) {
        extraCost += 0.5;
    } 
    if (che) {
        extraCost += 0.25;
    }
    if (mus) {
        extraCost += 0.3;
    }

    cost = fixedCost + (baseCost * area) + (extraCost * area);
    // printf("extra cost: %f\n", extraCost);
    // printf("cost: %f\n", cost);

    price = 1.5 * cost;

    printf("Your order costs %.2f baht.\n", price);
    printf("Thank you.");

    return 0;
}