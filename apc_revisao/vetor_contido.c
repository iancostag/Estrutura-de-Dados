#include <stdio.h>

int main(){
    int n,n2,checkN2=0;
    scanf("%d", &n);
    int vet[n];

    for (int i = 0; i < n; i++){
        scanf("%d", &vet[i]);
    }

    scanf("%d", &n2);

    for (int j = 0; j < n; j++){
        if (vet[j] == n2)
            checkN2 = 1;
        
    }
    if (checkN2 == 1)
        printf("pertence\n");
    else if (checkN2 == 0)
        printf("nao pertence\n");
    return 0;
}