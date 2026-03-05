#include <stdio.h>
#include <stdlib.h>

#define SIZE  97

typedef struct nodeType {
    int   item;
    struct nodeType* next;
} Node;

Node **getMatchNode(Node **arr, int value) {
    int key = value % SIZE;
    return &(arr[key]);
}

void insert(Node **arr, int value) {
    Node **head = getMatchNode(arr, value);

    Node *new = (Node *)malloc(sizeof(Node));
    new->item = value;
    new->next = NULL;
    
    if (*head == NULL) {
        *head = new;
    } else {
        new->next = *head;
        *head = new;
    }
}

void print(Node **arr) {
    for (int i = 0; i < SIZE; i++) {
        printf("KEY %2d:", i);
        
        Node *current = arr[i];
        while (current) {
            printf(" %d ", current->item);
            current = current->next;
        }

        printf("\n");
    }
}

int main() {
    Node *arr[SIZE] = {NULL};
    
    char action;
    int k;

    while (1) {
        printf("input> ");
        scanf(" %c", &action);
        if (action == 'q') {
            break;
        } else if (action == 'p') {
            print(arr);
        } else if (action == 'a') {
            scanf(" %d", &k);
            insert(arr, k);
        }
    }
}