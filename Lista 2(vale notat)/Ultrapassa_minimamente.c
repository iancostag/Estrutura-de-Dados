#include <stdio.h>

void ultrapassaMin(int vet[], int i, int soma, int ultrapassa) {
    
    if (vet[i] == 0) return;
    soma += vet[i];
    if (soma > ultrapassa) {
        printf("%d\n", vet[i]);
        soma = 0;
    }
    ultrapassaMin(vet, i + 1, soma, ultrapassa);
}

int main(){
    int vet[1000];
    int ultrapassa;
    int i = 0;

    do {
        scanf("%d", &vet[i]);
    } while (vet[i++] != 0);
  
    scanf("%d", &ultrapassa);
    ultrapassaMin(vet, 0, 0, ultrapassa);

    printf("\n");
    return 0;
}