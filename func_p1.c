#include<stdio.h>

int trocaPosicaoPorIndice(int v[],int n,int i){
if(n ==i)
	return 0;
int j=0;// v[0] == 2, j = 2 , v[2]== 0 | v[1] == 3, j == 3,v[3] = 1 | 

j = v[i];
trocaPosicaoPorIndice(v,n,i+1);
v[j] = i;
}


int main(){
int v[5] ={2,3,4,0,1};
printf("Antes da func:{2,3,4,0,1}\n");
trocaPosicaoPorIndice(v, 5,0);
int i = 0;
while(i < 5){
	printf("%d,",v[i]);
	i++;
}
printf("\n");

}




