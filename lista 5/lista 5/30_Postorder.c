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

void pos_ordem(no *raiz)
{
    if (raiz == NULL)
        return;

    stack *s1 = NULL;
    stack *s2 = NULL;

    s1 = push(s1, raiz);

    while (s1 != NULL)
    {
        no *node = pop(&s1);
        s2 = push(s2, node);

        if (node->esq)
            s1 = push(s1, node->esq);
        if (node->dir)
            s1 = push(s1, node->dir);
    }

    while (s2 != NULL)
    {
        no *node = pop(&s2);
        printf("%d ", node->dado);
    }
}