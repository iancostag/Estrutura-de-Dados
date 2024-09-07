#include <stdlib.h>

typedef struct celula
{
    int dado;
    struct celula *prox;
} celula;

void empilha(celula *p, int x)
{
    celula *nova = malloc(sizeof(celula));
    nova->dado = x;
    nova->prox = p->prox;
    p->prox = nova;
}

int desempilha(celula *p, int *y)
{
    celula *pilha = p->prox;
    if (pilha == NULL)
    {
        return 0;
    }
    *y = pilha->dado;
    p->prox = pilha->prox;
    return 1;
}