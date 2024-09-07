#include <stdio.h>
#include <stdlib.h>

typedef struct No {
    int id;
    int valor;
    int proxId;
    struct No* prox;
} No;

No* criarNo(int id, int valor, int proxId) {
    No* novoNo = (No*)malloc(sizeof(No));
    novoNo->id = id;
    novoNo->valor = valor;
    novoNo->proxId = proxId;
    novoNo->prox = NULL;
    return novoNo;
}

void adicionarNo(No** cabeca, No* novoNo) {
    if (*cabeca == NULL) {
        *cabeca = novoNo;
    } else {
        No* temp = *cabeca;
        while (temp->prox != NULL) {
            temp = temp->prox;
        }
        temp->prox = novoNo;
    }
}

No* encontrarNoPorId(No* cabeca, int id) {
    No* temp = cabeca;
    while (temp != NULL) {
        if (temp->id == id) {
            return temp;
        }
        temp = temp->prox;
    }
    return NULL;
}

int main() {
    int n;
    scanf("%d", &n);

    No* cabeca = NULL;
    for (int i = 0; i < n; i++) {
        int id, valor, proxId;
        scanf("%d %d %d", &id, &valor, &proxId);
        No* novoNo = criarNo(id, valor, proxId);
        adicionarNo(&cabeca, novoNo);
    }

    No* atual = cabeca;
    while (atual != NULL) {
        printf("%d\n", atual->valor);
        if (atual->proxId == -1) {
            break;
        }
        atual = encontrarNoPorId(cabeca, atual->proxId);
    }

    return 0;
}