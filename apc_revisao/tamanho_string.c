#include <stdio.h>

int main(){
    char nome2[1000];
    int contador = 0;
    scanf("%s" , nome2);

    for (; nome2[contador] != '\0' ; contador++);
    printf("%d", contador);

    return 0;
}