#include <stdio.h>
int repetidos(int v[10000],int qtd,int index){
    int contador= -1;
    for (int i = 0; i < qtd; i++) if (v[i] == v[index]) contador++;   
    return contador;
}