#include <stdlib.h>

typedef struct celula
{
    int dado;
    struct celula *prox;
} celula;

celula *enfileira(celula *f, int x)
{
    celula *p = malloc(sizeof(celula));
    p->prox = f->prox;
    f->prox = p;
    f->dado = x;
    return p;
}