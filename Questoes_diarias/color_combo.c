#include<stdio.h>


int formula(int B, int N, int i){

    int ponto = 0;
    if(N < 4){ 
        ponto = B;
    }
    else{
        if(N > 7){
            ponto = (B + (N-3)*100) * 1.50;
        }else
            ponto = (B + (N-3)*100) * 1.25;
    }   
    if (ponto == 1){
        printf("Caso %d: 1 ponto\n",i);
    }else{

        printf("Caso %d: %d pontos\n", i, ponto);
    }
}


int main(){


    int T, B, N;

    scanf("%d", &T);
    for (int i = 1; i <= T; i++)
    {
        scanf("%d %d", &B, &N);
        formula(B,N,i);
    }
    
}