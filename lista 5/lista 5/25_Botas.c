#include <stdio.h>
#include <stdlib.h>
typedef struct celula {
    int dado;
    struct celula *prox;
} celula;

celula *cria_pilha(){
    celula *topo = malloc(sizeof(celula));
    topo->prox = NULL;
    return topo;
}

int pilhavazia(celula *p) {
    return p->prox == NULL ? 0 : 1;
}

void empilha (celula *p, int x){
    celula *novo = malloc(sizeof(celula));
    novo->dado = x;
    novo->prox = p->prox;
    p->prox = novo;
}

int desempilha (celula *p){
    celula *lixo = p->prox;
    int num = lixo->dado;
    p->prox = lixo->prox;
    return num;
}

int main(){
    celula *botas[30];
    int tam = 0, pares = 0;
    char pe;

    for(int i = 0; i <= 30; i++)
        botas[i] = cria_pilha();

    while(scanf("%d %c", &tam, &pe) != EOF){
        if(pilhavazia(botas[tam-30]) == 0)
            empilha(botas[tam-30], pe);
            
        else if(desempilha(botas[tam-30]) != pe) pares++;

        else {
            empilha(botas[tam-30], pe);
            empilha(botas[tam-30], pe);
        }
    }
    printf("%d\n", pares);
return 0;
}