#include <stdio.h>
#include <stdlib.h>

typedef struct fila {
    int *dados;
    int N, p, u;
} fila;

int desenfileira(fila *f, int *y) {
    if (f->p == f->u) { // Verifica se a fila está vazia
        return 0; //condição de parada
    }
    *y = f->dados[f->p]; 
    

    f->p = (f->p + 1) % f->N; 
    return 1; 
}