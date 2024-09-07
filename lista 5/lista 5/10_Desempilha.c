#include <stdlib.h>

typedef struct celula
{
    int dado;
    struct celula *prox;
} celula;

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