#include <stdio.h>

int main(){
    int n,tamanhoImpar=0,tamanhoPar=0;
    scanf("%d", &n);
    int vet[n],vetPar[n],vetImpar[n];

    for (int i = 0; i < n; i++){
        scanf("%d", &vet[i]);  
        if (vet[i] %2 == 0)
        vetPar[tamanhoPar++] = vet[i]; 
        else vetImpar[tamanhoImpar++] = vet[i];

    }
    for (int j = 0; j < tamanhoPar; j++){
        printf("%d ", vetPar[j]);
    }
    printf("\n");
    for (int k = 0; k < tamanhoImpar; k++){
        printf("%d ", vetImpar[k]);
    }

    printf("\n");
    return 0;
}