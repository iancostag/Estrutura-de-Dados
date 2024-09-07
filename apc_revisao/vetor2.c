#include <stdio.h>

int main(){

int n,menor, MenorIndice;

scanf("%d",&n);
int vet[n];
for (int i = 0; i < n; i++)
{
   scanf("%d",&vet[i]);
   if (i == 0)
   menor = vet[i];
   if (vet[i] < menor){
    menor = vet[i];
    MenorIndice =i;
   }
}
printf("%d\n",MenorIndice);
return 0;
}