#include <stdio.h>
#include <stdlib.h>

typedef struct no
{
    int dado;
    struct no *esq, *dir;
} no;

typedef struct stack
{
    no *data;
    struct stack *next;
} stack;

stack *push(stack *top, no *node)
{
    stack *new_node = (stack *)malloc(sizeof(stack));
    new_node->data = node;
    new_node->next = top;
    return new_node;
}

no *pop(stack **top)
{
    stack *temp = *top;
    no *node = temp->data;
    *top = (*top)->next;
    free(temp);
    return node;
}

void pre_ordem(no *raiz)
{
    if (raiz == NULL)
        return;

    stack *s = NULL;
    s = push(s, raiz);

    while (s != NULL)
    {
        no *node = pop(&s);
        printf("%d ", node->dado);

        if (node->dir)
            s = push(s, node->dir);
        if (node->esq)
            s = push(s, node->esq);
    }
}