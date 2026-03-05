#include <stdio.h>
#define BOARD_SIZE 8

void bishopMoves(char board[BOARD_SIZE][BOARD_SIZE], int x, int y) {
    int baseRight = x + y;
    int baseLeft = x - y;

    for(int i = 0; i < BOARD_SIZE; i++) {
        for (int j = 0; j < BOARD_SIZE; j++) {
            if (i == y && j == x) {
                board[i][j] = 'B';
            } else if (i+j == baseRight || j-i == baseLeft) {
                board[i][j] = 'X';
            }
        }
    }
}

int main() {
    char board[BOARD_SIZE][BOARD_SIZE];
    int x, y;

    for(int i = 0; i < BOARD_SIZE; i++) {
        for (int j = 0; j < BOARD_SIZE; j++) {
            board[i][j] = ' ';
        }
    }

    printf("Enter Bishop's X Y position: ");
    scanf("%d %d", &x, &y);
    bishopMoves(board, x, y);

    printf("  0 1 2 3 4 5 6 7\n");
    printf("------------------\n");
    for(int i = 0; i < BOARD_SIZE; i++) {
        for (int j = 0; j < BOARD_SIZE; j++) {
            if (j == 0) {
                printf("%d|", i);
            }

            printf("%c|", board[i][j]);
        }
        printf("\n------------------\n");
    }
}