#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int data;
    struct Node* next;
} Node;

Node* front = NULL;
Node* rear = NULL;

void enqueue(int data) {
    Node* node = (Node*) malloc(sizeof(Node));
    node->data = data;
    node->next = NULL;
    if (rear == NULL) {
        front = rear = node;
        return;
    }
    rear->next = node;
    rear = node;
}

int dequeue() {
    if (front == NULL) {
        return -1;
    }
    Node* temp = front;
    int data = temp->data;
    front = front->next;
    if (front == NULL) {
        rear = NULL;
    }
    free(temp);
    return data;
}

int main() {
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        enqueue(i);
    }
    printf("Cartas descartadas:");
    while (front != rear) {
        printf(" %d", dequeue());
        enqueue(dequeue());
        if (front != rear) {
            printf(",");
        }
    }
    printf("\nCarta restante: %d\n", dequeue());
    return 0;
}