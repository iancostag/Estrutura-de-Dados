#include <stdio.h>

int main(){
int n;
scanf("%d", &n);
int aux = n-1;
for (int i = 0; i < n; i++){
    for (int k = 0 ; k < aux; k++){
        printf(" ");    
    }
    for (int j = 0; j < (i+1)*2 - 1; j++){
        printf("*");
    }
    printf("\n");
    aux--;
}
    return 0;
}