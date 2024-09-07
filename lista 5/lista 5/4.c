#include <stdlib.h>

typedef struct fila
{
    int *dados;
    int N, p, u;
} fila;

int enfileira(fila *f, int x)
{
    if ((f->u + 1) % f->N == f->p)
    {
        int *novo = realloc(f->dados, 2 * f->N * sizeof(int));
        if (novo == NULL)
        {
            return 0;
        }
        if (f->p != 0)
        {
            if (f->N - f->p < f->u)
            {
                for (int i = f->N - 1; i >= f->p; i--)
                    novo[i + f->N] = f->dados[i];
                f->p += f->N;
            }
            else
            {
                for (int i = 0; i < f->u; i++)
                    novo[i + f->N] = f->dados[i];
                f->u += f->N;
            }
        }

        f->N *= 2;
    }
    f->dados[f->u] = x;
    f->u = (f->u + 1) % f->N;
    return 1;
}
