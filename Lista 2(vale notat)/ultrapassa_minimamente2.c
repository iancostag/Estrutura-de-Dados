#include <stdio.h>
#include <stdlib.h>

typedef struct Lista {
    int valor;
    struct Lista *prox;
} Lista;

Lista *criarNo(int valor) {
    Lista *novoNo = malloc(sizeof(Lista));
    novoNo->prox = NULL;
    novoNo->valor = valor;
    return novoNo;
}

int main() {
    Lista *listaInicial = criarNo(1);
    Lista *auxiliar = listaInicial;

    int totalElementos = 0, numero;
    do {
        scanf("%d", &numero);
        if(numero != 0) {
            auxiliar->prox = criarNo(numero);
            auxiliar = auxiliar->prox;
            totalElementos++;
        }

    } while(numero != 0);

    int i = 0, resultado[totalElementos], soma = 0, limite;
    scanf("%d", &limite);

    Lista *noAtual = listaInicial->prox;
    while(noAtual != NULL) {
        soma += noAtual->valor;
        if(soma > limite) {
            resultado[i] = noAtual->valor;
            soma = 0;
            i++;
        }

    noAtual = noAtual->prox;
    }

    for(int j = i-1; j >= 0; j--) 
        printf("%d\n", resultado[j]);

    Lista *temp;
    while (listaInicial->prox != NULL) {
        temp = listaInicial->prox;
        listaInicial->prox = listaInicial->prox->prox;
        free(temp);
    }

    free(listaInicial);
    return 0;
}