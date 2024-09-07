#include <stdio.h>

int main(){
    int n,soma;
    scanf("%d", &n);
    int vet1[n],vet2[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &vet1[i]);
    }
    for ( int j = 0; j < n; j++)
    {
        scanf("%d",&vet2[j]);
    }
    for (int k = 0; k < n; k++)
    {
        soma = vet1[k]+vet2[k];
        printf("%d ",soma);
    }

    return 0;
}