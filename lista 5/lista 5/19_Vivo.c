#include <stdio.h>
#include <stdlib.h>
typedef struct celula {
    int dado;
    struct celula *prox;
} celula;

celula *criar_no(int x) {
    celula *no = malloc(sizeof(celula));
    no->prox = NULL;
    no->dado = x;
return no;
}

int main() {
    int p, r, part, testes = 1;

    scanf("%d %d", &p, &r);
    while(p != 0 && r != 0) {
        celula *fila = criar_no(0);
        celula *aux = fila;

        //fila inicial
        for(int i = 0; i < p; i++) {
            scanf("%d", &part);
            aux->prox = criar_no(part);
            aux = aux->prox;
        }

        //rodadas
        for(int i = 0; i < r; i++) {
            int j, n, ordem, rodada[100];

            scanf("%d %d", &n, &ordem);
            for(j = 0; j < n; j++) 
                scanf("%d", &rodada[j]);

            j = 0;
            celula *aux1 = fila->prox, *f = fila;

            while (aux1 != NULL) {
                if ((ordem == 0 && rodada[j] == 1) || (ordem == 1 && rodada[j] == 0)) {
                    f->prox = aux1->prox;
                    aux1 = f->prox;
                } 

                else {
                    f = aux1;
                    aux1 = aux1->prox;
                }
                
                j++; 
            }
        }

        printf("Teste %d\n", testes);
        printf("%d\n", fila->prox->dado);
        testes++;

        scanf("%d %d", &p, &r);
    }

return 0;
}