#include <stdio.h>

int main(){
    int n, m;
    int p;
    int pa[2] = {1,1};
    int pf[2];
    int auxAndaA ,auxAndaB,auxI ,auxSaiuA,auxSaiuB;
    int paSaiu[2];
    int pbSaiu[2];
    int checkA = 0;
    int pb[2];
    int checkB = 0;
    auxSaiuA = 0;
    auxSaiuB = 0;
    scanf("%d %d", &n, &m);
    pb[0] = n;
    pb[1] = m;
    scanf("%d", &p);
    if (p == 0 && (pb[0] == 1 && pb[1] == 1)){
        printf("Encontraram-se na posicao (%d,%d) no passo 0\n", pa[0],pa[1]);
        return 0;
    }else if(p == 0 && pb[0] != 1){
        printf("Nao se encontraram\n");
        return 0;
    }
    
    for (int i = 1; i <= p; i++)
    {
        scanf("%d", &auxAndaA);
        scanf("%d", &auxAndaB);
        if (auxAndaA == 1)
        pa[1]++;
        if (auxAndaA == 2)
        pa[1]--;
        if (auxAndaA == 3)
        pa[0]++;
        if (auxAndaA == 4)
        pa[0]--;
        if (auxAndaB == 1)
        pb[1]++;
        if (auxAndaB == 2)
        pb[1]--;
        if (auxAndaB == 3)
        pb[0]++;
        if (auxAndaB == 4)
        pb[0]--;        
        if (pa[0] == pb[0] && pa[1] == pb[1]){
            pf[0] = pa[0];
            pf[1] = pa[1];
            auxI = i;
        }
        if (((pa[0] < 1 || pa[1] < 1) || (pa[0] > n || pa[1] > m)) && checkA ==0){
            auxSaiuA = i;
            paSaiu[0] = pa[0];
            paSaiu[1] = pa[1];
            checkA = 1;
        } 
        if (((pb[0] < 1 || pb[1] < 1 ) || (pb[0] > n || pb[1] > m)) && checkB ==0){
            auxSaiuB = i;
            pbSaiu[0] = pb[0];
            pbSaiu[1] = pb[1];
            checkB = 1;
        }
        if ((pa[0] == pb[0] && pa[1] == pb[1]) ){

        printf("Encontraram-se na posicao (%d,%d) no passo %d\n", pf[0],pf[1],auxI);
        return 0;
        }
        else if (auxSaiuA != 0){
        printf("PA saiu na posicao (%d,%d) no passo %d\n",paSaiu[0],paSaiu[1],auxSaiuA);
        return 0;
        }
        else if (auxSaiuB != 0){
        printf("PB saiu na posicao (%d,%d) no passo %d\n",pbSaiu[0],pbSaiu[1],auxSaiuB);
        return 0;
        }
        else if(i == p){
            printf("Nao se encontraram\n");
            return 0;
        }
    }

    

    return 0;
}