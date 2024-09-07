//https://www.ime.usp.br/~pf/algoritmos/aulas/ordena.html
//https://brunoribas.com.br/apostila-eda/ordenacao-elementar.html
//https://github.com/bcribas/benchmark-ordenacao

#include "ordenacao.h"
#include "ordenacao-elementar.c"
#include "ordenacao-eficiente.c"

void show(int v[], int l, int r){
    for(int i=l; i<=r; i++){
        printf("%d ", v[i]);
    }
    printf("\n");
}

int is_sorted(int v[], int l, int r){
    int p;
    for(p=r; p>l && v[p-1]<=v[p]; p--);

    return (p==l);
}


//time ./a.out selection < input/10-aleatorio
int main(int argc, char *argv[]) {
    int n;
    scanf("%d", &n);
    
    if(argc>2 && atoi(argv[2]) < n) n = atoi(argv[2]);
    printf("%d elementos\n", n);
    
    int *v = malloc(n*sizeof(int));

    for(int i=0; i<n; i++) {
        scanf("%d", &v[i]);
    }

    if(n<50) 
        show(v, 0, n-1);

    if(argc>1){
        if(!strcmp(argv[1], "shaker"))
            shaker(v, 0, n-1);
        
        else if(!strcmp(argv[1], "bubble"))
            bubble(v, 0, n-1);

        else if(!strcmp(argv[1], "selection"))
            selection(v, 0, n-1);
        else if(!strcmp(argv[1], "selection_r"))
            selection_r(v, 0, n-1);
        
        else if(!strcmp(argv[1], "insertion_s"))
            insertion_simples(v, 0, n-1);
        else if(!strcmp(argv[1], "insertion_o"))
            insertion_otimizado(v, 0, n-1);
        else if(!strcmp(argv[1], "insertion_op"))
            insertion_otimizado_pre(v, 0, n-1);
        
        else if(!strcmp(argv[1], "shell"))
            shell(v, 0, n-1);
        
        else if(!strcmp(argv[1], "merge"))
            merge_sort(v, 0, n-1);
        else if(!strcmp(argv[1], "mergebu"))
            mergeBU_sort(v, 0, n-1);
        
    }
    

    if(n<50) 
        show(v, 0, n-1);

    if(is_sorted(v, 0, n-1)) printf("ordenado.\n");
    else printf("não ordenado.\n");

    
    return 0;
}



