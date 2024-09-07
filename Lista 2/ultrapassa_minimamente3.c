#include <stdio.h>

int calcula(int *v, int soma){
    int i =0;
    int somaL = v[0];
    i = 1;
    while(somaL<=soma && v[i] != 0){
        somaL +=v[i];
        i++;
    }
    if(v[i]!= 0)
        calcula(&v[i],soma);
    if (somaL > soma)
    {
        printf("%d\n",v[i-1]);
    }
    





}