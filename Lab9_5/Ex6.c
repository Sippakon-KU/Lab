#include <stdio.h>
#include <stdlib.h>

typedef struct node {
    int value;
    struct node *next;
} Node;

void insert(Node **head, int value) {
    Node *new = (Node *)malloc(sizeof(Node));
    new->value = value;
    new->next = NULL;
    
    if (*head == NULL) {
        *head = new;
        return;
    }
    
    Node *current = *head;
    Node *prev = NULL;
    
    while (current != NULL && current->value < value) {
        prev = current;
        current = current->next;
    }

    if (prev == NULL) {
        new->next = current;
        *head = new;
    } else {
        prev->next = new;
        new->next = current;
    }
}

void delete(Node **head, int value) {
    Node *current = *head;
    Node *prev = NULL;

    while (current) {
        if (current->value == value) {
            if (prev != NULL) {
                prev->next = current->next;
            } else {
                *head = current->next;
            }

            current = current->next;
            continue;
        }

        prev = current;
        current = current->next;
    }
}

void print(Node *head) {
    Node *current = head;

    printf("[ ");
    while (current) {
        printf("%d ", current->value);
        current = current->next;
    }

    printf("]\n");
}

int main() {
    Node *head = NULL;
    
    char action;
    int k;

    while (1) {
        printf("input> ");
        scanf(" %c", &action);

        if (action == 'q') {
            break;
        }
        else if (action == 'i') {
            scanf("%d", &k);
            insert(&head, k);
        }
        else if (action == 'd') {
            scanf("%d", &k);
            delete(&head, k);
        }
        else if (action == 'p') {
            print(head);
        }
    }
}