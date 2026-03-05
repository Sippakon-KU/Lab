#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct _product {
    char name[30];
    int amount;
    double totalCost;
} Product;

void printStock(Product stock[], int nStock)
{
    int i;
    printf("%-20s|%6s|%-10s\n", "    Product Name", "Amount", "     Total");
    for (i = 0; i < nStock; i++) {
        printf("%-20s|%6d|%10.2lf\n",
            stock[i].name, stock[i].amount, stock[i].totalCost);
    }
}

void reportStock(char *filename) {
    FILE *file = fopen(filename, "r");

    int n;
    fscanf(file, "%d", &n);
    
    Product stock[n];
    int uniqueN = 0;

    char date[9];
    char time[9];
    char name[20];
    int amount = 0;
    double price = 0;

    while (fscanf(file, "%[^,],%[^,],%[^,],%d,%lf\n", date, time, name, &amount, &price) == 5) {
        int foundSame = 0;

        for (int i = 0; i < uniqueN; i++) {
            if (strcmp(stock[i].name, name) == 0) {
                stock[i].amount += amount;
                stock[i].totalCost += price;
                
                foundSame = 1;

                break;
            }
        }

        if (!foundSame) {
            strcpy(stock[uniqueN].name, name);
            stock[uniqueN].amount = amount;
            stock[uniqueN].totalCost = price;

            uniqueN++;
        }
    }

    printStock(stock, uniqueN);

    fclose(file);
}

int main()
{
    char filename[20];
    scanf("%s", filename);
    reportStock(filename);
}