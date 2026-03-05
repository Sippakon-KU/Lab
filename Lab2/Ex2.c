#include <stdio.h>
#include <stdlib.h>
#include <float.h>

int main() {
    char sticker_str[20], price_str[50];
    int stickers, stickerLeft, discount;
    float price, discountedPrice;

    fgets(sticker_str, sizeof(sticker_str), stdin);
    stickers = atoi(sticker_str);

    fgets(price_str, sizeof(price_str), stdin);
    price = atof(price_str);

    if (stickers >= 9) {
        discount = 40;
        stickerLeft = stickers - 9;
    } else if (stickers >= 6) {
        discount = 30;
        stickerLeft = stickers - 6;
    } else if (stickers >= 3) {
        discount = 20;
        stickerLeft = stickers - 3;
    } else if (stickers >= 2) {
        discount = 15;
        stickerLeft = stickers - 2;
    } else if (stickers >= 1) {
        discount = 10;
        stickerLeft = stickers - 1;
    }

    discountedPrice = (100 - discount) * price / 100;
    printf("You get %d percents discount.\n", discount);
    printf("Total amount due is %.2f Baht.\n", discountedPrice);
    printf("And you have %d stickers left.\n", stickerLeft);
}