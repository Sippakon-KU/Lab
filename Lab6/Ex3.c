#include <stdio.h>
#include <stdlib.h>

#define BOARD_SIZE 8

void setPieceOnTable(int board[][BOARD_SIZE], char piece, int xPos, int yPos);

int main() {
    int board[BOARD_SIZE][BOARD_SIZE];
    int n;

    for(int i = 0; i < BOARD_SIZE; i++) {
        for (int j = 0; j < BOARD_SIZE; j++) {
            board[i][j] = ' ';
        }
    }

    scanf("%d", &n);

    for(int i = 0; i < n; i++) {
        char piece;
        int x, y;

        scanf(" %c(%d, %d)", &piece, &x, &y);
        setPieceOnTable(board, piece, x, y);
        // printf("%c %d %d\n", piece, x, y);
    }

    printf("------------------\n");
    printf("  0 1 2 3 4 5 6 7\n");
    for(int i = 0; i < BOARD_SIZE; i++) {
        for (int j = 0; j < BOARD_SIZE; j++) {
            if (j == 0) {
                printf("%d|", i);
            }
            printf("%c|", board[i][j]);
        }

        printf("\n");
    }
}

void setPieceOnTable(int board[][BOARD_SIZE], char piece, int xPos, int yPos)
{
    board[yPos][xPos] = piece;
}