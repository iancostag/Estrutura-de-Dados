#include<stdio.h>
#include<stdlib.h>


typedef struct celula{
    int dado;
    struct celula *prox;

} celula;

void insere_inicio (celula *le, int x){
    celula *p = malloc(sizeof(celula));
    p->dado = x;
    p->prox = le->prox;                     //  1 p:2  y?3 
    le->prox = p;

}
void insere_antes (celula *le, int x, int y){
    celula *p = malloc(sizeof(celula));
    p = le;  

    while(p->prox != NULL && p->prox->dado != y){ //percorre a lista até o prox ser null ou achar o Y
        p = p->prox; //linha que percorre
    }

    if(p->prox == NULL){
        celula *novo; // se o proximo é nulo quer dizer que y não está na lista. Logo insere no final
        novo = malloc(sizeof(celula));
        novo->dado = x;
        p->prox = novo;
    }else{

        insere_inicio(p,x); // se o proximo n é nulo então chamar insere no inicio antes do Y
    }
}
