#include <stdio.h>
#include <stdlib.h>

typedef struct no {
    int dado;
    struct no *esq, *dir;
} no;

no* novoNo(int dado) {
    no* node = (no*)malloc(sizeof(no));
    node->dado = dado;
    node->esq = node->dir = NULL;
    return node;
}

no* inserir(no* node, int dado) {
    if (node == NULL) return novoNo(dado);
    if (dado < node->dado)
        node->esq  = inserir(node->esq, dado);
    else if (dado > node->dado)
        node->dir = inserir(node->dir, dado);
    return node;
}

void preOrdem(no *raiz) {
    if (raiz != NULL) {
        printf("%d ", raiz->dado);
        preOrdem(raiz->esq);
        preOrdem(raiz->dir);
    }
}

void emOrdem(no *raiz) {
    if (raiz != NULL) {
        emOrdem(raiz->esq);
        printf("%d ", raiz->dado);
        emOrdem(raiz->dir);
    }
}

void posOrdem(no *raiz) {
    if (raiz != NULL) {
        posOrdem(raiz->esq);
        posOrdem(raiz->dir);
        printf("%d ", raiz->dado);
    }
}

int main() {
    no *raiz = NULL;
    int valor;

    while (scanf("%d", &valor) != EOF) {
        raiz = inserir(raiz, valor);
    }

    preOrdem(raiz);
    printf(".\n");
    emOrdem(raiz);
    printf(".\n");
    posOrdem(raiz);
    printf(".\n");

    return 0;
}