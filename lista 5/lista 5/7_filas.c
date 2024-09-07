#include <stdlib.h>

typedef struct celula
{
    int dado;
    struct celula *prox;
} celula;

void enfileira(celula **f, int x)
{
    celula *p = malloc(sizeof(celula));

    p->prox = (*f)->prox;
    (*f)->prox = p;
    (*f)->dado = x;
    *f = p;
}

int desenfileira(celula *f, int *y)
{
    celula *lixo = f->prox;
    if (f->prox == f)
    {
        return 0;
    }
    *y = lixo->dado;
    f->prox = lixo->prox;
    free(lixo);
    return 1;
}