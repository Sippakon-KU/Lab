#include <stdio.h>
#include <stdlib.h>

typedef struct node {
    int value;
    struct node *next;
} node;

void printList(node *pList) {
    node *currNode = pList;
    while (currNode != NULL) {
        printf("%d ", currNode->value);
        currNode = currNode->next;
    }

    printf("\n");
}

void insertNode(node **pList, int value) {
    node *newNode = (node *)malloc(sizeof(node));
    newNode->value = value;
    newNode->next = NULL;

    node *currNode = *pList;
    node *prevNode = NULL;

    while (currNode != NULL && currNode->value < value) {
        prevNode = currNode;
        currNode = currNode->next;
    }

    if (*pList == NULL) {
        *pList = newNode;
        return;
    }

    if (prevNode == NULL) {
        *pList = newNode;
        newNode->next = currNode;
        return;
    }

    prevNode->next = newNode;
    newNode->next = currNode;
}

int main() {
    int i, value;
    node *pList=NULL;

    int n;
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        scanf(" %d", &value);
        insertNode(&pList, value);
        printList(pList);
    }

    printList(pList);
}