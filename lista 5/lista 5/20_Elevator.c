#include <stdio.h>
#include <stdlib.h>
int main() {
    int f, s, g, u, d;
    scanf("%d %d %d %d %d", &f, &s, &g, &u, &d);
    int visitados[1000*f], fila[1000*f], inicio = 0, fim = 0;

    fila[fim++] = s;
    visitados[s] = 1;

    int apertos = 0, qtd = 1;
    while (inicio < fim) {
        int qtd_nova = 0;

        for (int i = 0; i < qtd; i++) {
            int atual = fila[inicio++];

            if (atual == g) {
                printf("%d\n", apertos);
                return 0;
            }

            int andar_acima = atual + u;
            int andar_abaixo = atual - d;

            if (andar_acima <= f && !visitados[andar_acima]) {
                visitados[andar_acima] = 1;
                fila[fim++] = andar_acima;
                qtd_nova++;
            }

            if (andar_abaixo >= 1 && !visitados[andar_abaixo]) {
                visitados[andar_abaixo] = 1;
                fila[fim++] = andar_abaixo;
                qtd_nova++;
            }
        }
        apertos++;
        qtd = qtd_nova;
    }

    printf("use the stairs\n");
    return 0;
}