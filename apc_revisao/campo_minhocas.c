#include <stdio.h>

int main(){
    int n,m,maiorLinha= 0 ,maiorLinha2 = 0,maiorColuna = 0,maiorColuna2 = 0;
    scanf("%d %d", &n, &m);
    int matrizCampo[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++){
        scanf("%d", &matrizCampo[i][j]);
        maiorLinha += matrizCampo[i][j];
       }
        if (maiorLinha >= maiorLinha2){
        maiorLinha2 = maiorLinha;
       }
       maiorLinha = 0;
    }
    for (int i = 0; i < m; i++){
     for (int j = 0; j < n; j++){
        maiorColuna += matrizCampo[j][i];
       }
        if (maiorColuna >= maiorColuna2){
            maiorColuna2 = maiorColuna;
        }
         maiorColuna = 0;
    }
    if (maiorColuna2 >= maiorLinha2)
        printf("%d", maiorColuna2);
    else printf("%d", maiorLinha2);
    return 0;
}