#include <stdio.h>
#include <stdlib.h>

int main() {
    char target_str[20];
    float target;

    printf("Enter your goal amount: ");
    fgets(target_str, 20, stdin);
    target = atof(target_str);

    int i = 0;
    float total_collected_money = 0;
    while (1) {
        i++;

        char today_money_str[20];
        float today_money;

        printf("Enter money collected today: ");
        fgets(today_money_str, 20, stdin);
        today_money = atof(today_money_str);

        total_collected_money += today_money;

        float left_money = target - today_money;
        if (left_money <= 0) {
            printf("Congratulations! You take %d day%s to reach your goal.\n", i, i > 1? "s": "");
            break;
        } else {
            printf("Total money collected up to day %d is %.2f. You need %.2f more.\n", i, total_collected_money, left_money);
            target = left_money;
        }
    }
}